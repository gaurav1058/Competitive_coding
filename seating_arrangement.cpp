#include<stdio.h>
int main()
{
	int T,i,n,a,k,l=0;
	scanf("%d",&T);
	while(l<T)
	{
		scanf("%d",&n);
		for(i=0;i<18;i++)
		{
			a=6*i;
			if(a<n&&a+6>=n)
			{
				k=i+1;
				break;
			}
		}
		if(k%2!=0)
		{
			printf("%d",n+((a+6-n)*2)+1);
		}
		else if(k%2==0)
		{
			printf("%d",n-(((n-a)*2)-1));
		}
	
	if(n%6==0||n%6==1)
	{
		printf(" WS\n");
	}
	else if(n%3==2)
	{
		printf(" MS\n");
	}
	else
	printf(" AS\n");
	l++;
	}
}