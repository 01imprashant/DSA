#include<iostream>
using namespace std;

void findAreaOfCircle(int radius){
    float pi=3.14;
    float area=pi*radius*radius;
    cout<<"Area of Circle is:"<<area<<endl;
}

int main(){

    findAreaOfCircle(2);

}