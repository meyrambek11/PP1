#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    string t;
    cin >> s >> t;
    if(s.find(t)==string::npos)
    cout <<"NO";
    else
    cout << "YES";
    
    return 0;
}