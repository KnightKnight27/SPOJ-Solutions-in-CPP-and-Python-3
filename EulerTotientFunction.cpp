#include<bits/stdc++.h>
using namespace std;
int phi(int N)
{	
	int count=N;
	for(int i=2;i*i<=N;i++)
	{
		if(N%i==0)
		{
			while(N%i==0)
			{
				N=N/i;
			}
			count*=(1.0-1.0/float(i));
		}
	}
	if(N>1)
	{
		count=count*(1.0 - 1.0/float(N));	
	}
	return count;

}
int main()
{ 
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	// int Z=DICE(2,6,7);
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		cout<<phi(N)<<endl;
	}
}
