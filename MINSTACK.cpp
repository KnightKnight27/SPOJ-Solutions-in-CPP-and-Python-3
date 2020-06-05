#include<bits/stdc++.h>
using namespace std;
#define LL long long int
class Stack
{
    public:
    LL min=INT_MAX;
    stack<LL> arr;
    void PUSH(LL x)
    {
        if(arr.empty())
        {
            min=x;
        }
        else if(x<min)
        {
            LL temp=min;
            min=x;
            x=2*x-temp;
        }
        arr.push(x);
    }
    void Pop()
    {
        if(arr.empty())
         return;
        if(arr.top()<min)
        {
            min=2*min-arr.top();
        }
        arr.pop();
    }
    LL Min()
    {
        return min;
    }
};
int main()
{
    ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    Stack obj;
    LL n;
    scanf("%lld",&n);
    while(n--)
    {
        char S[5];
        scanf("%s",S);
        if(S[1]=='U')
        {
            LL x;
            scanf("%lld",&x);
            obj.PUSH(x);
        }
        else
        {
            if(S[1]=='O')
            { 
                if(obj.arr.empty())
                {
                    printf("EMPTY\n\n");
                }
                obj.Pop();
            }
            else
            {
                if(obj.arr.empty())
                    printf("EMPTY\n\n");
                else
                    printf("%lld\n\n",obj.Min());
            }
        }
    }
}
