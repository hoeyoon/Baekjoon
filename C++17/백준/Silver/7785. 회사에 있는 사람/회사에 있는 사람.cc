#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    set<string> s;
    string a, b;

    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(b == "enter"){
            s.insert(a);
        }
        else{
            s.erase(a);
        }
    }

    for(auto it = s.rbegin(); it != s.rend(); ++it) {
        cout << *it << "\n";
    }
    return 0;
}