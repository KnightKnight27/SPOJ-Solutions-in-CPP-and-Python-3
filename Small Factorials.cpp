#include <iostream>
using namespace std;
int multiply(int arr[],int size,int x)
{
	int carry=0;
	for(int i=0;i<size;i++)
	{
		int Prod=(arr[i]*x)+carry;
		arr[i]=Prod%10;
		carry=Prod/10;
	}
	while(carry)
	{
		arr[size]=carry%10;
		size++;
		carry=carry/10;
	}
	return size;
}
void Fact(int N)
{
	int arr[200]={0};
	arr[0]=1;
	int size=1;
	for(int j=2;j<=N;j++)
	{
		size=multiply(arr,size,j);
	}
	for(int i=size-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		scanf("%d",&N);
		Fact(N);
	}

	return 0;
}
