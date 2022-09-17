#include <bits/stdc++.h>
#define f(x) 4*sin(x)*exp(-1*x)-1
using namespace std;

int main()
{
    float a, b, x, fa, fb, f, error;
    int step = 1;
    cout << setprecision(3) << fixed;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of Tollerance: ";
    cin >> error;

    if (fa * fb > 0.0)
    {
        cout << "Incorrect Initial Guesses." << endl;
        return 0;
    }
    cout << "Step      "
         << "a               "
         << "b               "
         << "x               "
         << "f(x)" << endl
         << endl;
    do
    {
       fa=f(a);
        fb=f(b);
        x = ((fb*a)-(fa*b)) / (fb-fa);
        f = f(x);

        cout << step << "\t" << setw(10) << a << "\t" << setw(10) << b << "\t" << setw(10) << x << "\t" << setw(10) << f(x) << endl;

        if (fa * f < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
        step = step + 1;
    } while (fabs(f) > error);

    cout << endl
         << "Root is: " << x << endl;


    return 0;
}