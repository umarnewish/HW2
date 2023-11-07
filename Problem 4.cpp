#include <iostream>
using namespace std;

int main () {
    int a;
    cin >> a;
    if (a >= 50) {
        cout << 50 - a << " computers will stay free in the class";
    }
    else{
        cout << "Ypu entered wrong value";
    }
}