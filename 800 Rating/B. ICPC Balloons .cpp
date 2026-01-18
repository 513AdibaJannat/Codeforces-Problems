#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        set<char>s;
        string st;
        cin>>st;
        for(int j=0; j<st.length(); j++)
        {

            s.insert(st[j]);
        }
            int ans=(n-s.size())+s.size()*2;
            cout<<ans<<endl;
        }
    }
