#include <iostream>

using namespace std;

int main() {
    double x;
    int sum=0;
    cin >> x;
    for (int i=1; i<=x; i= i+1){
    sum=sum+i;
    }
    cout << sum << endl;
    return 0;
}