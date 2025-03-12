#include<iostream>
#include<string.h>
using namespace std;


// int findLenght(char ch[],int size){
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



int findLenght(char ch[],int size){
   
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
//         if(ch[index]>='a' && ch[index]<='z'){
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

// cin>>ch;
// int len=findLenght(ch,100);
// cout<<"Lenght of a String is: "<<len<<endl;
// cout<<"Length of a string ia: "<<strlen(ch)<<endl;

// cout<<"Enter the String you want to reverse: ";
// cin.getline(ch,100);
// cout<<"Befor:"<<ch<<endl;
// int len=findLenght(ch,100);
// reverseString(ch,len);
// cout<<"After:"<<ch<<endl;

// cin.getline(ch,100);
// cout<<"Before: "<<ch<<endl;
// convertToUpperCase(ch,100);
// cout<<"After: "<<ch<<endl;

// cin.getline(ch,100);
// cout<<"Before: "<<ch<<endl;
// replaceCharacter(ch,100);
// cout<<"After: "<<ch<<endl;

cin.getline(ch,100);
int len=findLenght(ch,100);
int isPalindrome=checkPalindrome(ch,len);
if(isPalindrome){
    cout<<"Valid Palindrome"<<endl;
}
else{
    cout<<"Invalid Palindrome"<<endl;
}


// char ch[100];

// //input 
// //cin >> ch;
// cin.getline(ch, 100);
  
// //print
// cout<< "Printing the value of ch: " << ch << endl;
  
// //printing using loop
// for(int i=0; i<10; i++) {
//  cout <<"At Index: " << i << " " << ch[i] << endl;
// }

// char temp = ch[6];
// int value = (int)temp;
// cout << "printing integer value: " << value << endl;



// char ch[100];
// //input
// // cin>>ch;
// cin.getline(ch,100);
// cout<<"Printing an Array:"<<ch<<endl;

// //Printing using loop
// for(int i=0;i<10;i++){
//     cout<<"At Index: "<<i<<" "<<ch[i]<<endl;
// }

// char temp=ch[6];
// int value=(int)temp;
// cout<<"Printing Integer Value:"<<value<<endl;





//    int arr[10];
//      //input
//     for(int i=0; i<10; i++) {
//       cin >> arr[i];
//   }


//    //print
//    for(int i=0; i<10 ; i++) {
//     cout << arr[i];
//   }
  

  return 0;

}