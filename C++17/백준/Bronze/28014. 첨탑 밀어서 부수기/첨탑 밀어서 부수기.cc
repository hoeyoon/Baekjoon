#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);   
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int *r1 = &arr[0];
    int *r2 = &arr[1];

    
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
        if(*r1 > *r2){
            cnt++;
        }
        
        r1++;
        r2++;
    }
    cout << n - cnt<< endl;
    return 0;
}