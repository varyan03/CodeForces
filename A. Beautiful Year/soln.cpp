#include <bits/stdc++.h>
using namespace std;
int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //input from the user for the year
    int year;
    cin>>year;

    while(1){
        //incrementing the year to check whether its a beautiful year or not
        year=year+1;

        //getting single digits from the year
        int a=year/1000;  //for thousands place
        int b=year/100%10; //for hundreds place
        int c=year/10%10; //for tens place
        int d=year%10; //for ones place

        if(a!=b && a!=c && a!=d  && b!=c && b!=d && c!=d){
            cout<<year;
            break;
        }
        
    }

    return 0;
}