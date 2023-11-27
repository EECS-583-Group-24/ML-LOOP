#include<stdio.h>
#include<math.h>

#define PI 3.14159265358979

int main(void) {

    int i;
    long long W, H, s, t;
    double theta, k;
    double aremax = 0;
    int count = 0;
    double area[180];

    scanf("%lld %lld %lld %lld", &W, &H, &s, &t);

    for (i = 0; i < 180; i += 1) {
        theta = i * PI / 180.0;

        k = 2 * s + (H - 2 * t) / tan(theta);

        if (k < W) {
            area[i] = H * k * 0.5;
            if (aremax < H * k * 0.5) {
                aremax = H * k * 0.5;
            }
        }
        else {
            area[i] = H * (2 * W - k) * 0.5;
            if (aremax < H * (2 * W - k) * 0.5) {
                aremax = H * (2 * W - k) * 0.5;
            }
        }
    }

    printf("%f", aremax);

    for (i = 0; i < 180; i++) {
        if (fabs(area[i] - aremax) < 0.000000001) {
            count++;

            if(2<=count)
                break;
        }
    }
    if (count == 0||count==1) {
        printf(" 0");
    }
    else {
        printf(" 1");
    }


    return 0;

}