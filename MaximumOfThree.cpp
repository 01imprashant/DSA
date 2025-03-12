#include<iostream>
using namespace std;
int  printMaximum(int n1,int n2,int n3){
    int ans1=max(n1,n2);
    int finalAns=max(ans1,n3);
    // cout<<"Maximum is:"<<finalAns<<endl;
    return finalAns;
}

int main(){
    int max=printMaximum(22,2,6);
    cout<<"Maximum is:"<<max<<endl;
   return 0; 
}