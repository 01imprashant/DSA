#include<iostream>
#include<string.h>
using namespace std;

// int findLength(char ch[],int size){
//     int length=0;
//     for(int i=0;i<size;i++){
//         if(ch[i]=='\0'){
//             break;
//         }
//         else{
//             length++;
//         }
//     }
//     return length;
// }

int findLength(char ch[],int size){
    
    int index=0;
    while(ch[index]!='\0'){
    
       index++;
    }
    return index;
}

// void reverseString(char ch[],int n){
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//         swap(ch[i],ch[j]);
//         i++;
//         j--;
//     }
// }

// void convertToUpperCase(char ch[],int n){
//     int index=0;
//     while(ch[index]!='\0'){
//         if(ch[index]>='a'&&ch[index]<='z'){
//             ch[index]=ch[index]-'a'+'A';
//         }
//         index++;
//     }
// }

// void replaceCharacter(char ch[],int n){
//     int index=0;
//     while(ch[index]!='\0'){
//         if(ch[index]=='@'){
//             ch[index]=' ';
//         }
//         index++;
//     }
// }

bool checkPalindrome(char ch[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<"Before:"<<ch<<endl;
    int len=findLength(ch,100);

    int ans=checkPalindrome(ch,len);
    // convertToUpperCase(ch,100);
    // replaceCharacter(ch,100);
    // int len=findLength(ch,100);
    // reverseString(ch,len);
    if(ans==1){
        cout<<"Valid Palindrome"<<endl;
    }
    else{
        cout<<"Invalid Palindrome"<<endl;
    }
    
    // cout<<"Length of String is:"<<len<<endl;
    // cout<<"Length by using STL:"<<strlen(ch)<<endl;

    return 0;
}