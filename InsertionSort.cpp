#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

 void insertionSort(vector<int>& v){
     int n=v.size();
     for(int i=1;i<n;i++){
        int key = v[i];
         int j=i-1;
         while(j>=0&&v[j]>key){
             v[j+1]=v[j];
             j--;
         }
         v[j+1]=key;
     }
 }


// void insertionSort(vector<int> &v) {
//   int n = v.size();
//   // i = 0, chhod deta hu
//   for (int i = 1; i < n; ++i) {
//     int key = v[i];
//     int j = i - 1;

//     // Move elements of arr[0..i-1] that are greater than
//     // key to one position ahead of their current position
//     while (j >= 0 && v[j] > key) {
//       v[j + 1] = v[j];
//       j--;
//     }
//     // insertion
//     v[j + 1] = key; 
//   }
// } 



int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    insertionSort(v);
    print(v);
}