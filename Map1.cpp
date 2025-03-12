#include<iostream>
#include<unordered_map>
using namespace std;

void countChar(unordered_map<char,int>& mapping,string str){
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        mapping[ch]++;
    }
}

int main(){

    // //creation of map
    // unordered_map<string,int> mapping;
    // //generally map ke andar pair insert hota hai
    // pair<string,int> p=make_pair("love",34);
    // pair<string,int> q("shivam",23);
    // pair<string,int> r;
    // r.first="pankaj";
    // r.second=21;
    // //Insertion
    // mapping.insert(p);
    // mapping.insert(q);
    // mapping.insert(r);
    // mapping["babbar"]=42;


    // cout<<"Size of map:"<<mapping.size()<<endl;
    // //Access
    // cout<<mapping.at("love")<<endl;
    // cout<<mapping["babbar"]<<endl;
    // //Searching
    // cout<<mapping.count("love")<<endl;
    // if(mapping.find("love")==mapping.end()){
    //     cout<<"Not Found"<<endl;
    // }
    // else{
    //     cout<<"Found"<<endl;
    // }
    // cout<<"Size of map:"<<mapping.size()<<endl;
    // cout<<mapping["kumar"]<<endl;
    // cout<<"Size of map:"<<mapping.size()<<endl;

    string str="lovebabbar";
    unordered_map<char,int> mapping;
    countChar(mapping,str);

    for(auto i:mapping){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    return 0;
}