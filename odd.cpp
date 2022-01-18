#include <iostream>

using namespace std;

int main(){
    int m;
    cin >> m;

    if (m == 0){
       cout << "None" << endl;
    }
    else if (m % 2 ==1){
       cout << "Odd" << endl;
    }
    
   else if (m % 2 == 0){
        cout << "Even" << endl;
    }
   
     return 0;   
}