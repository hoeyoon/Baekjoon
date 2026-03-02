/*
백준 2609번 최대공약수와 최소공배수
C++
https://www.acmicpc.net/problem/2609

문제
두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에는 두 개의 자연수가 주어진다. 이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.

출력
첫째 줄에는 입력으로 주어진 두 수의 최대공약수를, 둘째 줄에는 입력으로 주어진 두 수의 최소 공배수를 출력한다.

예제 입력 1 
24 18
예제 출력 1 
6
72
*/

#include <iostream>
using namespace std;

class GcdLcm{
    private:
        int n1, n2;

    public:
        GcdLcm(){}
        GcdLcm(int a, int b) : n1(a), n2(b){}

        int GetGcd(){
            int a = n1;
            int b = n2;
            while(b > 0){
                int temp = a % b;
                a = b;
                b = temp;
            }
            return a;
        }

        int GetLcm(){
            return n1 * n2 / GetGcd();
        }

        friend istream &operator>>(istream &is, GcdLcm &ref){
            is >> ref.n1 >> ref.n2;
            return is;
        }

        friend ostream &operator<<(ostream &os, GcdLcm &ref){
            os << ref.GetGcd() << endl << ref.GetLcm() << endl;
            return os;
        }
};

int main(){
    GcdLcm n;
    cin >> n;
    cout << n;
    return 0;
}