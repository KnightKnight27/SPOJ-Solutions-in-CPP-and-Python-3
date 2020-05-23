#include<bits/stdc++.h>
using namespace std;
const int N=int(1e5+100);
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    //freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    int T;
    cin>>T;
    while(T--)
    {
        string S;
        string T;
        cin>>S;
        cin>>T;
        int N=S.size();
        int M=T.size();
        int pi[M];
        pi[0]=0;
        for(int i=1;i<M;i++)
        {
            int j=pi[i-1];
            while(j>0 and T[i]!=T[j])
            {
                j=pi[j-1];
            }
            if(T[i]==T[j])
            {
                j++;
            }
            pi[i]=j;
        }
        int i=0;
        int j=0;
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
                ans.push_back(i-j+1);
                j=pi[j-1];

            }
            else if(i<N and S[i]!=T[j])
            {
                if(j>0)
                {
                    j=pi[j-1];
                }
                else{
                    i++;
                }
            }
        }
        if(ans.size()==0)
        {
            cout<<"Not Found"<<endl;
        }
        else
        {
            cout<<ans.size()<<endl;
            for(auto it:ans)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    } 
}
