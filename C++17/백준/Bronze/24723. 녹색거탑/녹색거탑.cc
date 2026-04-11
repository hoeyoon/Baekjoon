#include <iostream>
using namespace std;

int main(){
    int x;
    int result = 1;
    cin >> x;
    for(int i = 0; i < x; i++){
        result <<= 1;
    }
    cout << result << endl;
    return 0;
}