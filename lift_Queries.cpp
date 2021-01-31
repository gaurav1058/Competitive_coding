#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,N,top=7,bottom=0,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&N);
        if(abs(N-bottom)<=abs(top-N))
        {
            printf("A\n");
            bottom=N;
        }
        else
        {
            printf("B\n");
            top=N;
        }
    }
}