#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        stack<char> s;
        string str;
        string answer = "YES";
        cin >> str;
        int len = str.length();
        for(int j = 0; j < len; j++){
            if(str[j] == '('){
                s.push(str[j]);
            }
            else if(!s.empty() && str[j] == ')' && s.top() == '('){
                s.pop();
            }
            else{
                answer = "NO";
                break;
            }
        }
        if(!s.empty()){
            answer = "NO";
        }
        cout << answer << endl;
    }
    return 0;
}