#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int x,fr[100001]={0},fr1[100001]={0};//change
		for(int i=1;i<=n;i++)
		{
			cin>>x;
			if(x>=0)
			fr[x]++;
			else
			fr1[-x]++;
		}
		while(q--)
		{
			int a1,b;
			cin>>a1>>b;
			if(a1==1)
			{
				if(b>=0)
				fr[b]++;
				else if(b<0)
				fr1[-b]++;
			}
			else if(a1==2 && b>=0)
			{
				if(fr[b]!=0)
				{
					cout<<fr[b]<<"\n";
					fr[b]--;
				}
				else
				{
					cout<<"-1"<<"\n";
				}
			}
			else if(a1==2 && b<0)
			{
				if(fr1[-b]!=0)
				{
					cout<<fr1[-b]<<"\n";
					fr1[-b]--;
				}
				else
					cout<<"-1"<<"\n";
			}
		}
	}
	return 0;
}