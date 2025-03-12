#include<iostream>
using namespace std;
void convertKmToMiles(int km){
    float miles=km*0.6213711922;
    cout<<miles<<"miles"<<endl;
}
int main(){
    int km;
    cin>>km;
    convertKmToMiles(km);
}