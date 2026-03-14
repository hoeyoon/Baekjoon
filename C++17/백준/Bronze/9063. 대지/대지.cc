#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x_max = -100000;
    int y_max = -100000;
    int x_min = 100000;
    int y_min = 100000;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(x < x_min){
            x_min = x;
        }
        if(x > x_max){
            x_max = x;
        }
        if(y < y_min){
            y_min = y;
        }
        if(y > y_max){
            y_max = y;
        }
    }
    cout << (x_max -x_min) * (y_max - y_min) << endl;
    return 0;
}