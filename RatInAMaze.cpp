#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int newx,int newy,int maze[][4],int row,int col,vector<vector<bool>>& visited){
     if((newx>=0 && newx<row)&&
        (newy>=0 && newy<col)&& 
        maze[newx][newy]==1 && 
        visited[newx][newy]==false)
        {
        return true;
        }
     else{
        return false;
      }
} 
    
void printAllPath(int maze[][4],int row,int col,int scrx,int scry,string &output,vector<vector<bool>>& visited){
    //Base case
    //destination cordinates are [row-1] and [col-1]
    if(scrx==row-1 && scry==col-1){
        //reched destination
        cout<<output<<endl;
        return;
    }
    //1 case hum solve kerage baki recursion sambhal lega

    //UP
    int newx=scrx-1;
    int newy=scry;
    if(isSafe(newx,newy,maze,row,col,visited)){
     //mark visited
     visited[newx][newy]=true;
     //call recursion
     output.push_back('U');
     printAllPath(maze,row,col,newx,newy,output,visited);
     //Backtracking 
     output.pop_back(); 
     visited[newx][newy]=false;
    }
 

    //Right
    newx=scrx;
    newy=scry+1;
    if(isSafe(newx,newy,maze,row,col,visited)){
        //mark visited
        visited[newx][newy]=true;
        //call recursion
        output.push_back('R');
        printAllPath(maze,row,col,newx,newy,output,visited);
        //Backtracking
        output.pop_back();
        visited[newx][newy]=false;
    }

    //Down
    newx=scrx+1;
    newy=scry;
    if(isSafe(newx,newy,maze,row,col,visited)){
        //mark visited
        visited[newx][newy]=true;
        //call recursion
        output.push_back('D');
        printAllPath(maze,row,col,newx,newy,output,visited);
        //Backtracking
        output.pop_back();
        visited[newx][newy]=false;
    }

    //Left
    newx=scrx;
    newy=scry-1;
    if(isSafe(newx,newy,maze,row,col,visited)){
        //mark visited
        visited[newx][newy]=true;
        //call recursion
        output.push_back('L');
        printAllPath(maze,row,col,newx,newy,output,visited);
        //Backtracking
        output.pop_back();
        visited[newx][newy]=false;
    }
}


int main(){
    int maze[4][4]={
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1}
    };
    int row=4;
    int col=4;
    int scrx=0;
    int scry=0;
    string output="";
    //create 2D vector visited
    vector<vector<bool>> visited(row,vector<bool>(col,false));
    if(maze[0][0]==0){
        //Rat can not move
        cout<<"No Path Exists"<<endl;
    }
    else{
        visited[scrx][scry]=true;
        printAllPath(maze,row,col,scrx,scry,output,visited); 
    }

   return 0;
}