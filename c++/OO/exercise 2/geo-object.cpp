#include <iostream>
using namespace std;

class GeometricShape2D {
    private:
    double area;

    public:
    
    GeometricShape2D(double area) : area(area) {}
    
    double getArea() {
        cout << "função de forma geométrica sendo chamada" << endl;
        return area;
    }
};

class Polygon : public GeometricShape2D {
    private:
        int sides_numbers;

    public:
    Polygon(double area, int sides_numbers) : sides_numbers(sides_numbers), GeometricShape2D(area) {}

    int getSidesNumber () {
        return sides_numbers;
    }

};

int main () {
    GeometricShape2D g(10);
    Polygon p(5, 50);

    cout << g.getArea() << endl;
    cout << p.getSidesNumber() << endl;

    return 0;
}