#include<iostream>
using namespace std;

class TrieNode{
    public:
    char value;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char val){
        this->value=val;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        this->isTerminal=false;
    }
};

//Insert string
void insertWord(TrieNode* root,string word){
    // cout<<"Received Word:"<<word<<" for insertion"<<endl;
    //Base Case
    if(word.length()==0){
        root->isTerminal=true;
        return;
    }
    //1 case hum solve karege 
    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;
    if(root->children[index]!=NULL){
        //present
        child=root->children[index];
    }
    else{
        //Not present
        child=new TrieNode(ch);
        root->children[index]=child;
    }
    //baaki recursion deekh lega
    insertWord(child,word.substr(1));
}

//Seach string
bool searchWord(TrieNode* root,string word){
    // cout<<"search for:"<<word<<endl;
    //Base Case
    if(word.length()==0){
        return root->isTerminal;
    }
    //1 case hum solve karege
    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;
    if(root->children[index]!=NULL){
        //fount or present
        child=root->children[index];
    }
    else{
        //Not found
        return false;
    }
    //baaki recursion sambhal lega
    bool recursionKaAns=searchWord(child,word.substr(1));
    return recursionKaAns;
}

//Delete string
void deleteWord(TrieNode* root,string word){
    //Base Case
    if(word.length()==0){
        root->isTerminal=false;
        return; 
    }
    //1 case mai solve karuga
    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;
    if(root->children[index]!=NULL){
        //present
        child=root->children[index];
    }
    else{
        //Not present
        return;
    }
    //baaki recursion sambhal lega
    deleteWord(child,word.substr(1));

}

void findPrefixString(TrieNode* root,string input,vector<int>& ans){
    
}

int main(){

    TrieNode* root=new TrieNode('-');

    insertWord(root,"donation");

    insertWord(root,"cater");
    insertWord(root,"care");
    insertWord(root,"car");
    insertWord(root,"com");
    insertWord(root,"cat");
    insertWord(root,"love");
    insertWord(root,"lovely");
    insertWord(root,"lover");
    insertWord(root,"loved");
    insertWord(root,"bat");

    // cout<<"Insertion Done"<<endl;

    // if(searchWord(root,"love")){
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"Not Found"<<endl;
    // }

    // deleteWord(root,"love");

    // if(searchWord(root,"loveded")){
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"Not Found"<<endl;
    // }




    return 0;
}