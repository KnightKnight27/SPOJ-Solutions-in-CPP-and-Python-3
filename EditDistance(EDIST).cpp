#include<bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T;
    cin>>T;
    while(T--)
    {
        string A;cin>>A;
        string B;cin>>B;
        int N=A.size();int M=B.size();
        vector< vector<int> > dp(N+1,vector<int>(M+1,0));
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=M;j++)
            {
                if(i==0)
                {
                    dp[i][j]=j;
                }
                else if(j==0)
                {
                    dp[i][j]=i;
                }
                else if(A[i-1]==B[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                }
            }
        }
        cout<<dp[N][M]<<endl;
    }   
}
