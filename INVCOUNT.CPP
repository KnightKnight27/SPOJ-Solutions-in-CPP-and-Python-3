#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void merge(ll start,ll mid,ll end,ll *arr,ll &count)
{
    ll i=start;
    ll j=mid+1;
    ll k=0;
    ll temp[end-start+1];
    while(i<=mid and j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            count+=mid+1-i;
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while(j<=end)
    {
        temp[k++]=arr[j++];
    }
    for(ll it=start;it<=end;it++)
    {
        arr[it]=temp[it-start];
    }
}
void mergeSort(ll start,ll end,ll *arr,ll &count)
{
    if(start<end)
    {
        ll mid=(start+end)/2;
        mergeSort(start,mid,arr,count);
        mergeSort(mid+1,end,arr,count);
        merge(start,mid,end,arr,count);
    }
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll T;
    cin>>T;
    char str[2];
    while(T--)
    {
        ll N;
        cin>>N;
        ll arr[N];
        for(auto &it:arr)
        {
            cin>>it;
        }
        ll count=0;
        mergeSort(0,N-1,arr,count);
        cout<<count<<endl;
    }

}
