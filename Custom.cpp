#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// void print(vector<int>& v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }


void print(vector< vector<int> >& v){
    for(int i=0;i<v.size();i++){
       vector<int> &temp=v[i];
       int a=temp[0];
       int b=temp[1]; 
       cout<<a<<" "<<b<<endl;
    }
}

// bool mycomp(int &a,int &b){
//     //inc order me sorting
//     return a<b;
//     //dec order me sorting
//     // return a>b;
// }

bool mycomp(vector<int>&a,vector<int>&b){
    //0 index based sorting
    // return a[0]<b[0];
    //1 index based sorting
    return a[1]<b[1];
}

int main(){

//    vector<int> v;
//    v.push_back(44);
//    v.push_back(55);
//    v.push_back(33);
//    v.push_back(11);
//    v.push_back(22);
//    //Sorting in increasing order
//    sort(v.begin(),v.end(),mycomp);
//    print(v);

vector< vector<int> > v;
int n;
cout<<"Enter size of vector:";
cin>>n;


int a,b;
for(int i=0;i<n;i++){
  vector<int> temp;
  cout<<"Ente a: and b: "<<endl;
  cin>>a>>b;
  temp.push_back(a);
  temp.push_back(b);
  v.push_back(temp);
}
cout<<"Here are the values"<<endl; 
//sort by 0 index based
sort(v.begin(),v.end());
//sort by 1 index based
sort(v.begin(),v.end(),mycomp);
print(v);




   
   return 0;
}