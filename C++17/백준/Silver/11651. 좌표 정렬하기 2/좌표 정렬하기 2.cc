#include <iostream>
#include <algorithm>
using namespace std;

class Point{
    private:
        int x, y;

    public:
        Point();
        Point(int a, int b);
        void set();
        int getX() const;
        int getY() const;
        void printInfo();
};

Point::Point() : x(0), y(0){}

Point::Point(int a, int b) : x(a), y(b){}

void Point::set(){
    cin >> x >> y;
}

int Point::getX() const{
    return x;
}

int Point::getY() const{
    return y;
}

void Point::printInfo(){
    cout << x << " " << y << '\n';
}

bool compare(const Point &a, const Point &b){
    if(a.getY() == b.getY()){
        return a.getX() < b.getX();
    }
    return a.getY() < b.getY();
}

int main(){
    int n;
    cin >> n;

    Point *p = new Point[n];
    for(int i = 0; i < n; i++){
        p[i].set();
    }

    sort(p, p + n, compare);
    
    for(int i = 0; i < n; i++){
        p[i].printInfo();
    }
    delete []p;
    return 0;
}