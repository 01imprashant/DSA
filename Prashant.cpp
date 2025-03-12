#include<iostream>
#include<vector>
using namespace std;

// int linearSearch(vector<int>& v,int target){
//     for(int i=0;i<v.size();i++){
//         if(v[i]==target){
//             return true;
//         }
//     }
//     return false;
// }

// int binarySearch(int arr[],int n,int target){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         //mid target ke equal hai
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(target>arr[mid]){
//             //target mid se bada hai 
//             //right me jao
//             s=mid+1;
//         }
//         else if(target<arr[mid]){
//             //target mid se chota hai
//             //left me jao
//             e=mid-1;
//         }
//         //mid ko update karo
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }

// int firstOcc(int arr[],int n,int target){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while (s<=e){
//         if(arr[mid]==target){
//             //ans ko store karwa lo
//             ans=mid;
//             //left me jao
//             e=mid-1;
//         }
//         else if(target>arr[mid]){
//             //right me jao
//             s=mid+1;
//         }
//         else if(target<arr[mid]){
//             //left me jao
//             e=mid-1;
//         }
//         //mid ko update kARO
//         mid=s+(e-s)/2;
//     }

//     return ans;  
    
// }

// int lastOcc(int arr[],int n,int target){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while (s<=e){
//         if(arr[mid]==target){
//             //ans ko store karwa lo
//             ans=mid;
//             //left me jao
//             s=mid+1;
//         }
//         else if(target>arr[mid]){
//             //right me jao
//             s=mid+1;
//         }
//         else if(target<arr[mid]){
//             //left me jao
//             e=mid-1;
//         }
//         //mid ko update kARO
//         mid=s+(e-s)/2;
//     }

//     return ans;  
    
// }

// int totalOcc(int arr[],int n,int target){
//     int first=firstOcc(arr, n,target);
//     int last=lastOcc(arr,n,target);
//     int total=last-first+1;

//     return total;
// }

// int findMissingEle(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         int diff=arr[mid]-mid;
//         if(diff==1){
//           //right me jao
//           s=mid+1;
//         }
//         else{
//             //ans ko store karo
//             ans=mid;
//             //left me jao
//             e=mid-1;

//         }
//         mid=s+(e-s)/2;
//     }
//     if(ans+1==0){
//         return n+1;
//     }
//     return ans+1;
// }

// int findPivotIndex(vector<int>& arr){
//     int n=arr.size();
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         //edge case
//         if(s==e){
//             return s;
//         }
//         else if(mid+1<=n && arr[mid]>arr[mid+1]){
//             return mid;
//         }
//         else if(mid-1>=0 && arr[mid]<arr[mid-1]){
//             return mid-1;
//         }
//         else if(arr[s]>arr[mid]){
//             //left me jao
//             e=mid-1;
//         }
//         else if(arr[s]<arr[mid]){
//             //right me jao
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }

// int getQuotient(int divisor,int dividend){
//     int s=0;
//     int e=dividend;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(mid*divisor==dividend){
//             return mid;
//         }
//         else if(mid*divisor<dividend){
//             //ans ko store karlo
//             ans=mid;

//             //right me jao
//             s=mid+1;
//         }
//         else{
//             //left me jao
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// int searchNearlySorted(int arr[],int n,int target){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(e<=e){
//         if(mid-1>=0 && arr[mid-1]==target){
//             return mid-1;
//         }
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(mid+1<n && arr[mid+1]==target){
//             return mid+1;
//         }
//         if(target>arr[mid]){
//             //right me jao
//             s=mid+2;
//         }
//         else{
//             //left me jao
//             e=mid-2;
//         }
//         mid=s+(e-s)/2;

//     }
//     return -1;
// }

// int findOddOccuringElement(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         //single case or edge case
//         if(s==e){
//             return s;
//         }


//         //odd deega
//         if(mid&1){
//             if(mid-1>=0 && arr[mid]==arr[mid-1]){
//                 //right me jao
//                 s=mid+1;
//             }
//             else{
//                 //left me jao
//                 e=mid-1;
//             }
//         }
//         else{
//             //mtlb even hai
//             if(arr[mid]==arr[mid+1]){
//                 //right me jao
//                 s=mid+2;
//             }
//             else{
//                 //store ans
//                 ans=mid;

//                 //left me jao
//                 e=mid;
//             }
           
//         }
//          mid=s+(e-s)/2;
//     } 
//     return ans;
// }

void print(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

// void bubbleSort(vector<int>& v){
//    int n=v.size();
//    for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-i-1;j++){
//         if(v[j]>v[j+1]){
//             swap(v[j],v[j+1]);
//         }
//      }
//    }
// }

void selectionSort(vector<int>& v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(v[j]>v[minIndex]){
                minIndex=j;
            }
        }
        swap(v[i],v[minIndex]);
    }
}

int main(){

    vector<int> v={44,33,55,11};
    // bubbleSort(v);
    selectionSort(v);
    print(v);




    // int arr[]={10};
    // int n=1;

    // int ansIndex=findOddOccuringElement(arr,n);

    // cout<<"Final ans is:"<<arr[ansIndex]<<endl;

    // int arr[]={20,10,30,50,40,70,60};
    // int n=7;
    // int target=500;

    // int index=searchNearlySorted(arr,n,target);

    // if(index){
    //     cout<<"Found at index:"<<index<<endl;
    // }
    // else{
    //     cout<<"Not found"<<endl;
    // }

    // int divisor=1;
    // int dividend=-35;
    // int ans=getQuotient(abs(divisor),abs(dividend)); 

    // if((divisor > 0 && dividend < 0 )||(divisor < 0   && dividend > 0 )){
    //     ans=0-ans;
    // }
    // cout<<"Quotient is:"<<ans<<endl;

    // int arr[]={1,2,3,4,5,6,7,8};
    // int n=8;
    // vector<int> v;
    // v.push_back(12);
    // v.push_back(14);
    // v.push_back(16);
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(6);
    // v.push_back(8);
    // v.push_back(10);
    // int pivotIndex=findPivotIndex(v);
    // cout<<"Pivot is:"<<pivotIndex<<endl;

    // int target=30;
    // int total=totalOcc(arr,n,target);
    // cout<<"Total Occ is:"<<total<<endl;
    // int ansIndex=lastOcc(arr,n,target);
    
    // if(ansIndex==-1){
    //     cout<<"Not Found"<<endl;
    // }
    // else{
    //     cout<<"Found at index:"<<ansIndex<<endl;
    // }

    return 0;
}