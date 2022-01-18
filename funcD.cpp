#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
using namespace std;

int f(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; ++i){
        sum = sum + a[i];
    }
    return sum;
}
int main(){
     int n;
     cin >> n;
     int a[n];
     for(int i = 0; i < n; ++i){
         cin >> a[i];
    }
     cout << f(a, n);
    return 0;

}