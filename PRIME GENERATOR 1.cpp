#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long int
#define MAX 1000001
void SegmentedSieve(ll L ,ll R)
{
	bool isPrime[MAX+1];
	memset(isPrime,true,sizeof(isPrime));
	isPrime[0]=false;
	isPrime[1]=false;
	vector<int> Prime;
	ll X=floor(sqrt(R));
	for(ll i=2;i*i<=X;i++)
	{
		if(isPrime[i]==true)
		{
			for(ll j=2*i;j<=X;j+=i)
			{
				isPrime[j]=false;
			}
		}
	}
	for(ll i=2;i<=X;i++)
	{
		if(isPrime[i]==true)
			Prime.push_back(i);
	}
	bool arr[R-L+1];
	memset(arr,true,sizeof(arr));
	for(auto it=Prime.begin();it!=Prime.end();++it)
	{
		ll n=floor(L/(*it))*(*it);
		if (n<(*it))
		{
			n=n+(*it);
		}
		if (n==(*it))
		{
			n+=(*it);
		}
		for(ll j=n;j<=R;j+=(*it))
		{
			arr[j-L]=false;
		}
	}
	for(ll i=L;i<=R;i++)
		{
			if(arr[i-L]==true)
			{
				cout<<i<<endl;
			}
		}


}
int main()
{
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	ll T;
	cin>>T;
	while(T--)
	{
	ll L,R;
	scanf("%lld %lld",&L,&R);
	if (L==1 and R>1)
		L=L+1;
	SegmentedSieve(L,R);
	cout<<endl;
	}
}
