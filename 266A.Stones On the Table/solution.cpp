#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    fast_io;
    int a;
    cin>>a;
    string b;
    cin>>b;
    
    int count=0;
 
    int final=0;
    
    for(int i=0;b[i]!='\0';i++){
        if(i==0){
            count++;
        }
        
        if (b[i]==b[i-1]){
            count++;
        }
        
        else if(b[i]!=b[i-1]){
            count=0;
        }
        
        
        if (count>=1){
            final=final+1;
        }
        
        
    }

    cout<<final;
    return 0;
}