#include<iostream>
#include<vector>
using namespace std;

int main(){
    // int arr[5];
    // vector<int> arr(5,-1);
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;

    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    // arr.push_back(40);
    // arr.push_back(50);
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;

    // cout<<arr.size()<<endl;
    // cout<<arr.empty()<<endl;

    // //2D-Vector
    // vector< vector<int> > arr(5,vector<int>(10,0));
    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //Jagged Array or Vector
    vector< vector<int> > brr;

    vector<int> vec1(10,0);
    vector<int> vec2(8,-1);
    vector<int> vec3(5,0);
    vector<int> vec4(7,-1);
    vector<int> vec5(9,0);

    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3); 
    brr.push_back(vec4);
    brr.push_back(vec5);

    for(int i=0;i<brr.size();i++){
        for(int j=0;j<brr[i].size();j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl; 
    }


    return 0;

}