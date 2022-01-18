#include <iostream>
using namespace std;
bool digit(char c){
    bool m = false;
    if(c>='0' && c<='9'){
        m = true;
    }
    return m;
}
int main(){
    char c;
    cin >> c;
    if(digit(c) == true){
        cout << "yes";
    }
    else
     cout << "no";
     return 0;
}