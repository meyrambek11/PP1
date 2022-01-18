#include <iostream>

using namespace std;

int main (){
    int x;
    cin >> x;
  
if  (x%4 == 0 && x >= 1 && x <=30000 ) {
    cout << "YES" << endl;
}
else if (x%400 == 0 && x >= 1 && x <=30000){
    cout << "NO" << endl;
}
else if (x%100 != 0 && x >= 1 && x <=30000){
    cout << "NO" << endl;
}
return 0;

}