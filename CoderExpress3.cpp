#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll long long int
using namespace std;
#define mod 1000000007
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll T;
    cin>>T;
    while(T--)
    {
        ll N;
        cin>>N;
        ll arr[N];
        for(auto &it:arr)
        {
            cin>>it;
        }
        vector<ll> lis(N+1,1);
        vector<ll> lds(N+1,1);
        for(ll i=1;i<N;i++)
        {
            for(ll j=0;j<i;j++)
            {
                if(arr[i]>arr[j])
                {
                    lis[i]=max(lis[i],lis[j]+1);
                }
            }
        }
        for(ll i=N-2;i>=0;--i)
        {
            for(ll j=N-1;j>i;j--)
            {
                if(arr[i]>arr[j])
                {
                    lds[i]=max(lds[i],lds[j]+1);
                }
            }
        }
        ll ans=0;
        for(ll k=0;k<N;k++)
        {
            ans=max(ans,lds[k]+lis[k]-1);
        }
        cout<<ans<<endl;

    }   
}
