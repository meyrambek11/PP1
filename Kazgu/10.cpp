#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    double D = (b*b - 4*a*c);
    if(D>0){
    double x1 = (-b + sqrt(D))/2*a;
    double x2 = (-b - sqrt(D))/2*a;
    cout << "x1 = " << x1 <<endl;
    cout << "x2 = " << x2 << endl;
    }
    else if(D == 0){
        double x1 = (-b + sqrt(D))/2*a;
        cout << "x = " << x1 << endl; 
    }
    else
    cout << "Kvadrattik tendeudin mani aniktalmaidi" << endl;
     
}