#include<iostream>
using namespace std;

// void solve(int a){
//     a++;
//     cout<<a<<endl;
// }

int incrementBy1(int n){
    n=n+1;
    return n;
}

int main(){
    // int a=5;
    // solve(a);
    // cout<<a<<endl;

    int n;
    cin>>n;
    incrementBy1(n);
    cout<<n<<endl;

    return 0;

}