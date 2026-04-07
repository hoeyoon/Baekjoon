#include <iostream>
using namespace std;

typedef struct{
    int len;
    int weight;
} W;

int main(){
    int n;
    cin >> n;
    int cnt = 1;
    
    W w[n];
    for(int i = 0; i < n; i++){
        cin >> w[i].len >> w[i].weight;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(w[i].len < w[j].len && w[i].weight < w[j].weight){
                cnt++;
            }
        }
        cout << cnt << ' ';
        cnt = 1;
    }
    return 0;
}