#include <iostream>
using namespace std;

class Employee
{

private:
    int a, b, c;

public:
    int d, e;

    void setData(int a5, int b6, int c7);
    void getData()
    {

        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void Employee ::setData(int a5, int b6, int c7)
{
    a = a5;
    b = b6;
    c = c7;
}
int main()
{

    Employee zeeshan;
    zeeshan.d = 55;
    zeeshan.e = 66;
    zeeshan.setData(5, 6, 7);
    zeeshan.getData();

    return 0;
}