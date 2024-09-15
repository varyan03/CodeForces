#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
int main(){
    fast_io;
    
    string str;
    cin>>str;
    
    //variables to keep a count for upper and lower characters
    int upper=0;
    int lower=0;
    
    //checking if the character is upper is lower or upper
    for (int i=0;str[i]!='\0';i++){
        if(str[i]>64 && str[i]<91){
            upper+=1;
        }
        
        else{
            lower+=1;
        }
    }
    
    
    //if upper are more than lower characters
    if(upper>lower){
        for(int i=0;str[i]!='\0';i++){
            if(str[i]>96 && str[i]<123){
                str[i]=str[i]-32;
            }
        }
    }
    
    //if lower are more or equal to that of upper characters
    else if (lower>=upper){
        for (int i=0;str[i]!='\0';i++){
        if(str[i]>64 && str[i]<91){
            str[i]+=32;
        }
        }
    }
    
    cout<<str;
    return 0;
}