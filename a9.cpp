#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int sum = 0;
    string s;
    cin >> s;
    string t;
    bool a = true;
    t = "375";
for(int i=0;i<s.size();i++){
 if(s.find(t) != string::npos){
     a=true;
 } 
}
if(a == true){
    sum = sum + 1;
}
cout << sum;
return 0;   



}