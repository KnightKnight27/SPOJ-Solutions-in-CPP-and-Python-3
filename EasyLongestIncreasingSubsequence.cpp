#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	int N;
	cin>>N;
	int arr[N+1];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	int dp[N+1];
	for(int i=0;i<N;i++)
	{
		dp[i]=1;
	}
	for(int i=1;i<N;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j] and dp[i]<dp[j]+1)
			{
				dp[i]=dp[j]+1;
			}
		}
	}
	int Max=INT_MIN;
	for(int i=0;i<N;i++)
	{
		if(Max<dp[i])
			Max=dp[i];
	}
	printf("%d\n",Max);

}
