#include <bits/stdc++.h>
using namespace std;
using ld = long double;
using ll = long long;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int x;
    while(cin>>x)
    {
        string S,T;
        cin>>T>>S;
        int N=S.size();
        int M=T.size();
        int pi[M];
        pi[0]=0;
        for(int i=1;i<M;i++)
        {
            int j=pi[i-1];
            while(j>0 and T[j]!=T[i])
            {
                j=pi[j-1];
            }
            if(T[j]==T[i])
            {
                j++;
            }
            pi[i]=j;
        }
        int i=0;
        int j=0;
        int count=0;
        vector<int> ans;
        while(i<N)
        {
            if(S[i]==T[j])
            {
              i++;
              j++;
            }
            if(j==M)
            {
              ans.push_back(i-j);
              j=pi[j-1];
            }
            if(i<N and S[i]!=T[j])
            {
                if(j>0)
                {
                    j=pi[j-1];
                }
                else
                {
                    i++;
                }
            }
        }
        for(auto it:ans)
        {
          cout<<it<<endl;
        }
        cout<<endl;
    }
}
