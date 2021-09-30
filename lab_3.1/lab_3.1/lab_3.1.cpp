#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;

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

    cout << y << endl;

    return 0;
}
