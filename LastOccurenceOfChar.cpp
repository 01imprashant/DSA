#include<iostream>
using namespace std;

void lastOccurenceFromLeftToRight(string &s,char x,int index,int &ans){
    //Base case
    if(index>=s.size()){
        return;
    }
    //Processing
    if(s[index]==x){
        ans=index;
    }
    //Recursive call
    lastOccurenceFromLeftToRight(s,x,index+1,ans);
}

void lastOccurenceFromRightToLeft(string &s,char x,int index,int &ans){
    //Base case
    if(index<0){
        return;
    }
    //Processing
    if(s[index]==x){
        ans=index;
        return;
    }
    //Recursive call
    lastOccurenceFromRightToLeft(s,x,index-1,ans);
}

int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int index=s.size()-1;
    int ans=-1;
    // lastOccurenceFromLeftToRight(s,x,index,ans);
    lastOccurenceFromRightToLeft(s,x,index,ans);
    cout<<"Last Occurence of character at:"<<ans<<endl;

    return 0;
}