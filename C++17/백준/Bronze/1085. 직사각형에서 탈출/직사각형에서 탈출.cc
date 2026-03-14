#include <iostream>
using namespace std;

int main(){
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int min = 1000;

    if(min > x){
        min = x;
    }
    if(min > y){
        min = y;
    }
    if(min > w - x){
        min = w - x;
    }
    if(min > h - y){
        min = h - y;
    }
    cout << min << endl;
    return 0;
}