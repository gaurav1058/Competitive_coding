#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[6][6],max=-54;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<4;i++)
	{

		for(int j=0;j<4;j++)
		{
			int x,y,sum=0;;
			for(int k=i;k<i+3;k+=2)
			{

				x=k;
				for(int l=j;l<j+3;l++)
				{
					y=l;
					sum+=a[k][l];
				}
			}
			sum+=a[x-1][y-1];
			if(max<sum)
				max=sum;
		}
	}
	cout<<max;
}