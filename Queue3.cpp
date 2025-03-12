#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main(){
    string str="facfdcad";
    queue<char> q;
    int freq[26]={0};
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        freq[ch-'a']++;
        q.push(ch);

        //ans find karna hai
        while(!q.empty()){
            char frontChar=q.front();
            if(freq[frontChar-'a']>1){
                //yani ye ans nhi hai
                q.pop();
            }
            else{
                //equal to 1 hai
                //yani yahi ans hai
                cout<<frontChar<<"->";
                break;
            }
        }
        if(q.empty()){
            cout<<"#"<<"->";
        }
    }
    cout<<endl; 

    
    return 0;
}