#include<iostream>
using namespace std;

class abc{

public:
    int x,y;

    void print(){
        //this->prt pass ho raha hai
        cout<<x<<" "<<y<<endl;
    }

};

int main(){
    abc obj1={1,2};
    obj1.print();
    abc obj2={4,5};
    obj2.print();

    return 0;
}