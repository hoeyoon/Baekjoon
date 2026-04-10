#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int main(){
    while(true){
        string str;
        stack<char> s;
        bool b = 0;
        
        getline(cin, str);
        if(str == "."){
            break;
        }
        for(int i = 0; i < str.length(); i++){
            char c = str[i];
            if(c == '(' || c == '['){
                s.push(c);
            }
            else if(c == ')'){
                if(!s.empty() && s.top() == '('){
                    s.pop();
                }
                else{
                    b = 1;
                    break;
                }
            }
            else if(c == ']'){
                if(!s.empty() && s.top() == '['){
                    s.pop();
                }
                else{
                    b = 1;
                    break;
                }
            }
        }
        if(b == 0 && s.empty()){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;
}