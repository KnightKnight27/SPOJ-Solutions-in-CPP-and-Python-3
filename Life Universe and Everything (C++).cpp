#include <iostream>
using namespace std;
 
int main() {
	int N;
	while(scanf("%d",&N)==1)
	{
		if (N==42)
		{
			break;
		}
		else
		{
			printf("%d\n",N);
		}
	}
	return 0;
}
