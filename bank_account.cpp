#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n;
    k=n;
    if(n>=10)
    cout<<n;
    else if(n<=-10)
    {
        int temp1,temp2;
        temp1=n%10;
        n=n/10;
        temp2=n%10;
        if(temp1<=temp2)
        cout<<k/10;
        else
        {
            k/=100;
            k*=10;
            k+=temp1;
            cout<<k;
        }
        
    }
}