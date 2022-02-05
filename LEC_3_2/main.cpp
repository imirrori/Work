// Написать программу, которая имеет меню,
// свыбором математической функции

/*
  1. calculate cos
  2. calculate sin
  3. exit
 */

#include <math.h>
#include <stdio.h>

int main()
{
    const int COS = 1;
    const int SIN = 2;
    const int EXIT = 3;

    int ch = 0;
    do
    {
        printf("%d. calculate cos\n", COS);
        printf("%d. calculate sin\n", SIN);
        printf("%d. exit\n", EXIT);
        if (scanf("%d", &ch) != 1)
        {
            break;
        }
        switch(ch)
        {
        case COS:
        {
            double x;
            printf("Please enter X: ");
            scanf("%lf", &x);
            printf("cos(X) = %f\n", cos(x));
            break;
        }
        case SIN:
        {
            double x;
            printf("Please enter X: ");
            scanf("%lf", &x);
            printf("sin(X) = %f\n", sin(x));
            break;
        }
        default:
            printf("Invalid enter\n");
        }
    }while(ch != EXIT);
    return 0;
}
