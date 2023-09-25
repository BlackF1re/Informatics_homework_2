#include <stdio.h>
#include <math.h>

int main(void)
{
    double x = 0;
    printf("Enter the X value:\n");
    scanf_s("%lf", &x);
	double result = pow(x, 2);

    if (x == 0)
    {
        printf("X value is zero\n");
    }
    else
    {
		for (double i = 256; i >= 2; i /= 2)
		result = pow(x, 2) + i / result;
		result = x / result;
		printf("Result is %lf", result);
    }
    return 0;
}