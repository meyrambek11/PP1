#include <iostream>
using namespace std;
string s;
void f(int l,int r){

    if(l==r)
    {
        cout << s[l];
        return;
    }
    if(l==r-1){
        cout << s[l] << s[r];
        return;
    }
    cout << s[l] << "(";
    f(l+1,r-1);
    cout << ")" << s[r];
    
}
int main(){
    cin >> s;
    f(0,s.size()-1);
}