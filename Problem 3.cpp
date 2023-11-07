#include <iostream>
using namespace std;

int main() {
    double celsius, farenheiht;
    cin >> celsius;

    farenheiht = celsius * 1.8 + 32;

    cout << "The " << celsius << " degrees in Celsius is equal to " << farenheiht << " degrees in Farenheight";
}