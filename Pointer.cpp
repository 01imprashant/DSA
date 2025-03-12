#include<iostream>
using namespace std;

// void solve(int *arr,int size){
//     // cout<<"Size of arr in solve:"<<sizeof(arr)<<endl;
//     // cout<<arr<<endl;
//     // cout<<&arr<<endl;
// }

void solve(int *p){
    // *p=*p+1;
    // p=p+1;
}

int main(){

    int a=5;
    int *p=&a;

    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    solve(p);

    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    // int a=5;
    // int *p=&a;
    // int **q=&p;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;

    // int a=5;
    // int *ptr=&a;
    // int **ptr1=&ptr;
    // int ***ptr2=&ptr1;
    // int ****ptr3=&ptr2;

    // cout<<ptr3<<endl;
    // cout<<&ptr2<<endl;
    // cout<<ptr2<<endl;
    // cout<<&ptr1<<endl;
    // cout<<ptr1<<endl;
    // cout<<&ptr<<endl;
    // cout<<a<<endl;
    // cout<<ptr<<endl;
    


    // int arr[5]={10,20,30,40,50};
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // solve(arr,5);

    // cout<<"Size of arr in main:"<<sizeof(arr)<<endl;
    // solve(arr,5);


    // int nums[5]={10,20,30,40,50};
    // int *arr[5];
    // arr[0]=&nums[0];
    // arr[1]=&nums[1];
    // arr[2]=&nums[2];
    // arr[3]=&nums[3];
    // arr[4]=&nums[4];
              


    // int arr[5]={10,20,30,40,50};
    // int *ptr=arr;
    // int (*ptr1)[5]=&arr;

    // int arr[5]={10,20,30,40,50};
    // int *ptr=arr;


    // char ch='a';
   
    // char* cptr=&ch;
    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cptr=cptr+2;
    // cout<<cptr<<endl;

    // char ch[50]={'s','t','a','t','e','m','e','n','t'};
    // cout<<ch<<endl;
    // char* cptr=ch;
    // cout<<cptr<<endl;

    // cout<<&ch<<endl;
    // cout<<&cptr<<endl;
    // cout<<*(ch+3)<<endl;
    // cout<<*(cptr+3)<<endl;
    // cout<<cptr+2<<endl;
    // cout<<*cptr<<endl;
    // cout<<cptr+8<<endl;


    // char ch[10]={'l','o','v','e'};
    // char* cptr=ch;
    
    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<ch[0]<<endl;
    // cout<<cptr<<endl;
    // cout<<&cptr<<endl;
    // cout<<*cptr<<endl;



    // int arr[]={10,20,30,40};
    // cout<<sizeof(arr)<<endl;
    
    // int* p=arr;
    // cout<<sizeof(p)<<endl;

    // int* q=p;
    // cout<<sizeof(q)<<endl;

    // int arr[4]={10,20,30,40};
    // int *p=arr;
    // int *q=arr+1;

    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<&arr[0]<<endl;

    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;

    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;

    // cout<<*p+1<<endl;
    // cout<<*p+2<<endl;
    // cout<<*q+2<<endl;
    // cout<<*(q+2)<<endl;

    // int a=5;
    // int* p=&a;
    // cout<<p<<endl;
    // p=p+1;
    // cout<<p<<endl;


    // int arr[5]={10,20,30,40,50};
    // cout<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<&arr<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr)+1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(arr+3)<<endl;
    

    // int* ptr=nullptr;
    // cout<<*ptr<<endl;

    // int a=10;
    // int* ptr=&a;
    // cout<<"size of ptr:"<<sizeof(ptr)<<endl;

    // bool b=20;
    // bool* bptr=&b;
    // cout<<"size of bptr:"<<sizeof(bptr)<<endl;

    // char ch='A';
    // char* cptr=&ch;
    // cout<<"size of cptr:"<<sizeof(cptr)<<endl;

    // long ilachi=100;
    // long* lptr=&ilachi;
    // cout<<"size of lptr:"<<sizeof(lptr)<<endl;


    // int a=10;
    // cout<<"a ki value:"<<a<<endl;
    // cout<<"a ka address:"<<&a<<endl;
    // int* ptr=&a;
    // cout<<"ptr ki value:"<<ptr<<endl;
    // cout<<"ptr ka address:"<<&ptr<<endl;
    // cout<<"ptr ke andar jo address hai us address pe jo value hai:"<<*ptr<<endl;



    return 0;
}