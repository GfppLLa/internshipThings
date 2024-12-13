
#include "mathOps.h"

int moduleCalc(int number)
{
    return (number<0)? -number:number;
}

double squareRoot(double number)//sub d
{
    if(number <0) exit(1);
    double precision =0.000000001;
    double step=number;
      while ((step * step - step) > precision || (number - step * step) > precision) {
        step = (step + number / step) / 2.0;
    }
    return step;
}

int atPow(int number)//sub b
{
    return number*number;
}