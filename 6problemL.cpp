#include <iostream>
#include <algorithm>
using namespace std;
void f(string s, int x){
    int sum = 0,cnt = 0;
    for(int i=0;i<=s.size();++i){
        if(s[i]>='0' && s[i] <= '9'){
            if(s[i] == s[i-1] - 1){
                sum = sum + 1;
            }
        }
    }
    if(sum <= x){
        cout<< "Valid";
        
    }
    
    else 
    cout << "Not Valid";
   
}
int main(){
    string s;
    int x;
    cin >> s >> x;
    f(s,x);
    return 0;
}