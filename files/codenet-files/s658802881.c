#include <stdio.h>
#include <stdlib.h>

int task_C (const unsigned int* len_sequence, unsigned int val_sequence[])
{
	// variables for this function
	register unsigned int maxval_1st;
	register unsigned int maxval_2nd;
	register unsigned int maxval_answer;

	// support variables for this function
	register size_t itr;

	// STEP.01
	// initialize the variables to store the maximum values of given sequence
	maxval_1st = 0U;
	maxval_2nd = 0U;

	// STEP.02
	// search the maximum values of given sequence
	for (itr = 0; itr < *len_sequence; itr++)
	{
		if (maxval_1st < val_sequence[itr])
		{ 
			maxval_2nd = maxval_1st;
			maxval_1st = val_sequence[itr];
		}
		else if (maxval_2nd < val_sequence[itr])
		{
			maxval_2nd = val_sequence[itr];
		}
		else
		{
			continue;
		}
	}

	// STEP.03
	// output the answer of this task
	for (itr = 0; itr < *len_sequence; itr++)
	{
		if ( val_sequence[itr] != maxval_1st ) { maxval_answer = maxval_1st; }
		else                                   { maxval_answer = maxval_2nd; }
		
		printf("%d\n", maxval_answer);
	}

	// STEP.END
	return EXIT_SUCCESS;
}

#define len_sequence_max 200000U

int main (void)
{
	// variables for main process
	unsigned int N;
	unsigned int A[len_sequence_max];

	// support variables for main process
	int rtvl;

	// STEP.01
	// read out the given data
	// (the length of the given sequence)
	rtvl = scanf("%d", &N);

	// STEP.02
	// read out the given data
	// (the values of the given sequence)
	for (register size_t itr = 0; itr < N; itr++) { rtvl = scanf("%d", &A[itr]); }

	// STEP.03
	// calculate & output the answer of the task
	rtvl = task_C(&N, A);

	// STEP.END
	return EXIT_SUCCESS;
}