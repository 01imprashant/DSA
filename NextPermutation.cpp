#include<iostream>
using namespace std;
int main(){
    string s="abc";
    cout<<s<<endl;
    while(next_permutation(s.begin(),s.end())){
        cout<<s<<endl;
    }

    return 0;
}