#include<iostream>
using namespace std;

//Max Heap Creation
class Heap{
    public:
    int *arr;
    int capacity;
    int size;

    Heap(int capacity){
        this->arr=new int[capacity];
        this->capacity=capacity;
        //size=current number of element in the heap
        this->size=0;
    }
    void insert(int val){
        if(size==capacity){
            cout<<"Heap Overflow";
            return;
        }
        //size increase kar jayaga
        size++;
        int index=size;
        arr[index]=val; 
        
        //take the value to its correct position
        while(index >1){
            int parentIndex=index/2;
            if(arr[index]>arr[parentIndex]){
                swap(arr[index],arr[parentIndex]);
                index=parentIndex;
            }
            else{
                break;
            }
        } 
    }
    void printHeap(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
    int deleteFromHeap(){
        int answer=arr[1];
        //replacement
        arr[1]=arr[size];
        //last element ko delete kardo uski original position se
        size--;
        int index=1;
        while(index<size){
            int leftIndex=2*index;
            int rightIndex=2*index+1;
            //find out karna hai sabse bada kon hai
            int largestKaIndex=index;
            //check left child then right child
            if(leftIndex <= size && arr[leftIndex] > arr[largestKaIndex]){
                largestKaIndex=leftIndex;
            }
            if(rightIndex <= size && arr[rightIndex] > arr[largestKaIndex]){
                largestKaIndex=rightIndex;
            }
            //no change
            if(index==largestKaIndex){
                break;
            }
            else{
                swap(arr[index],arr[largestKaIndex]);  
                index=largestKaIndex;
            }
        }
        return answer;
    }
};

// //Min Heap Creation
// class Heap{
//     public:
//     int *arr;
//     int capacity;
//     int size;
//     Heap(int capacity){
//         this->arr=new int[capacity];
//         this->capacity=capacity;
//         this->size=0;
//     }
//     void insert(int val){
//         if(size==capacity){
//             cout<<"Heap Overflow";
//             return;
//         }
//         size++;
//         int index=size;
//         arr[index]=val;
//         while(index>1){
//             int parentIndex=index/2;
//             if(arr[index]<arr[parentIndex]){
//                 swap(arr[index],arr[parentIndex]);
//                 index=parentIndex;
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     int deleteFromHeap(){
//         int answer=arr[1];
//         arr[1]=arr[size];
//         size--;
//         int index=1;
//         while(index<size){
//             int leftIndex=2*index;
//             int rightIndex=2*index+1;
//             int smallestKaIndex=index;
//             if(leftIndex<=size && arr[leftIndex]<arr[smallestKaIndex]){
//                 smallestKaIndex=leftIndex;
//             }
//             if(rightIndex<=size && arr[rightIndex]<arr[smallestKaIndex]){
//                 smallestKaIndex=rightIndex;
//             }
//             if(index==smallestKaIndex){
//                 break;
//             }
//             else{
//                 swap(arr[index],arr[smallestKaIndex]);
//                 index=smallestKaIndex;
//             }
//         }
//         return answer;
//     }
//     void printHeap(){
//         for(int i=1;i<=size;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// };


void heapify(int *arr,int n,int index){
    int leftIndex=2*index;
    int rightIndex=2*index+1;
    int largestKaIndex=index;
    //teeno mai se max lao
    if(leftIndex<=n && arr[leftIndex]>arr[largestKaIndex]){
        largestKaIndex=leftIndex;
    }
    if(rightIndex<=n && arr[rightIndex]>arr[largestKaIndex]){
        largestKaIndex=rightIndex;
    }
    //after these 3 condition largestKaIndex pointing towards largest element among 3
    while(index!=largestKaIndex){
        swap(arr[index],arr[largestKaIndex]);
        index=largestKaIndex;
        //agea recursion sambhal lega
        heapify(arr,n,index);
    }
}  
void buildHeap(int arr[],int n){
    for(int index=n/2;index>0;index--){
        heapify(arr,n,index);
    }
}
void heapSort(int arr[],int n){
    while(n!=1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
}

int main(){

    Heap h(20);
    h.insert(5);
    h.insert(10);
    h.insert(15);
    h.insert(6);
    h.insert(25);
    h.insert(50);

    cout<<"Printing Heap:"<<" ";
    h.printHeap();
    cout<<endl;

    int ans=h.deleteFromHeap();
    cout<<"Answer:"<<ans;
    cout<<endl;

    // cout<<"Printing Heap:"<<" ";
    // h.printHeap();
    // cout<<endl;

    // int arr[]={-1,5,10,15,20,25,12};
    // int n=7;
    // buildHeap(arr,n);
    // cout<<"Printing Heap:";
    // for(int i=1;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // heapSort(arr,n);
    // cout<<"Printing Heap:";
    // for(int i=1;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    return 0;
}