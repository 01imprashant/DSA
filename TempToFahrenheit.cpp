#include<iostream>
using namespace std;

void celsiusToFahrenheit(int celsius){
    float fahrenheit=celsius*9/5+32;
    cout<<"Temperature in Fahrenheit is:"<<fahrenheit<<"F"<<endl;
}

int main(){
    int celsius;
    cin>>celsius;
    celsiusToFahrenheit(celsius);

}