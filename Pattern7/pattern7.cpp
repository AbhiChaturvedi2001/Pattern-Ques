#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int space = n - row;
        while(space){
            cout << " ";
            space--;
        }
        int col = n - row;
        while(col < n){
            cout << "*";
            col++;
        }
        col = 2;
        while(col <= row){
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}