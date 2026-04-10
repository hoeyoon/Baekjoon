#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> s;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;

        if(str == "push"){
            int n;
            cin >> n;
            s.push(n);
        }
        else if(str == "pop"){
            if(!s.empty()){
                cout << s.top() << endl;
                s.pop();
            }
            else{
                cout << -1 << endl;
            }
        }
        else if(str == "size"){
            cout << s.size() << endl;
        }
        else if(str == "empty"){
            if(s.empty()){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        else if(str == "top"){
            if(!s.empty()){
                cout << s.top() << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
    return 0;
}