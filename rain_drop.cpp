#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        long long int l,r,s;
        cin>>l>>r>>s;
        if(r<s || (s<l && (r-l)<s && (r%s + l)>r))
        {
            cout<<"-1 -1"<<endl;
        }
        else
        {
            long long int p=0,q=0;
            p=l/s;
            q=r/s;
            if(l%s > 0)
            p++;
            cout<<p<<" "<<q<<endl;
        }
    }
}