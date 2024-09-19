#include <iostream>

using namespace std;

class Complex
{

private:
    int real;

    int img;

public:
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    Complex operator+(const Complex &other)
    {

        return Complex(real + other.real, img + other.img);
    }

    Complex operator-(const Complex &other)
    {

        return Complex(real - other.real, img - other.img);
    }

    bool operator==(const Complex &other)
    {

        return (real == other.real && img == other.img);
    }

    void display() const
    {

        cout << real << " + " << img << "i" << endl;
    }
};

int main()

{

    Complex c1(3, 4);

    Complex c2(1, 2);

    Complex sum = c1 + c2;

    Complex difference = c1 - c2;

    cout << "c1: ";

    c1.display();

    cout << "c2: ";

    c2.display();

    cout << "Sum: ";

    sum.display();

    cout << "Difference: ";

    difference.display();

    if (c1 == c2)
    {

        cout << "c1 is equal to c2" << endl;
    }
    else
    {

        cout << "c1 is not equal to c2" << endl;
    }

    return 0;
}