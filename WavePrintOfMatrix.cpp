#include<iostream>
#include<vector>
using namespace std;

void wavePrint(vector< vector<int> > v){
    int n=v.size();
    int m=v[0].size();
    for(int startCol=0;startCol<m;startCol++){
        //Even no of col->Top to bottom
        if((startCol & 1)==0){
            for(int i=0;i<n;i++){
                cout<<v[i][startCol]<<" ";
            }
        }
        else{
            //Odd no of col->Bottom to top
            for(int i=m-1;i>=0;i--){
                cout<<v[i][startCol]<<" ";
            }

        }
    }
}

int main(){
    vector< vector<int> > v{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    wavePrint(v);
}