#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    string S;
    cin>>S;
    int N=S.size();
    int dp[5001][5001]={0};
    for(int i=0;i<N;i++)
    {
        dp[i][i]=0;
    }
    for(int gap=1;gap<N;gap++)
    {
        for(int i=0,j=gap;j<N;i++,j++)
        {
            if(S[i]==S[j])
            {
                dp[i][j]=dp[i+1][j-1];
            }
            else
            {
                dp[i][j]=min(dp[i+1][j],dp[i][j-1])+1;
            }
        }
    }
    cout<<dp[0][N-1]<<endl;
    }
}
