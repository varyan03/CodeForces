#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
int main() {
    fast_io;
    int friends;
    cin>>friends;
  
    int sum=0;
    
    
    for(int i=0;i<friends;i++){
        int fingers;
        cin>>fingers;
        sum+=fingers;
    }
    
    int count=0;
    for (int i=1;i<=5;i++){
        if(((sum+i)-1)%(friends+1)!=0){
            count++;
        }
    }
    cout<<count;
    return 0;
}