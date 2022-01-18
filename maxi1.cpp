#include <iostream>

using namespace std;

int main (){
    int x;
    cin >> x;
    int maxi = 0;

    for (int i=1; i<=x; i=i+1){
        int m;
        cin >> m;
        maxi = max(maxi, m);
    }
    cout << maxi;
    return 0;
}