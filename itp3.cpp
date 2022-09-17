#include<bits/stdc++.h>
#define f(x) 2 * x - 2 * (sin(x)) - 1
#define g(x) (1 + 2 * sin(x)) / 2
using namespace std;
int main()
{
    int step = 1, N;
    float x0, x1, e;
    cout << setprecision(6) << fixed;
    cout << "Enter initial guess: ";
    cin >> x0;
    cout << "Enter tolerable error: ";
    cin >> e;
    cout << endl;
    do
    {
        x1 = g(x0);
        cout << "Step " << step << ":\t x1 = " << setw(10) << x1 << endl;
        x0 = x1;
        step = step + 1;

    } while (fabs(f(x1)) > e);

    cout << endl
         << "Root is " << x1;

    return (0);
}