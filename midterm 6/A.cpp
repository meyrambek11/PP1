#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<char> q;
	vector<char> v;
	string s;
	cin >> s;
	/*for(int i=0;i<c.size();i++){
		s.push_back(c[i]);
		v.push_back(c[i]);
	}*/
	for(int x=0;x<s.size();x++){
	  for(int i=0;i<s.size()-1;i++){
		for(int j=i+1;j<s.size();j++){
			if(s[i] == s[j]){
				s.erase(s.begin()+j);
			}
		}
	  }
	}
	for(int i=0;i<s.size();i++){
		cout << s[i];
	}
	return 0;
}