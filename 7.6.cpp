#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    
    
    cin >> x >> y;
    if(x%3 == 0 || y%3 == 0){
        cout << "Yes";
    }
    else if((x+y)%3 == 0){
        cout << "Yes";
    }
    else
    cout << "No";
    return 0;
}