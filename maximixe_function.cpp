#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n],max=-1000000001,min=1000000001;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>max)
				max=a[i];
			if(a[i]<min)
				min=a[i];
		}
		long long avg=(max + min)/2;
		long long c=max;
		for(int i=0;i<n;i++)
		{
			if(avg-a[i]<c)
				c=a[i];
		}
		long long ans=abs(max-min)+abs(max-c)+abs(min-c);
		cout<<ans<<"\n";
	}
}