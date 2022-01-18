#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    if(c*c >= (a*a + b*b)){
        cout << "Yes";
    }
    else if(c*c <= (a*a + b*b)){
        cout << "Yes";
    }
    else
    cout << "No";
   
    return 0;
}