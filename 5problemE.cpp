#include <iostream>

using namespace std;

int main(){
   string n;
   int sum=0,cnt=0;
   cin >> n;
   for(int i=0;i<=n.size();++i){
       if(i%2 == 0){
      sum = sum + n[i];
       }
      else if(i%2 == 1){
           cnt = cnt + n[i];
       }
   }
   if(sum == cnt)
   cout << "YES";
   else
   cout << "NO";
   
return 0;    
}