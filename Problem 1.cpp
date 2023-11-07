#include <iostream>
using namespace std;

int main() {
    int a, b, c, av, p;
    cin >> a >> b >> c;

    av = (a + b + c) / 3;
    cout << "the average is " << av << endl;

    p = a * b * c;
    cout << "the product is " << p;
}