#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
int main() {
    fast_io;
    int t;
    cin>>t;
    
    while(t--){
        int money=0;
        int people=0;
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
        
            if(m>=k){
                money+=m; 
            }
        
            if(m==0 && money!=0){
                money--;
                people++;
            }
        
            
        }
        cout<<people<<"\n";
    }
    
    
    return 0;
}