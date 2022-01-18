#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<string> v;
   v.push_back("JANUARY");
   v.push_back("FEBRUARY");
   v.push_back("MARCH");
   v.push_back("APRIL");
   v.push_back("MAY");
   v.push_back("JUNE");
   v.push_back("JULE");
   v.push_back("AUGUST");
   v.push_back("SEPTEMBER");
   v.push_back("OCTOBER");
   v.push_back("NOVEMBER");
   v.push_back("DECEMBER");
  string s;
  int n;
  cin >> s >> n;
  for(int i=0;i<v.size();i++){
    if(v[i] == s){
      cout << v[(i+n)%12] << endl;
    }
  }
}