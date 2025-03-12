#include<iostream>
using namespace std;
 
#define PI 3.14567

float areaOfCircle(float r){
    return PI*r*r;
}

float perimeterOfCircle(float r){
    return 2*PI*r;
}

int main(){
    cout<<areaOfCircle(4)<<endl;
    cout<<perimeterOfCircle(4)<<endl;
    
    return 0;
}