#include<iostream>
#include<string>
using namespace std;

class Bird{
public:

    int age;
    int weight;
    int nol;
    string color;

    void eat(){
        cout<<"Bird is eating"<<endl;
    }

    void fly(){
        cout<<"Bird is flying"<<endl;
    }
};

class Sparrow: public Bird{
public:
    
    Sparrow(int age,int weight,int nol,string color){
        this->age=age;
        this->weight=weight;
        this->nol=nol;
        this->color=color;
    }

    void grass(){
        cout<<"Sparring is grassing"<<endl;
    }

};

class Peigon: public Bird{
public:

    void gutter(){
        cout<<"Peigon is guttering"<<endl;
    }

};

class Parrot: public Bird{
public:

    void speak(){
        cout<<"Parrot is speaking"<<endl;
    }

};

int main(){

    Sparrow s(2,1,2,"White");
    cout<<s.color<<endl;
    s.grass();
    s.eat();
    Peigon p;
    p.gutter();
    p.eat(); 
    Parrot pa;
    pa.speak(); 


    return 0;
}
