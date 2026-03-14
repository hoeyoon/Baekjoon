#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int triangle[3];
    while(true){
        for(int i = 0; i < 3; i++){
            cin >> triangle[i];
        }

        if(triangle[0] == 0 && triangle[1] == 0 && triangle[2] == 0){
            break;
        }

        sort(triangle, triangle + 3);
        
        if(triangle[2] < triangle[0] + triangle[1]){
            if(triangle[0] == triangle[1] && triangle[1] == triangle[2]){
                cout << "Equilateral" << endl;
            }
            else if(triangle[0] == triangle[1] || triangle[1] == triangle[2] || triangle[0] == triangle[2]){
                cout << "Isosceles" << endl;
            }
            else{
                cout << "Scalene" << endl;
            }
        }
        else{
            cout << "Invalid" << endl;
        }
    }
    return 0;
}