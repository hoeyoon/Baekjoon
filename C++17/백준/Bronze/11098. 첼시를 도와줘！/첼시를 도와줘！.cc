#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, p, c;
    int max = 0;
    string name;
    string max_name;

    cin >> n;

    for(int i = 0; i < n; i++){
        max = 0;
        cin >> p;
        for(int j = 0; j < p; j++){
            cin >> c >> name;
            if(c > max){
                max = c;
                max_name = name;
            }
        }
        cout << max_name << endl;
    }
    return 0;
}