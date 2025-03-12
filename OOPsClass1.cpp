#include<iostream>
#include<string>
using namespace std;

class Student{

private:

    string gfname;

public:

    int id;
    int age;
    bool present; 
    string name;
    int nos;
    
    //constructor->default constructor
    Student(){
       cout<<"student constructor called"<<endl;
    }

    //perametrazied constructor
    Student(int id,int age,bool present,string name,int nos,string gfname){
        this->id=id;
        this->age=age;
        this->present=present;
        this->name=name;
        this->nos=nos;
        this->gfname=gfname;
        cout<<"student parametrized constructor called"<<endl;
    }

    //perametrazied constructor without gf
    Student(int id,int age,bool present,string name,int nos){
        this->id=id;
        this->age=age;
        this->present=present;
        this->name=name;
        this->nos=nos;
        cout<<"student parametrized constructor without gf called"<<endl;
    }

    void study(){
        cout<<"studying"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }

private:

    void chat(){
        cout<<"chatting"<<endl;
    }

};

int main(){
   
    Student s1;
    // s1.id=1;
    // s1.name="Ram";
    // s1.age=20; 
    // s1.present=1;
    // s1.nos=5;
    // cout<<s1.age<<endl;
    
    Student s2(1,19,1,"Prashnat",5,"Shalini");
    cout<<s2.name<<endl;
    cout<<s2.id<<endl;

    // s2.id=2;
    // s2.name="Lakshman";
    // s2.age= 19;
    // s2.present=0;
    // s2.nos=2;
    
    //allocate student on stack
    Student s3(2,20,0,"Shivam",6);
    cout<<s3.name<<endl;
    
    //allocate student in heap
    Student *s4=new Student(4,32,0,"Om",0);
    cout<<s4->name<<endl;
    cout<<(*s4).name<<endl;


    return 0;
}