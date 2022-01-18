#include <iostream>
using namespace std;
bool real(string n){
    int sum =0;
    for(int i=0;i<=n.size();++i){
        if(n[i]>='0' && n[i]<='9'){
         if(n[i] == '3' || n[i] == '1' || n[i] == '5' || n[i] == '9' || n[i] == '7' ){
            return true;}
        }
    }
    return false;
}
int main(){
    string n;
    cin >> n;
    if(real(n) == false){
        cout << "Valid";
    }
    else {
    cout << "Not valid";
    }
    return 0;
}