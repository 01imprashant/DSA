#include<iostream>
using namespace std;

// int mySqrt(int x){
//     int s=0;
//     int e=x;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(mid*mid==x){
//             return mid;
//         }
//         else if(mid*mid<x){
//             ans=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

int mySqrt(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid*mid<=n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double perfectSqrt(int n){
    double sqrt=mySqrt(n);

    int precision=10;
    double step=0.1;
    for(int i=1;i<=precision;i++){
        double j=sqrt;
        while(j*j<=n){
         sqrt=j;
         j=j+step;
        }
        step=step/10;
    }

    return sqrt;
}

int main(){
    // int x;
    // cin>>x;
    // int root=mySqrt(x);
    // cout<<"Sqrt of x is:"<<root<<endl;
    int n;
    cin>>n;
    double myRoot=perfectSqrt(n);
    // cout<<myRoot<<endl;
    printf("%0.10f",myRoot);

    return 0;
}