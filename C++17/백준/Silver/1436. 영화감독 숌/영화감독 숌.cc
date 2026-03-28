#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int count = 0;
    int num = 666;
    
    cin >> n;
    
    while(true){
        string s = to_string(num);

        if(s.find("666") != string::npos){
            count++;
        }

        if(count == n){
            break;
        }
        num++;
    }
    cout << num << endl;
    return 0;
}