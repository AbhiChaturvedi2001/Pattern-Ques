#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a = n;
    int cnt = 0;
    
    while(n != 0){
        int restVal = n%10;
        if(a%restVal == 0){
            cnt++;
        }
        n = n/10;
    }
    cout << cnt << endl;
}