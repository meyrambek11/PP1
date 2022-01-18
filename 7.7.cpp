#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    
    getline(cin,s);
    
    for(int i=1;i<=s.size();++i){
        for(int j=0;j<i;++j){
        cout << s[i];
        }
        cout << endl;
    }
    return 0;

}