#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
int main() {
    fast_io;
    int n;
    cin>>n;
    
    int arr[100001];
    for (int i=1;i<=n;i++){
        int a;
        cin>>a;
        arr[a]=i;
    }
    
    
    int b;
    cin>>b;
    ll ind=0;
    ll pre=0;
    while(b--){
        int k;
        cin>>k;
        ind+=arr[k];
        pre+=n+1-arr[k];
    }
    
    cout<<ind<<" "<<pre;
    return 0;
}