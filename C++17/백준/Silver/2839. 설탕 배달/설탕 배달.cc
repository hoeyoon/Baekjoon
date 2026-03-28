#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    bool chk = false;
    while(n >= 0){
        if(n % 5 == 0){
            count += n / 5;
            chk = true;
            break;
        }
        n -= 3;
        count++;
    }

    if(chk == false){
        cout << -1 << endl;
    }
    else{
        cout << count << endl;
    }
    return 0;
}