
#include <iostream>

using namespace std;

int main()
{
    string test = "Hello";
    string copy = test;
    string &ref = test;
    
    cout << test << endl;
    cout << copy << endl;
    cout << ref << endl;
    cout << &test << endl;
    cout << &copy << endl;
    cout << &ref << endl;
    copy = "AAA";
    cout << copy << endl;
    cout << &copy << endl;
    cout << test << endl;
    cout << &test << endl;
    
    ref = "BBB";
    cout << ref << endl;
    cout << &ref << endl;
    cout << test << endl;
    cout << &test << endl;

    return 0;
}
