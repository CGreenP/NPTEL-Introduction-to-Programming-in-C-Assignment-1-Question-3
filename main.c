#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a>b)&&(a>c)&&(b>c))
    {
        printf("%d",1);
    }
    else
    {
        printf("%d",0);
    }
}
