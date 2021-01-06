#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    cout << "char : " << ch << endl;
    cout << "sizeof char : " << sizeof(ch) << endl;
    cout << "int char : " << int(ch) << endl;
    cout << "char(int(ch)) : " << char(int(ch)) << endl;
    return 0;
}