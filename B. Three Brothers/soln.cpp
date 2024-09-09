
#include <iostream>
using namespace std;
int main()
{   
      ios_base::sync_with_stdio(false);
    //array to store the brother who came
    int arr[3]={0};
    
    //to take inputs
    int count=2;
    while(count>0){
        int brother;
        cin>>brother;
        arr[brother-1]=arr[brother-1]+1;
        count--;
    }
    
    
    //to fnd the index where index is zero
    for (int i=0;i<3;i++){
        if (arr[i]==0){
            cout<<i+1;
            break;
        }
    }

    return 0;
}