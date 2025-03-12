#include<iostream>
using namespace std;
int main(){
    
    // string name;
    // cin>>name;
    // cout<<"Printing Name: "<<name<<endl;
    // getline(cin,name);
    // cout<<"Printing name:"<<name<<endl;
    // cout<<"Printing first character: "<<name[0]<<endl;
    // cout<<"Printing second character: "<<name[1]<<endl;

    // int index=0;
    // while(name[index]!='\0'){
    //     cout<<"At Index:"<<index<<" Character:"<<name[index]<<endl;
    //     index++;
    // }

    // cout<<"Printing Index 6 Value:"<<name[6]<<endl;
    // int value=(int)name[6];
    // cout<<"Value at index 6: "<<value<<endl;

    // cout<<"Length of string:"<<name.length()<<endl;
    // string temp="";
    // cout<<"String is empty or Not:"<<temp.empty()<<endl;
    // cout<<"Character at position 0 is:"<<name.at(0)<<endl;
    // cout<<"Front char of string is:"<<name.front()<<endl;
    // cout<<"Back char of string is:"<<name.back()<<endl;

    // string str1="love";
    // string str2="babbar";

    // cout<<"Befor appending:"<<endl;
    // cout<<str1<<endl;
    // cout<<str2<<endl;

    // str1.append(str2);
    // str2.append(str1);

    // cout<<"After Appending:"<<endl;
    // cout<<str1<<endl;

    // string comm="This is a car";
    // cout<<comm<<endl;
    // comm.erase(4,5);
    // cout<<comm<<endl;

    // string name="Love Babbar";
    // cout<<name<<endl;
    // string middle="Kumar ";
    // cout<<middle<<endl;
    
    // name.insert(5,middle);
    // cout<<name<<endl;

    // string name="Love";
    // cout<<name<<endl;
    // name.push_back('R');
    // cout<<name<<endl;
    // name.pop_back();
    // cout<<name<<endl;


    // string str1="this is a car big daddy of all suvs";
    // cout<<str1<<endl;
    // string substring=str1.substr(18,5);
    // cout<<substring<<endl;

    // string str1="love";
    // string str2="love";
    // if(str1.compare(str2)==0){
    //     cout<<"Matched"<<endl;
    // }
    // else{
    //     cout<<"Not Matched";
    // }


    string str1 = "yaar tera super star desi kalakar";
    string str2  = "star ";


    if(str1.find(str2) == string::npos){
      //not found
    cout << "Not Found" << endl;
    }
    else {
    cout << "Found" << endl;
    }





return 0;

}