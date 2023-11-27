#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <ctype.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>
#include <math.h>

#define N_MAX (100)
#define P_MAX (100)
#define DP_ARRAY_SIZE (N_MAX * P_MAX / 32 + 1)

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define ABSS(a, b) ((a) > (b) ? (a) - (b) : (b) - (a))

int compare_sz_asc(const void* a, const void* b) {
    return *((size_t*)a) < *((size_t*)b) ? -1 : 1;
}

int compare_sz_desc(const void* a, const void* b) {
    return *((size_t*)a) > * ((size_t*)b) ? -1 : 1;
}

int compare_i64_asc(const void* a, const void* b) {
    return *((int64_t*)a) < *((int64_t*)b) ? -1 : 1;
}

int compare_i64_desc(const void* a, const void* b) {
    return *((int64_t*)a) > * ((int64_t*)b) ? -1 : 1;
}

int compare_u64_asc(const void* a, const void* b) {
    return *((uint64_t*)a) < *((uint64_t*)b) ? -1 : 1;
}

int compare_u64_desc(const void* a, const void* b) {
    return *((uint64_t*)a) > * ((uint64_t*)b) ? -1 : 1;
}

int compare_c_asc(const void* a, const void* b) {
    return *((char*)a) < *((char*)b) ? -1 : 1;
}

int compare_c_desc(const void* a, const void* b) {
    return *((char*)a) > * ((char*)b) ? -1 : 1;
}

static size_t powSz(const size_t base, const size_t exp) {
    if (exp == 0) {
        return 1;
    }

    if (exp == 1) {
        return base;
    }

    if (exp % 2 == 0) {
        return powSz(base * base, exp / 2);
    }
    else {
        return base * powSz(base, exp - 1);
    }
}

static size_t comb(const size_t n, const size_t r) {
    size_t result = 1;

    for (size_t i = 0; i < r; i++) {
        result *= n - i;
        result /= i + 1;
    }

    return result;
}

static uint64_t combU64(const uint64_t n, const uint64_t r) {
    uint64_t result = 1;

    for (uint64_t i = 0; i < r; i++) {
        result *= n - i;
        result /= i + 1;
    }

    return result;
}

static size_t gcdZu(size_t m, size_t n) {
    size_t temp;

    while (m % n != 0) {
        temp = n;
        n = m % n;
        m = temp;
    }

    return n;
}

static uint64_t gcdU64(uint64_t m, uint64_t n)
{
    uint64_t temp;

    while (m % n != 0) {
        temp = n;
        n = m % n;
        m = temp;
    }

    return n;
}

typedef struct {
    uint64_t A;
    uint64_t B;
    uint64_t val;
} _status;

static _status status[200000];

typedef struct {
    uint64_t idx;
}BHeap_Val;

#define BHEAP_VAL_TYPE BHeap_Val

static int _bHeap_Compare(const BHEAP_VAL_TYPE* parent, const BHEAP_VAL_TYPE* node) {
    const uint64_t parentVal = status[parent->idx].val;
    const uint64_t nodeVal = status[node->idx].val;

    return parentVal >= nodeVal ? -1 : 1;
}

#define BHEAP_INVALID_NODE ((size_t)100000000)

typedef struct {
    BHEAP_VAL_TYPE val;
} BHeap_Node;

static struct {
    size_t size;
    int (*compare)(const BHEAP_VAL_TYPE* parent, const BHEAP_VAL_TYPE* node);
} bHeap_Info;
static BHeap_Node bHeap_Node[1 << 20];

static void bHeap_Init(int(*compare)(const BHEAP_VAL_TYPE* parent, const BHEAP_VAL_TYPE* node)) {
    bHeap_Info.size = 0;
    bHeap_Info.compare = compare;
}

