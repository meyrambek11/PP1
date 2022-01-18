#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    string k;
    int a;
    int b;
    cin >> s >> a >> b;
    for(int i=0;i<=s.size();++i){
    k = s.substr(a,b+1-a);
    }
    cout << k << endl;
    return 0;
    
}
