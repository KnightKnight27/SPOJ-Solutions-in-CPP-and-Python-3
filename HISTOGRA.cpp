#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll N;
    while(cin>>N)
    {
        ll arr[N];
        for(auto &it:arr)
        {
            cin>>it;
        }
        stack<ll> S;
        ll i=0;
        ll ans=0;
        while(i<N)
        {
            if(S.empty() or arr[S.top()]<=arr[i])
            {
                S.push(i++);
            }
            else
            {
                ll index=S.top();
                S.pop();
                ll width;
                if(S.empty())
                {
                    width=i;
                }
                else
                {
                    width=i-S.top()-1;
                }
                ans=max(ans,width*arr[index]);
            }
        }
        while(!S.empty())
        {
            ll index=S.top();
            S.pop();
            ll width;
            if(S.empty())
            {
                    width=i;
            }
            else
            {
                width=i-S.top()-1;
            }
            ans=max(ans,width*arr[index]);
        }
        if(N)
        cout<<ans<<endl;
    }
}
