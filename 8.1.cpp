#include <iostream>
#include <string>
using namespace std;
int main () {
    string s;
    cin >> s;
    string a,b,c;
    a="8717";
    b="87272";
    c="87273";
    
    if(s.find(a) != string::npos){
        cout << "Astana";
    }
    else if(s.find(b) != string::npos){
        cout << "Almaty"; 
    }
     else if(s.find(c) != string::npos){
        cout << "Almaty";
    }
     cout << endl;   
    
    return 0;
}