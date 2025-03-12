#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Person{

    public:

    void walk(){
        cout<<"Person is walking"<<endl;
    }
};

class Teacher: virtual public Person{

    public:

    void tech(){
        cout<<"Tracher is teaching"<<endl;
    }
};

class Researcher: virtual public Person {
     
    public:

    void research(){
        cout<<"Researcher is researching"<<endl;
    }
};

//Multiple Inheritence
class Professor:public Teacher,public Researcher{
    
    public:

    void bore(){
        cout<<"Professor is boring"<<endl;
    }
};

int main(){
    Teacher t;
    Researcher r;
    Professor p;

    //Diamond problem
    p.Teacher::walk();
    p.Researcher::walk();
    p.walk();
    


    return 0;
}