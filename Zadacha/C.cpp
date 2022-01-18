#include <iostream>
using namespace std;

int f(string s, int sum, int i){
    if(s.size() == i) return sum;
    if(s[i] >= '0' && s[i] <= '9'){
        sum = sum + 1;
    }
    return f(s,sum,i+1);
}
int main(){
    string s;
    cin >> s;
    cout << int(f(s,0,0));
}