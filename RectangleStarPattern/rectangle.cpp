// print star rectangle when N = 4
/*
****
****
****
****
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}