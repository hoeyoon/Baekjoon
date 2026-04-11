#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string str;
    int n;
    stack<char> s;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        getline(cin, str);
        for(int j = 0; j < str.size() + 1; j++){
            if(str[j] == ' ' || str[j] == '\0'){
                while(!s.empty()){
                    cout << s.top();
                    s.pop();
                }
                cout << ' ';
            }
            else{
                s.push(str[j]);
            }
        }
        cout << endl;
    }
    return 0;
}