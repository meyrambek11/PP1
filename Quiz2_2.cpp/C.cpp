#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    set<string> m;
   
    string s;
   
   while(cin>>s){
       m.insert(s);
   }
   if(m.size() >= 7){
       cout << "Good" << endl;
   }
   else
   cout << "Not good" << endl;
    
}