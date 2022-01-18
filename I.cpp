#include <iostream>

using namespace std;

int main (){
    int a;
    cin >> a;
    cout << (a/100) + (a%100/10) + (a%100%10);
    return 0;
}