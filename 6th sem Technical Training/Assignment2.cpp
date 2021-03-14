/**Write a program to assign passengers seats in an airplane. Assume a small airplane with seat numberings as follows:
1 A B C D
2 A B C D
3 A B C D
4 A B C D
5 A B C D
6 A B C D
7 A B C D

The program should display the seat pattern with an X marking the seat already assigned. For example, after seats 1A, 2B and 4C are taken the display
should look like this:
1 X B C D
2 A X C D
3 A B C D
4 A B X D
5 A B C D
6 A B C D
7 A B C D
After displaying the seats available, the program prompts for the seat desired, the user types in a seat and then the display of available seats is
updated. This continues until all seats are filled or the user signals that the program should end. If the user types in a seat that is already assigned
the program should say that the seat is occupied and display the available seats.**/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

void displaySeats(vector<vector<char>> seats,int m,int n){
    int i,j;

    for(i=0;i<seats.size();i++){
        cout<<i+1<<" ";
        for(j=0;j<seats[i].size();j++){
            cout<<seats[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int i,j,n,m,cnt=0;
    char ch;
    string seatNo;
    m=8;
    n=4;
    vector<vector<char>> seats;

    for(i=0;i<m;i++){
        vector<char> temp;
        for(j=0;j<n;j++){
            temp.push_back((char)(65+j));
        }
        seats.push_back(temp);
        temp.clear();
    }

    displaySeats(seats,m,n);

    do{
        if(cnt==28){
            cout<<"Sorry the capacity is full\n";
            break;
        }

        cout<<"Enter a seat no.: ";
        cin>>seatNo;

        int row,col;
        row=seatNo[0]-'1';
        col=seatNo[1]-'A';

        if(seats[row][col]=='X'){
            cout<<"The seat is occupied.\n";
            displaySeats(seats,m,n);
        }else{

            seats[row][col]='X';
            displaySeats(seats,m,n);

            cnt++;
        }

        cout<<"Do you want to continue? (Y/N) : ";
        cin>>ch;

    }while(ch=='Y');

    return 0;
}
