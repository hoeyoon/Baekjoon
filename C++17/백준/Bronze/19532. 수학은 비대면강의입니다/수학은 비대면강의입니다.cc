#include <iostream>
using namespace std;

int main(){
    int arr[6];
    for(int i = 0 ; i < 6; i++){
        cin >> arr[i];
    }
    int x = (arr[2] * arr[4] - arr[1] * arr[5]) / (arr[0] * arr[4] - arr[1] * arr[3]);
    int y = (arr[2] * arr[3] - arr[0] * arr[5]) / (arr[1] * arr[3] - arr[0] * arr[4]);
    cout << x << " " << y << endl;
    return 0;
}