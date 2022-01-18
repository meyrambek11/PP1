#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0;i<s.size();i++){
        sum = sum + s[i];
    }
    cout << char(2847-sum);
}