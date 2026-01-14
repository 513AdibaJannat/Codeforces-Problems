#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    int time=240-k;
    int left=0;
    int s=0;
    for(int i=1; i<=n; i++)
    {
        left+=i*5;
        if(time>=left)
        {
            s++;
        }
        else
        {
            break;
        }
    }
    cout<<s;

}
