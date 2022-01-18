#include <iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    if(m>=1 && m<=9){
        if(m%2 == 0){
            cout << "Chetnoe odnoznacnoe chislo";
        }
        else if(m%2 == 1){
            cout << "Nechetnoe odnoznacnoe chislo";
        }
    }
    else if(m>=10 && m<=99){
        if(m%2 == 0){
            cout << "Chetnoe dvuznachnoe chislo";
        }
        else if(m%2 == 0){
            cout << "Nechetnoe dvuznachnoe chislo";   
        }
    }
    else if(m>=100 && m<=999){
        if(m%2 == 0){
            cout << "Chetnoe trehznachnoe chislo";
        }
        else if(m%2 == 1){
            cout << "Nechetnoe trehznachnoe chislo";
        }
    }
    return 0;
}