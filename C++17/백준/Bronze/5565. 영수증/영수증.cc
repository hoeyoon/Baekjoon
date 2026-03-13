#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[9];

    cin >> n;

    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        n -= arr[i];
    }
    cout << n << endl;
    return 0;
}