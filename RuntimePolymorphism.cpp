#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal making sound"<<endl;
    }
    virtual ~Animal(){
        cout<<"Animal dtor called"<<endl;
    }
};

class Dog:public Animal{
    public:
    void sound() override {
        cout<<"Dog is Barking"<<endl;
    }
    ~Dog(){
        cout<<"Dog dtor called"<<endl;
    }
};

class Cat:public Animal{
    public:
    void sound() override {
        cout<<"Cat is Meowing"<<endl;
    }
    ~Cat(){
        cout<<"Cat dtor called"<<endl;
    }
};

class Parrot:public Animal{
    public:
    void sound() override {
        cout<<"Parrot is Mitthu Mitthu"<<endl;
    }
    ~Parrot(){
        cout<<"Parrot dtor called"<<endl;
    }
    
};

void sound(Animal* animal){
    //Polymorphic
    animal->sound();
}

int main(){

    Animal* a=new Animal();
    sound(a);
    Animal* b=new Dog();
    sound(b);
    Animal* c=new Cat();
    sound(c);
    Animal* d=new Parrot();
    sound(d);

    delete a;
    delete b;
    delete c;
    delete d;


    // Animal* animal=new Animal();
    // animal->sound();
    // Dog* dog=new Dog();
    // dog->sound();
    // Cat* cat=new Cat();
    // cat->sound();
    
    return 0;
}