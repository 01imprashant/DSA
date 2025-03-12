#include<iostream>
using namespace std;

class abc{

    int x;
    int *y;
    const int z;

public:
    
    // //Old way to design ctor
    // abc(int _x,int _y,int _z=0){
    //     x=_x;
    //     y=new int(_y);
    //     z=_z;
    // }

    //Initiallisation list
    abc(int _x,int _y,int _z=0):x(_x),y(new int(_y)),z(_z){
        cout<<"Inatalise list"<<endl;
    }

    int getX() const {
        return x;
    }
    void setX(int _val){
        x=_val;
    }
    int getY() const {
        return *y;
    }
    void setY(int _val){
        *y=_val;
    }
    int getZ() const { 
        return z;
    }

};

void printABC(const abc &a){
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
}

int main(){
    
    abc a(1,2,3);
    // cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
    printABC(a);
    
    return 0;
}


// int main(){

//     // //Here x is constant
//     // const int x=10;
//     // // //x can not modify 
//     // // x=20;
//     // cout<<x<<endl;


//     // //another way
//     // int *a=new int;
//     // *a=2;
//     // cout<<*a<<endl;
//     // delete a; 
//     // int b=5;
//     // a=&b;
//     // cout<<*a<<endl;


//     // //pointer ka data change nhi ho sakta,pointer change ho sakta hai
//     // //const data,non const pointer
//     // const int *a=new int(10);
//     // cout<<*a<<endl;

//     // delete a;

//     // int b=100;
//     // a=&b;
//     // cout<<*a<<endl;
    

//     // //pointer ka data change ho sakta hai,pointer change nhi ho sakta
//     // //const pointer,non const data
//     // int *const a=new int(10);
//     // cout<<*a<<endl;
//     // // int b=100;
//     // // a=&b;
//     // // cout<<*a<<endl;
//     // *a=1000;
//     // cout<<*a<<endl;


//     // //const pointer,const data
//     // int const *const a=new int(10);
//     // cout<<*a<<endl;
//     // int b=100;
//     // // a=&b; 
//     // // cout<<*a<<endl;

//     // // *a=100;
//     // // cout<<*a<<endl;


//     return 0;
// }