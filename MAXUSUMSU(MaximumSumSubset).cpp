#include<bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int N;
        cin>>N;
        long long int arr[N];
        for(auto &it:arr)
        {
            cin>>it;
        }
        long long int sum=0;
        long long int ans=0;
        for(auto it:arr)
        {
            sum+=it;
            if(sum<0)
                sum=0;
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }   
}
