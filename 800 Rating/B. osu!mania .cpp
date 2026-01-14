#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
            int n;
            cin>>n;
            string s;
            vector<int>v;
            for(int j=0; j<n; j++){
for(int k=1; k<=4; k++){
                cin>>s[k];
                    if(s[k]=='#'){
                         v.push_back(k);
                    }

            }}
            reverse(v.begin(),v.end());
            for(int r=0; r<v.size(); r++){
                cout<<v[r]<<" ";
            }

            cout<<endl;
    }
}
