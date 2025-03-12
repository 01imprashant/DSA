#include<iostream>
using namespace std;

// //Present->true
// //Absent->false
// bool linearSearch(int arr[],int size,int target){
//       for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             //found
//             return true;
//         }
//       }
//       //Not found
//       return false;
// }


//present->true
//Absent->false
bool findTarget(int arr[][3],int row,int col,int target){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(arr[i][j]==target){
        //f target found
        return true;
        break;
      }
    }
  }
  return false;
}

int main(){
  
    // int arr[]={2,4,6,8,10,12};
    // int target=11;
    // int size=6;
    // bool ans=linearSearch(arr,size,target);
    // if(ans){
    //     cout<<"Target found"<<endl;
    // }
    // else{
    //     cout<<"Target not found"<<endl;
    // }


    int arr[][3]={{10,20,30},{40,50,60},{70,80,90}};
    int row=3;
    int col=3;
    int target=71;
    int found=findTarget(arr,row,col,target);

    if(found){
      cout<<"Target found"<<endl;
    }
    else{
      cout<<"Target not found"<<endl;
    }
      
    return 0;
}