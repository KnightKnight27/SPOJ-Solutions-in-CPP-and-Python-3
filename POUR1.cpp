//BECAUSE ONE TRUTH PREVAILS
#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL GCD(LL A,LL B)
{
    if(A==0)
    {
        return B;
    }
    return GCD(B%A,A);
}
LL F(LL N,LL M, LL D)
{
    LL dena=N;
    LL lena=0;
    LL step=1;
    while(lena!=D && dena!=D)
    {
        LL temp=min(dena,M-lena);
        dena-=temp;
        lena+=temp;
        step++;
        if(lena==D or dena==D)
        {
            return step;
        }
        if(dena==0)
        {
            dena+=N;
            step++;
        }
        if(lena==M)
        {
            lena=0;
            step++;
        }
    }
    return step;
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    LL T;
    cin>>T;
    while(T--)
    {
        LL N,M,D;
        cin>>N>>M>>D;
        if(D%GCD(N,M))
        {
            cout<<-1<<endl;
            continue;
        }
        if(D>max(N,M))
        {
            cout<<-1<<endl;
            continue;
        }
        LL res1=F(N,M,D);
        LL res2=F(M,N,D);
        cout<<min(res1,res2)<<endl;
    }
}
