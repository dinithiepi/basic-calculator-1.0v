#include <stdio.h>
#include <conio.h>

void main()
{
    float a;
    float b;
    printf("enter 1st number:\n");
    scanf("%f", &a);
    printf("enter 2nd number\n");
    scanf("%f", &b);
    int c;
    printf("entr operator (1 for '+',2 for '-',3 for '*',4 for '/')\n");
    scanf("%d", &c);
    
    
    if (c==1)
    {
        printf("ans is %f\n",a+b);
    }
    if (c==2)
    {
        printf("ans is %f\n",a-b);
    }
    if (c==3)
    {
        printf("ans is %f\n",a*b);
    }
    if (c==4)
    {
        if (b==0)
            printf("error");
        else
            printf("ans is %f\n",a/b);
    }    
    getch();
}