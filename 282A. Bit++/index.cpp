#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    int x;
    cin>>x;
    while(x>0){
        string a;
        cin>>a;
        if(a=="++X" || a=="X++") n++;
        if(a=="--X" || a=="X--") n--;
        x--;
    }
    cout<<n;

    return 0;
}