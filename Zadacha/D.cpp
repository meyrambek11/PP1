#include <iostream>
using namespace std;
string s;

void f(int i){
    if(s.size()-1 == i)
    {
        cout << s[i];
        return;
    }
    cout << s[i] << "*";
    f(i+1); 
}

int main(){
    cin >> s;
    f(0);
}