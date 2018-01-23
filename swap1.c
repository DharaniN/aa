#include <stdio.h>
void main()
{
      double fn, sn, temVar;
      printf("Enter first number");
      scanf("%lf", &firstNumber);
      printf("Enter second number");
      scanf("%lf",&secondNumber);
      temVar = fn;
      fn = sn;
      sn = temVar;
      printf("After swapping, firstNumber = %.2lf", fn);
      printf("After swapping, secondNumber = %.2lf", sn);
      }
     

