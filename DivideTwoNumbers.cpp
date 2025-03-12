#include<iostream>
using namespace std;

int getQuotient(int divisor,int dividend){
    int s=0;
    int e=dividend;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid*divisor==dividend){
            return mid;
        }
        else if(mid*divisor<dividend){
            //ans store karlo
            ans=mid;
            //right me jao
            s=mid+1;
        }
        else{
            //left me jao
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double quotientInPrecision(int divisor,int dividend){
    double quotient=getQuotient(divisor,dividend);
    
    int precision=5;
    double step=0.1;
    for(int i=1;i<=precision;i++){
        double j=quotient;
        while(divisor*j<=dividend){
         quotient=j;
         j=j+step;
        }
        step=step/10;
    }
    return quotient;
}

int main(){
    int divisor=7;
    int dividend=29;
    double finalAns=quotientInPrecision(abs(divisor),abs(dividend));

    if((divisor<0 && dividend>0)||(divisor>0 && dividend<0)){
        finalAns=0-finalAns;
    }

    cout<<"Quotient is:"<<finalAns<<endl;

    return 0;
}