#include <iostream>

using namespace std;

int main () {
    int x = 1;
    while (1) {
        cout << x << " ";
        x = x+1;
        if (x == 1000) break;
    }
return 0;
}