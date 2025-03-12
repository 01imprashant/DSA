#include<iostream>
#include<vector>
using namespace std;

void fun(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void printVector(vector<int> v){
    int size=v.size();
    cout<<"Print Vector: "<<endl;
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}

int main(){

    // vector<char>arr;
    // arr.push_back('a');
    // arr.push_back('b');
    // arr.push_back('c');
    // arr.push_back('d');
    
    // cout<<"First element:"<<arr[0]<<endl;
    // cout<<"First element:"<<arr.front()<<endl;
    // cout<<"Last element:"<<arr.back()<<endl;
    // cout<<"Last element:"<<arr[arr.size()-1]<<endl;


    //    //default way to initialise vector
    //    vector<int>arr;
    //    printVector(arr);
    //    //initialise vector with size=5 and value=-1
    //    vector<int>arr1(5,-1);
    //    printVector(arr1);
    //    cout<<endl;

    //    arr1.push_back(50);
    //    printVector(arr1);
    //    cout<<endl;
       
    //    //initilise vector with values
    //    vector<int> arr2={1,2,3,4,5};
    //    printVector(arr2);
    //    cout<<endl;

    //    arr2.push_back(30);
    //    printVector(arr2);
    //    cout<<endl;
    //    arr2.pop_back();
    //    printVector(arr2);
    //    cout<<endl;
    //    arr2.pop_back();
    //    printVector(arr2);
    //    cout<<endl;

    //    vector<int>arr3{1,2,3,4,5};
    //    vector<int>arr4(arr3);

    
    // // vector is a dynamic allocation all array in which user does not worried about memory  
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(2);
    // v.push_back(4);

    // printVector(v);

    // cout<<endl;

    // v.pop_back();
    // printVector(v);
    // cout<<endl;
    // v.pop_back();
    // printVector(v);
    // cout<<endl;
    // v.pop_back();
    // printVector(v);
    // cout<<endl;



    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int data;
    //     cin>>data;
    //     v.push_back(data);
    // }

    // for(int i=0;i<10;i++){
    //     v.push_back(100);
    // }
    // printVector(v);
    // //i want to clear the vector
    // v.clear();
    // cout<<endl;

    // printVector(v);

    

    // //Static memory allocation of array
    // int arr[5]={1,2,3,4,5};
    // int n=5;

    // //Dynamic memory allocation of array
    // int n;
    // cout<<"Enter size of arr: ";
    // cin>>n;
    // int *arr=new int[n];


    // for(int i=0;i<n;i++){
    //     int data;
    //     cin>>data;
    //     arr[i]=data;
    // }

    // arr[5]=10;


    // fun(arr,n);


    return 0;

}