#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int func(int rez){
   int sum = 1;
   for(int i=1;i<=rez;i++){
      sum = sum*i;
   }
   return sum;
}

int main(){
   int s;
   cout << "Enter the number:" << endl;
   cin >> s;
   cout << "Factorial of " << s << " is: " << func(s);
   return 0;
}