#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string chess[50];

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
};

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
};

int countPaint(int x, int y){
    int count1 = 0;
    int count2 = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(chess[x + i][y + j] != WB[i][j]){
                count1++;
            }
            if(chess[x + i][y + j] != BW[i][j]){
                count2++;
            }
        }
    }
    return min(count1, count2);
}

int main(){
    int n, m;
    cin >> n >> m;
    cin.ignore();

    for(int i = 0; i < n; i++){
        getline(cin, chess[i]);
    }
    
    int count = 64;
    for(int i = 0; i <= n - 8; i++){
        for(int j = 0; j <= m - 8; j++){
            count = min(count, countPaint(i, j));
        }
    }
    cout << count << endl;
    return 0;
}