#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int add(int a, int b);

void say (string s, int n);

int main () {
    cout << "Greetings" << endl;
    return 0;
}

int add (int a, int b) {
    return a + b;
}

void say (string s, int n) {
    cout << s << n << endl;
}