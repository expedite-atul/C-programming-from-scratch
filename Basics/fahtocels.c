/*Program to print fahreheit to celsius*/
#include<stdio.h>
void main()
{
    float fahr , celsius;
    int lower, upper , step;
    lower=0;/*the temperature table will start from zero '0' i.e, Lower limit */
    upper=300;/*maximum limit i.e, upper limit*/
    step=20;/*step size*/
    fahr=lower;
    
    while(fahr<=upper)
    {
        celsius = 5*(fahr-32)/9 ;
        printf("%6.0f \t %6.2f \n",fahr,celsius);
        fahr=fahr+step;
    }
}
    

