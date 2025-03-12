#include<iostream>
using namespace std;

bool checkPalindrome(string &str,int s,int e){
    //base case
    if(s>=e){
        return true;
    }

    //Ek case hum solve karege
    if(str[s]!=str[e]){
        return false;
    }

    //Recursive call
    return checkPalindrome(str,s+1,e-1);

}

int main(){
    
    string str;
    cin>>str;
    int s=0;
    int e=str.size()-1;
    cout<<checkPalindrome(str,s,e)<<endl;
    
    
    return 0;
}