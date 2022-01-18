#include <iostream>
using namespace std;
int f(string s,int i,int sum){
    if(s.size() == i) return sum;
    sum = sum + s[i]-48;
    
    return f(s,i+1,sum);
}
int main(){
    string s;
    cin >> s;
    cout << int(f(s,0,0));
}