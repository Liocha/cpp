#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text = " documents found";
    int count = 0;
    cin >> count;
    string resault = to_string(count) + text;
    cout << resault << endl;
    return 0;
}