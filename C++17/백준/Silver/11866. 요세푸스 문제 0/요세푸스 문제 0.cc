#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        q.push(i + 1);
    }

    cout << "<";
    while(q.size() != 0){
        for(int i = 0; i < k - 1; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if(q.size() != 1){
            cout << ", ";
        }
        q.pop();
    }
    cout << ">" << endl;
    return 0;
}