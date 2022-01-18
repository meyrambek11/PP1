#include <iostream>
using namespace std;

int f(string s, int i, int sum){
    if(i == s.size()) return sum;
    if((s[i]%10)%2 == 0){
        sum = sum + 1;
    }
    return f(s,i+1,sum);
}
 int main(){
     string s;
     int sum = 0;
     cin >> s;
     cout << int(f(s,0,sum));
    
     return 0;
 }