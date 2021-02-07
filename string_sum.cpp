#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p;
	cin>>p;
	while(p--)
	{
		string a,b,c;
		cin>>a>>b;
		int l1,l2,temp=0,max;
		l1=a.length();
		l2=b.length();
		if(l1>l2)
		{
			for(int i=0;i<l1-l2;i++)
			{
				b="0"+b;
			}
		}
		else if(l1<l2)
		{
			for(int i=0;i<l2-l1;i++)
			{
				a="0"+a;
			}
		}
		vector<char>ans;
		for(int i=a.length()-1;i>=0;i--)
		{
			int sum;
			sum=a[i]+b[i]-96+temp;
			if(sum>9 && i!=0)
			{
				ans.push_back(sum%10 + 48 );
				temp=sum/10;
			}
			else if(sum<=9 && i!=0)
			{
				ans.push_back(sum + 48 );
				temp=0;
			}
			else if(i==0 && sum<=9)
			{
				ans.push_back(sum + 48 );	
			}
			else if(i==0 && sum>9)
			{
				ans.push_back(sum%10 + 48 );
				ans.push_back(49);
			}
		}
		int l3=b.length();
		for(int i=0;i<l3;i++)
		{
			cout<<ans[l3-i-1];
		}
		cout<<endl;
	}
}
