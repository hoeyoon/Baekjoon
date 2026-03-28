#include <iostream>
using namespace std;

int main(){
    int a1, a0, c, n;
    cin >> a1 >> a0 >> c >> n;
    int fn, cgn;
    fn = a1 * n + a0;
    cgn = c * n;
    if(fn <= cgn && a1 <= c){
        cout << true << endl;
    }
    else{
        cout << false << endl;
    }
    return 0;
}