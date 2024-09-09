#include <bits/stdc++.h> 
using namespace std;

int main() { 
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
  
    //variable to store the pos of 1 in row
    int pos_row=0;
  
    //variable to store the pos of 1 in col
    int pos_col=0;
  
  //array
    int arr[5][5];
    //loop to take input 
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        // int inp;
        cin>>arr[i][j];
        //checking if input is 1
        if(arr[i][j]==1){
          pos_row=i;
          pos_col=j;
        }
      }
    }
  
    int moves=(abs(pos_row-2)+abs(pos_col-2));

    cout<<moves;
}