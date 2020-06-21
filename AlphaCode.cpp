//BECAUSE ONE TRUTH PREVAILS
#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main() 
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    string S;
    while( cin>>S ) 
    {
        if(S[0]=='0' and S.size()==1)
            break;
        LL N=S.size();
        vector<LL> dp(N+1,0);
        dp[0]=1;
        dp[1]=1;
        if(S[0]=='0')
        {
            cout<<0<<endl;
            continue;
        }
        for(LL i=2;i<=N;i++)
        {
            if(S[i-1]=='0')
            {
                if(S[i-2]!='1' and S[i-2]!='2')
                {
                    break;
                }
            }
            if(S[i-1]>'0')
            {
                dp[i]+=dp[i-1];
            }
            if( (S[i-2]=='1') or ( S[i-2]=='2' and S[i-1]<'7') )
            { 
                dp[i]+=dp[i-2];
            } 
        }
        cout<<dp[N]<<endl;
    }
}
