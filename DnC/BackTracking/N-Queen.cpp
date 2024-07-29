#include<iostream>
#include<vector>
using namespace std;

void PrintBoard(vector<vector<char>>& board,int n){
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cout<<board[row][col]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;

}

bool isSafe(int row,int col,vector<vector<char>>& board,int n){
    int i=row;
    int j=col;

    while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }
    i=row;
    j=col;
    while(j>=0 && i>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
        i--;
    }
    i=row;
    j=col;
    while(j>=0 && i<n){
       if(board[i][j]=='Q'){
            return false;
        }
        j--;
        i++; 
    }

    return true;
}

void Queen(vector<vector<char>>& board,int n,int col){
    if(col>=n){
        PrintBoard(board,n);
        return;
    }

    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            Queen(board,n,col+1);
            board[row][col]='-';
        }
    }
}

int main(){
    int n=4;
    vector<vector<char>> board(n,vector<char>(n,'-'));
    int col=0;


    
    Queen(board,n,col);
 
 
 
 
 return 0;
}