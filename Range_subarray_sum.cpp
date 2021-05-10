// find the sum in a given arnge L and R
//n=4 arr[4]=10 20 30 40
//q=2
//l=1 r=4
//l=2 r=3
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
        int n;//5
        cin>>n;//[10,20,30,50,60]
        long long int arr[n+1]={0};//[0,10,20,30,50,60]
        long long int prefix[n+1]={0};//[0,10,30,60,110,170]
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            prefix[i]=prefix[i-1]+arr[i];

        }
        int Q;
        cin>>Q;
        while(Q--)
        {
            int L,R;
            cin>>L>>R;
            cout<<prefix[R]-prefix[L-1]<<;
        }
    }
}
