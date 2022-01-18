#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    string s;
    cin >> s;
   string t = string(s.rbegin(),s.rend());
    if(s == t)
    cout << "YES";
    else
    cout << "NO";
    
    return 0;
}