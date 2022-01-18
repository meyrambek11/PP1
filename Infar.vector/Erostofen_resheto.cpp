#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool prime[1000000];
int main(){

    vector<int> v;
    for(int i=2; i<1000000; i++){
        prime[i] = true;
    }

    int n, a;
    cin >> n;
    for(int i = 2;i <= n; i++){
        if(prime[i] == true)
        {

            for(int j = i*i; j <= n; j+=i) {
                prime[j] = false;
            }
            v.push_back(i);
        }
    }

    for(int j=0;j<v.size();j++){
        cout << v[j] << " ";
        
    }
    

}