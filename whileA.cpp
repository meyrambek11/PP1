#include <iostream>

using namespace std;

int main (){
    int a=1;
    int x;
    cin >> x;
    

    while (a*a <= x)
    {
    cout << a*a << endl;
    ++a;
    }
return 0;
}