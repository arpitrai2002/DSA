#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isSafe(int x,int y,int row,int col,vector<vector<bool>> mark,int arr[][3]){
    if(((x>=0 && x<row) && (y>=0 && y<col)) && (arr[x][y]==1) && (mark[x][y]==false)){
        return true;
    }
    else{
        return false;
    }
}

void Maze(int arr[][3],int row,int col,int x,int y,vector<vector<bool>>& mark,vector<string>& path,string dir){
    if(x==row-1 && y==col-1){
        path.push_back(dir);
        return;
    }
    // D
    if(isSafe(x+1,y,row,col,mark,arr)){
        mark[x+1][y]=true;
        Maze(arr,row,col,x+1,y,mark,path,dir+'D');
        mark[x+1][y]=false;
    }
    // L
    if(isSafe(x,y-1,row,col,mark,arr)){
        mark[x][y-1]=true;
        Maze(arr,row,col,x,y-1,mark,path,dir+'L');
        mark[x][y-1]=false;
    }
    // R
    if(isSafe(x,y+1,row,col,mark,arr)){
        mark[x][y+1]=true;
        Maze(arr,row,col,x,y+1,mark,path,dir+'R');
        mark[x][y+1]=false;
    }
    // u
     if(isSafe(x-1,y,row,col,mark,arr)){
        mark[x-1][y]=true;
        Maze(arr,row,col,x+1,y,mark,path,dir+'U');
        mark[x-1][y]=false;
    }
    
}
 
int main(){
     int arr[3][3]={{1,0,0},{1,1,0},{1,1,1}};
     int row=3;
     int col=3;
     vector<vector<bool>> mark(3,vector<bool>(3,false));
     mark[0][0]=true;
     vector<string> path;
     string dir="";
     Maze(arr,row,col,0,0,mark,path,dir);

     for(auto i:path){
        cout<<i<<endl;
     }
 
 return 0;
}