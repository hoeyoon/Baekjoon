#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int line = 1;
    while(n - line > 0){
        n -= line;
        line++;
    }
    
    if(line % 2 == 0){
        cout << n << '/' << line - n + 1;
    }
    else{
        cout << line - n + 1<< '/' << n;
    }
    return 0;
}