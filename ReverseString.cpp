#include<iostream>
using namespace std;

void reverseString(string &str,int s,int e){
    //Base Case
    if(s>=e){
        return;
    }
    //Processing->1 case
    swap(str[s],str[e]);

    //Recursive call
    reverseString(str,s+1,e-1);

}

int main(){
    string str;
    cin>>str;
    int s=0;
    int e=str.size()-1;
    reverseString(str,s,e);
    cout<<str<<endl;

    return 0;
}