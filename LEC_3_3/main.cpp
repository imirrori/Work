// вывести сумму рядка f(x) = 1/2x^1 + 2/3x^2 + 3/4x^3 + 4/5x^4..
// при 0 < x < 1
// с точностью E = 10^-5

#include <math.h>
#include <stdio.h>

int main()
{
    const double eps = 1e-5;
    double sum = 0;
    double step = 0;
    double x = 0;

    printf("Please enter x (0 < x < 1): ");
    scanf("%lf", &x);

    if ((0 < x) && (x < 1))
    {
        for(int i = 1; true; ++i)
        {
            step = (double)i / (i + 1) * pow(x, i);
            if (step < eps)
                break;
            sum += step;
        }
    }

    printf("Result summ is: %f\n", sum);

    return 0;
}
