#include<iostream>
using namespace std;

int main() {
    int i = 1;
    switch (i) {
        default:
            cout << "default case\n";
        case 4:
        case 5:
            cout << "case 4 or 5\n";
            break;
        case 1:
            cout << "case 1\n";
            break;
        case 2:
        case 3:
            cout << "case 2 or 3\n";
            break;
    }
    return 0;
}

