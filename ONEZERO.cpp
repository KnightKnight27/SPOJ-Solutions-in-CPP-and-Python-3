#include <bits/stdc++.h>
#define LL long long int
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    LL T;
    cin>>T;
    while(T--)
    {
        LL N;
        cin>>N;
        vector<string> dp(N);
        dp[1]="1";
        if(N==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        if(N==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        queue<LL> Q;
        Q.push(1);
        string ans="";
        while(Q.empty()==false)
        {
            LL rem=Q.front();
            Q.pop();
            if(rem==0)
            {
                ans=dp[rem];
                break;
            }
            LL rem1=(10*rem+0)%N;
            if(dp[rem1].empty())
            {
                dp[rem1]=dp[rem]+'0';
                Q.push(rem1);
            }
            LL rem2=(10*rem+1)%N;
            if(dp[rem2].empty())
            {
                dp[rem2]=dp[rem]+'1';
                Q.push(rem2);
            }

        }
        cout<<ans<<endl;
    }
}
