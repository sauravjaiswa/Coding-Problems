//Sudoku Solver
//https://www.youtube.com/watch?v=uyetDh-DyDg&list=PL-Jc9J83PIiHO9SQ6lxGuDsZNt2mkHEn0

#include<bits/stdc++.h>
using namespace std;

void traverseBoard(vector<vector<char>>& board,int i,int j){
    int ni,nj,k;
    ni=nj=0;

    if(i==board.size())
        return;

    if(j==board[0].size()-1){
        ni=i+1;
        nj=0;
    }else if(j<board[0].size()){
        ni=i;
        nj=j+1;
    }

    if(board[i][j]=='.'){
        for(k=49;k<=57;k++){
            char ch=(char)k;
            if(isValid(board,i,j,ch)==true){
                board[i][j]=ch;
                traverseBoard(board,ni,nj);
                board[i][j]='.';
            }
        }
    }else
        traverseBoard(board,ni,nj);

}

bool isValid(vector<vector<char>>& board,int i,int j,char ch){
    int k,l,shifti,shiftj;
    for(k=0;k<board[i].size();k++){
        if(board[i][k]==ch)
            return false;
    }

    for(k=0;k<board.size();k++){
        if(board[k][j]==ch)
            return false;
    }

    shifti=i/3*3;
    shiftj=j/3*3;

    for(k=0;k<3;k++){
        for(l=0;l<3;l++){
            if(board[shifti+k][shiftj+l]==ch)
                return false;
        }
    }
    return true;
}

void solveSudoku(vector<vector<char>>& board) {
    traverseBoard(board,0,0);
}

int main(){
    vector<vector<char>> board(9);
    int i,j;
    for(i=)
}
