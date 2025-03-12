#include<iostream>
using namespace std;

int paintingFenceAlgo(int n,int k){
    //Base case
    if(n==1){
        return k;
    }
    if(n==2){
        return k+k*(k-1);
    }
    //Recursive call
    int ans=(k-1)*(paintingFenceAlgo(n-2,k)+paintingFenceAlgo(n-1,k));
    return ans;
}

int main(){
    int n=3;
    int k=3;
    int ans=paintingFenceAlgo(n,k);
    cout<<ans<<endl;

    return 0;
}