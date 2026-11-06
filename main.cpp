#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int add(int a, int b);

void sayString (string s);

int main () {
    cout << "Greetings!" << endl;
    return 0;
}

int add (int a, int b) {
    return a + b;
}

void sayString (string s) {
    cout << s << endl;
}