#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
int main() {
    fast_io;
    ll num;
    cin>>num;
    
    int count=0;
    
    while(num!=0){
        int rem =num%10;
        num/=10;
        if(rem==7 or rem==4){
            count++;
        }
        
    }
    
    if(count==7 || count==4){
        cout<<"YES";
    }
    
    else{
        cout<<"NO";
    }
    // cout<<count;
    return 0;
}