static void bHeap_UpHeap(const size_t nodeIdx) {
    if (nodeIdx == 0) {
        return;
    }

    const size_t parentIdx = (nodeIdx + 1) / 2 - 1;

    const int compareResult = bHeap_Info.compare(&(bHeap_Node[parentIdx].val), &(bHeap_Node[nodeIdx].val));

    if (0 < compareResult) {
        const BHEAP_VAL_TYPE tmp = bHeap_Node[parentIdx].val;
        bHeap_Node[parentIdx].val = bHeap_Node[nodeIdx].val;
        bHeap_Node[nodeIdx].val = tmp;

        if (parentIdx != 0) {
            bHeap_UpHeap(parentIdx);
        }
    }
}

static void bHeap_DownHeap(const size_t nodeIdx) {
    if (bHeap_Info.size - 1 <= nodeIdx) {
        return;
    }

    const size_t leftIdx = 2 * (nodeIdx + 1) - 1;

    if (leftIdx < bHeap_Info.size) {
        const int leftResult = bHeap_Info.compare(&(bHeap_Node[nodeIdx].val), &(bHeap_Node[leftIdx].val));

        size_t swapTarget = leftResult < 0 ? BHEAP_INVALID_NODE : leftIdx;

        const size_t rightIdx = leftIdx + 1;

        if (rightIdx < bHeap_Info.size) {
            const int rightResult = bHeap_Info.compare(&(bHeap_Node[nodeIdx].val), &(bHeap_Node[rightIdx].val));

            if (swapTarget == BHEAP_INVALID_NODE) {
                if (0 < rightResult) {
                    swapTarget = rightIdx;
                }
            }
            else {
                if (0 < rightResult) {
                    const int rightLeftResult = bHeap_Info.compare(&(bHeap_Node[leftIdx].val), &(bHeap_Node[rightIdx].val));

                    if (0 < rightLeftResult) {
                        swapTarget = rightIdx;
                    }
                }
            }
        }

        if (swapTarget != BHEAP_INVALID_NODE) {
            const BHEAP_VAL_TYPE tmp = bHeap_Node[nodeIdx].val;
            bHeap_Node[nodeIdx].val = bHeap_Node[swapTarget].val;
            bHeap_Node[swapTarget].val = tmp;

            bHeap_DownHeap(swapTarget);
        }
    }
}

static void bHeap_Add(const BHEAP_VAL_TYPE val) {
    bHeap_Node[bHeap_Info.size].val = val;

    bHeap_Info.size++;

    bHeap_UpHeap(bHeap_Info.size - 1);
}

static void bHeap_RemoveTop(void) {
    if (bHeap_Info.size == 0) {
        return;
    }

    if (bHeap_Info.size == 1) {
        bHeap_Info.size--;
        return;
    }

    bHeap_Node[0].val = bHeap_Node[bHeap_Info.size - 1].val;

    bHeap_Info.size--;

    bHeap_DownHeap(0);
}

static BHEAP_VAL_TYPE* bHeap_GetTopVal(void) {
    return bHeap_Info.size == 0 ? NULL : &(bHeap_Node[0].val);
}

typedef struct {
    uint64_t cnt;
    size_t* child;
    size_t numChild;
    size_t maxNumChild;
} Tree_Node;

#define TREE_INIT_ALLOC (128)

static Tree_Node tree_Node[200000];

static void tree_Init(const uint64_t N) {
    for (uint64_t i = 0; i < N; i++) {
        tree_Node[i].cnt = 0;
        tree_Node[i].numChild = 0;
        tree_Node[i].child = malloc(sizeof(size_t) * TREE_INIT_ALLOC);
        tree_Node[i].maxNumChild = TREE_INIT_ALLOC;
    }
}

static void tree_AddChild(const size_t parent, const size_t child) {
    if (tree_Node[parent].maxNumChild <= tree_Node[parent].numChild) {
        tree_Node[parent].child = realloc(tree_Node[parent].child, sizeof(size_t) * tree_Node[parent].maxNumChild * 2);
        tree_Node[parent].maxNumChild *= 2;
    }

    tree_Node[parent].child[tree_Node[parent].numChild] = child;
    tree_Node[parent].numChild++;
}

int main(void) {
    char n[4];

    scanf("%s", n);

    for (size_t i = 0; i < 3; i++) {
        n[i] = n[i] == '1' ? '9' : '1';
    }

    puts(n);

    return 0;
}
