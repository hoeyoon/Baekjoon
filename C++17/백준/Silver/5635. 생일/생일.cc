#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        int day, month, year;
        string name;

    public:
        Person(){}
        
        Person(int d, int m, int y, string n){
            day = d;
            month = m;
            year = y;
            name = n;
        }

        string getName(){
            return name;
        }

        bool operator<(const Person &other) const{
            if(year != other.year){
                return year > other.year;
            }
            if(month != other.month){
                return month > other.month;
            }
            return day > other.day;

        }
        
        void Input(){
            cin >> name >> day >> month >> year;
        }

        void ShowPersonInfo(){
            cout << name << " " << day << " " << month << " " << year << endl;
        }

        ~Person(){}

};

int main(){
    int n;
    cin >> n;
    Person p[n];
    
    for(int i = 0; i < n; i++){
        p[i].Input();
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(p[i] < p[j]){
                Person temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    cout << p[0].getName() << endl;
    cout << p[n - 1].getName() << endl;
    return 0;
}