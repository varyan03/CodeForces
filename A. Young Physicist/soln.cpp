#include <iostream>
using namespace std;
int main() 
{ 
  //number of inputs
  int n;
  //taking input for n
  cin>>n;
  //creating an array to store the store the applied forces
  int equb[3]={0,0,0};
  //using for loop to take input for n times
  int dum=0;//creating a dummy variable to keep a check on the index of the array
  for (int i=0;i<3*n;i++){
    
    //taking input for the applied forces
    int inp;
    //if dum=0,1 or 2 take input at that index and increment dum
    if(dum<=2){
      // cout<<dum<<"in if"<<endl;
      cin>>inp;
      equb[dum]=equb[dum]+inp;
      dum++;
      
    }
    //else dum =0

    else {
      // cout<<dum<<"in else"<<endl;
      dum=0;
     
      cin>>inp;
      equb[dum]=equb[dum]+inp;
      dum++;
    }
  }
 
  //if  all the forces are equal then print yes
  if(equb[0]==0&& equb[1]==0 && equb[2]==0){
    cout<<"YES";}
  else{
    cout<<"NO";
  }
}