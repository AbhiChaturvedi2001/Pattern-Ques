#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, pair<int, int>> p;

    p.first = 100;
    p.second.first = 200;
    p.second.second = 300;

    cout << p.first << " " << p.second.first << " " << p.second.second << endl;

    pair<pair<int, int>, pair<int, int>> a;
    a.first.first = 10000;
    a.first.second = 20000;

    a.second.first = 30000;
    a.second.second = 400000;

    cout << a.first.first << " " << a.first.second << endl;
    cout << a.second.first << " " << a.second.second << endl;

    // we can make array character
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
}