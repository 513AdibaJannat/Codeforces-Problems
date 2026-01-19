#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int moves=0;
char m='a';
for(int i=0; i<s.length(); i++){
       char t=s[i];
       int value=abs(t-m);

moves+=min(value,26-value);
m=s[i];
}
cout<<moves;

}
