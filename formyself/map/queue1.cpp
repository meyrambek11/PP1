#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> q;

    q.push(1);
    q.push(10);
    q.push(111);
    q.push(10);

    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();

    }
    return 0;
}