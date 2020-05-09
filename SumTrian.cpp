#include<iostream>
#include<vector>
using namespace std;
#define pb push_back
#define v vector
#define k int
main() 
{k T;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>T;
    while(T--)
        {k N;
            cin>>N;
            v<v<k>>a;
            k i,j;
            for(i=1;i<=N;i++)
                {v <k> S
                    ;for(j=0;j<i;j++){k x;cin>>x;S.pb(x);}a.pb(S);}for(i=N-2;i>=0;i--){for(j=0;j<=i;j++){a[i][j]=a[i][j]+max(a[i+1][j],a[i+1][j+1]);}}cout<<a[0][0]<<endl;}}
