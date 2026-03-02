/*
백준 8393번 합
C++
https://www.acmicpc.net/problem/8393

문제
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

출력
1부터 n까지 합을 출력한다.

예제 입력 1 
3
예제 출력 1 
6
*/

/* #include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        sum += i + 1;
    }

    cout << sum;
    return 0;
} */

#include <iostream>
using namespace std;

class Sum{
    private:
        int num;

    public:
        Sum(){}
        Sum(int n) : num(n){}

        int GetSum(){
            int sum = 0;
            for(int i = 0; i < num; i++){
                sum += i + 1;
            }
            return sum;
        }

        friend istream &operator>>(istream &is, Sum &ref){
            is >> ref.num;
            return is;
        }

        friend ostream &operator<<(ostream &os, Sum &ref){
            os << ref.GetSum() << endl;
            return os;
        }
};

int main(){
    Sum n;
    cin >> n;
    cout << n;
    return 0;
}