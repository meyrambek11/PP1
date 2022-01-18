#include <iostream>
#include <algorithm>
using namespace std;

bool real(string n, int m){
    int sum = 0;
    for(int i=0;i<=n.size();++i){
        if(n[i] >= '0' && n[i]<= '9'){
            sum = sum + 1;
            if(sum == m){
                return true;
            }
        }
    }
return false;
}
int main(){
    string s;
    int m;
    cin >>s >> m;
    if(real(s, m) == true){
        cout << "YES";
    }
    else
    cout << "NO";
    return 0;
}