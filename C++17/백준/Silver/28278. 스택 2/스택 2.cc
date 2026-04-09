#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    stack<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        switch(x){
            case 1:
                int a;
                cin >> a;
                s.push(a);
                break;

            case 2:
                if(!s.empty()){
                    cout << s.top() << "\n";
                    s.pop();
                }
                else{
                    cout << "-1\n"; 
                }
                break;

            case 3:
                cout << s.size() << "\n";
                break;

            case 4:
                if(s.empty()){
                    cout << "1\n";
                }
                else{
                    cout << "0\n";
                }
                break;

            case 5:
                if(!s.empty()){
                    cout << s.top() << "\n";
                }
                else{
                    cout << "-1\n";
                }
                break;
        }
    }
    return 0;
}