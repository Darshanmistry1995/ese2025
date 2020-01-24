#include <stdio.h>
#include <stdlib.h>


int fAdd (int *a,int *b)
{
    int sum=0;
    int x,y;
    x=*a;
    y=*b;
    sum=x+y;
    

}
int main()
{
    int a=2,b=3;
    printf("sum is %d",fAdd(&a,&b));
    return 0;
    
}
