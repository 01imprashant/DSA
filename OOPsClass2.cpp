#include<iostream>
using namespace std;

class Student{

private:

    string gfName;

public:

    int id;
    int age;
    bool present; 
    string name;
    int nos;
    int *v;
    
    //constructor->default constructor
    Student(){
       cout<<"student ctor called"<<endl;
    }

    //perametrazied constructor
    Student(int id,int age,bool present,string name,int nos,string gfName){
        this->id=id;
        this->age=age;
        this->present=present;
        this->name=name;
        this->nos=nos;
        this->gfName=gfName;
        this->v=new int(10);

        cout<<"student parametrized ctor called"<<endl;
    }

    //perametrazied constructor without gf
    Student(int id,int age,bool present,string name,int nos){
        this->id=id;
        this->age=age;
        this->present=present;
        this->name=name;
        this->nos=nos;
        this->v=new int(10);

        cout<<"student parametrized ctor without gf called"<<endl;
    }

    //copy ctor
    Student(const Student &srcobj){
        this->id=srcobj.id;
        this->age=srcobj.age;
        this->present=srcobj.present;
        this->name=srcobj.name;
        this->nos=srcobj.nos;
        this->gfName=srcobj.gfName;

        cout<<"student copy ctor called"<<endl;
    }
    
    //destructor
    ~Student(){
        cout<<"student dtor called"<<endl;
        delete v;
    }

    //getter setter method
    string getGfName(){
        return gfName;
    }

    void setGfName(string gfName){
        this->gfName=gfName;
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
    // //Copy ctor
    // Student s1(1,12,1,"Chota Bheem",1,"Chutki"); 
    // Student s2=s1; 
    // // s2=s1; 
    // cout << s1.name << endl;
    // cout << s2.name << endl;  

    
    Student s1(1,12,1,"Chota Bheem",1,"Chutki"); 
    cout<<s1.name<<endl;
    cout<<s1.getGfName()<<endl;
    s1.setGfName("Indimati");
    cout<<s1.getGfName()<<endl;


    return 0;
} 