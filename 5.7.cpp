#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    string t;
    cin >> t >> s;
    if(s.find(t) == string :: npos){
        cout << "no";
    }
    else 
    cout << "yes";
    

    return 0;
}