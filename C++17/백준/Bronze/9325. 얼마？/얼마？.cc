#include <iostream>
using namespace std;

class Option{
    private:
        int price;
        int count;

    public:
        Option(int p = 0, int c = 0) : price(p), count(c){}

        int getTotalPrice() const{
            return price * count;
        }

        friend istream &operator>>(istream &is, Option &ref){
            is >> ref.count >> ref.price;
            return is;
        }
};

class Car{
    private:
        int price;

    public:
        Car(int p = 0) : price(p){}

        Car &operator+=(const Option &ref){
            price += ref.getTotalPrice();
            return *this;
        }

        friend istream &operator>>(istream &is, Car &ref){
            is >> ref.price;
            return is;
        }
        
        friend ostream &operator<<(ostream &os, const Car &ref){
            os << ref.price << endl;
            return os;
        }
};


int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        Car c;
        int n;
        cin >> c;
        cin >> n;
        for(int j = 0; j < n; j++){
            Option o;
            cin >> o;
            c += o;
        }
        cout << c;
    }
    return 0;
}