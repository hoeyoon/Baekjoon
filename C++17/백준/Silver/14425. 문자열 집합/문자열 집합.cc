#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, count = 0;
    cin >> n >> m;

    string *s = new string[n];

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    sort(s, s + n);

    string temp;

    for(int i = 0; i < m; i++){
        cin >> temp;
        if(binary_search(s, s + n, temp)){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}