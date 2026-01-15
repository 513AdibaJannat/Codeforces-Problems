#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0; i<t; i++){
    int n,a,b,ans=0,maxi=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a>>b;
        if(a<=10){
              if(b>maxi){
maxi=b;
ans=i;        }

    }
}
cout<<ans<<endl;;
}
}
