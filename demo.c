#include <stdio.h>  // printf
#include "yearfrac.h"

int main()
{
    int y1, m1, d1, y2, m2, d2;
    y1 = 2018; m1 = 12; d1 = 15;
    y2 = 2019; m2 = 3; d2 = 1;

    double yf;
    yf = yearfrac(ACTAFB,  y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(ACTISDA, y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(ACT360,  y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(ACT365F, y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(ACT365N, y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(D30360E2,y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(D30360E3,y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(D30360M, y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(D30360N, y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(D30360P, y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(D30360S, y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(D30360U, y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);
    yf = yearfrac(D30365,  y1, m1, d1, y2, m2, d1); printf("%.8f\n", yf);

	return 0;
}
