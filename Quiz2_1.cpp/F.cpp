#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
     freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int mx = 0;
    int n, x;
    string s, ans;
    cin>>n;
    getline(cin, s);
    
    for(int i=0; i<n; i++){
        getline(cin, s);

        string c;
        for(int j = s.size() - 1; j >=0; j--){
            if(s[j] == ' ')break;

            c = s[j] + c;
        }

        stringstream ss;

        ss<<c;
        ss>>x;

        if(x >= mx)
        {
            mx = x;
            ans = s;
        }
    }

    cout << ans;
}