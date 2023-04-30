#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = n;
    while(row >= 1){
        int space = n - row + 1;
        while(space){
            cout<<" ";
            space--;
        }
        int col = 1;
        while(col <= row*2-1){
            cout << "*" ;
            col++;
        }
        cout << endl;
        row--;
    }
}