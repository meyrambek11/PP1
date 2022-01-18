#include <iostream>
using namespace std;
int main(){
    int x,sum = 0;
    cin >> x;
    int a[500500];
    for(int i=1;i<=x;i++){
        cin >> a[i];
    }
    int y;
    cin >> y;
    for(int i=1;i<=x;i++){
        if(a[i] >= y){
            sum = sum + 1;   
        }
        
    }
    cout << sum;
    
    return 0;
}