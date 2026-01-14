#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;
        int af=max(s1,s2);
        int bf=max(s3,s4);
        int mini1=0,mini2=0;
        if(af==s1){
            mini1=s2;
        }
        else{
            mini1=s1;
        }
        if(bf==s3){
            mini2=s4;
        }
        else{
            mini2=s3;
        }
        if(mini1>bf || mini2>af){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
