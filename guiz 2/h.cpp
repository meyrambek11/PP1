#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 474 || n == 477 || n == 747 || n == 447 || n == 774) {
        cout << "YES";
    }
    else if(n == 47 || n==74){
        cout << "YES";

    }
    else if(n%4 == 0 || n%7 == 0){
        cout << "YES";
    }
    else
    cout << "NO";
    return 0;
}