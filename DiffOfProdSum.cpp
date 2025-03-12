#include<iostream>
using namespace std;
int diffBwProdSum(int n){
    int sum=0,prod=1;
    while(n!=0){
        int digit=n%10;
        prod=prod*digit;
        sum=sum+digit;
        n=n/10;
    }
    int ans=prod-sum;
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<"Difference is:"<<diffBwProdSum(n)<<endl;

}
