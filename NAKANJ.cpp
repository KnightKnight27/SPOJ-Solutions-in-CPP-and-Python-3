//BECAUSE ONE TRUTH PREVAILS
#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL X[]={1,1,-1,-1,2,2,-2,-2};
LL Y[]={2,-2,2,-2,1,-1,1,-1};
class chess
{
    public: 
        LL x;
        LL y;
        LL count;
        void func(string S)
        {
            this->x=(LL)S[0];
            this->y=(LL)S[1];
            this->x=(this->x)-97;
            this->y=(this->y)-49;
        }
};
int main() 
{
  
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    LL T;cin>>T;
    while(T--)
    {
        string S1,S2;
        cin>>S1>>S2;
        chess start;
        chess end;
        start.func(S1);
        end.func(S2);
        queue <chess> Q;
        start.count=0;
        Q.push(start);
        LL ans=0;
        while(!Q.empty())
        {
            chess obj=Q.front();
            Q.pop();
            LL x=obj.x;
            LL y=obj.y;
            if( x== end.x and y==end.y )
            {
                ans=obj.count;
                break;
            }
            for(LL i=0;i<8;i++)
            {
                LL tempx=X[i]+x;
                LL tempy=Y[i]+y;
                if( tempx>=0 and tempx<8 and tempy>=0 and tempy<8 )
                {
                    chess put;
                    put.x=tempx;
                    put.y=tempy;
                    put.count=obj.count+1;
                    Q.push(put);
                }
            }
        }
        cout<<ans<<endl;
    }
}
