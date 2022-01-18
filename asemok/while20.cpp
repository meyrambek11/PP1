#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    cin >> x >> y;
    int d;
    while(true){
        d=x%y;
        x/=y; 
        cout << d;  
    }
    
return 0;
}