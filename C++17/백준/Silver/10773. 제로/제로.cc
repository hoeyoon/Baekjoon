#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int answer = 0;
    int x;
    int k;
    int si;
    
    cin >> k;

    for(int i = 0; i < k; i++){
        cin >> x;
        if(x == 0){
            s.pop();
        }
        else{
            s.push(x);
        }
    }
    si = s.size();
    for(int i = 0; i < si; i++){
        answer += s.top();
        s.pop();
    }
    cout << answer << endl;
    return 0;
}