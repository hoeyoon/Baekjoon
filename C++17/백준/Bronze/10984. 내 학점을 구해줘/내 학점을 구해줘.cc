#include <iostream>
using namespace std;

class Gpa{
    private:
        int credit;
        double grade;

    public:
        Gpa(){}
        Gpa(int c, double g) : credit(c), grade(g){}

        Gpa &operator+=(Gpa &ref){
            this->credit += ref.credit;
            this->grade += ref.grade * ref.credit;
            return *this;
        }

        friend istream &operator>>(istream &is, Gpa &ref){
            is >> ref.credit >> ref.grade;
            return is;
        }

        void ShowGpaInfo(){
            printf("%d %.1f\n", credit, grade / credit);
        }

        ~Gpa(){}
};

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        Gpa result(0, 0.0);
        int n;
        cin >> n;
        for(int j = 0; j < n; j++){
            Gpa temp;
            cin >> temp;
            result += temp;
        }
        result.ShowGpaInfo();
    }
    return 0;
}