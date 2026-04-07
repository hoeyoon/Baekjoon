#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];    
    }
    sort(arr, arr + n);

    int m;
    cin >> m;
    int temp;
    for(int i = 0; i < m; i++){
        cin >> temp;
        if(binary_search(arr, arr + n, temp)){
            cout << '1' << '\n';
        }
        else{
            cout << '0' << '\n';
        }
    }
    return 0;
}