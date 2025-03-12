#include<iostream>
#include<thread>
using namespace std;

void taskA(){
    sleep(100);
    for(int i=0;i<10;i++){
        printf("%d\n",i);
        fflush();
    }
}
void taskB(){
    sleep(200);
    for(int i=0;i<10;i++){
        printf("%d\n",i)
        fflush();
    }
}
int main(){
    thread<int> t1(taskA);
    thread<int> t2(taskB);

    t1.join();
    t2.join();


    return 0;
}