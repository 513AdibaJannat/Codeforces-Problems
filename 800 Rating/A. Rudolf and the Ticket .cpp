#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0; i<t; i++){
int n,m,k;
cin>>n>>m>>k;
int a1[n],b1[m];

for(int j=0; j<n; j++){
    cin>>a1[j];
    }
    for(int r=0; r<m; r++){
    cin>>b1[r];
}
int sum=0, way=0;
for(int j=0; j<n; j++){
    for(int r=0; r<m; r++){
    sum=a1[j]+b1[r];
    if(sum<=k){
        way++;
    }
}}

cout<<way<<endl;
}
}
