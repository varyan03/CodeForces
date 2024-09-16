#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
int main() {
    fast_io;
    string str;
    cin>>str;
    
    if(str[0]>96 && str[0]<123)str[0]-=32;
    
    cout<<str;
    return 0;
}