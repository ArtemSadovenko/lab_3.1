#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double y1;

    cout << "x = "; cin >> x;

    if (x <= -1) {
        y = 13.5 - (2 * x) - exp(0.4+x);
    }
     else if (x > -1 && x < 1) {
        y = 13.5 - (2 * x) - 1 - pow((sin(x)), 2);
    }
        else if (x >= 1) {
        y = 13.5 - (2 * x) - ((cos(x))/(1 + pow((sin(x)), 2)));
    }

    if (x <= -1)
        y1 = 13.5 - (2 * x) - exp(0.4 + x);
    if (x > -1 && x < 1)
        y1 = 13.5 - (2 * x) - 1 - pow((sin(x)), 2);
    if (x >= 1)
        y1 = 13.5 - (2 * x) - ((cos(x)) / (1 + pow((sin(x)), 2)));


    cout << y << endl;
    cout << y1 << endl;

    return 0;
}
