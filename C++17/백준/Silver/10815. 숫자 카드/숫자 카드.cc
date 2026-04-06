#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, n;
    cin >> m;

    int *arr = new int[m];
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }

    sort(arr, arr + m);

    cin >> n;
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(binary_search(arr, arr + m, temp)){
            cout << true << " ";
        }
        else{
            cout << false << " ";
        }
    }
    delete []arr;
    return 0;
}