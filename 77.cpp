#include <iostream>

using namespace std;

int main(){
    int x, sum=0;
    cin >> x;
    for(int i=0; i<x;++i){
    int m;
    cin >> m;
   if (m%10 == 7){
       sum =sum + 1;
   }
}
cout << sum << endl;
return 0;
    
}