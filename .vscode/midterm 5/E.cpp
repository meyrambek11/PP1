#include <iostream>
using namespace std;
int main(){
   //freopen("output.txt","w",stdout);
    int x,y;
    cin >> x >> y;
    int a[x][y];
    for(int i=0;i<x/2;i++){
        for(int j=0;j<y/2;j++){
           cout << "1 ";
        }  
        for(int f = y/2;f<y;f++){
            cout << "0 ";
        }
        cout << endl;
         
    }
    for(int i=x/2;i<x;i++){
        for(int j=0;j<y/2;j++) {
            cout << "2 ";
        }
        for(int c = y/2;c<y;c++){
            cout << "3 ";
        }  
        cout << endl;  
    }    
    cout << "\n";
 
    return 0;
}