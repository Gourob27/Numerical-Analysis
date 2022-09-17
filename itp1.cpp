#include<bits/stdc++.h>
#define f(x) 1+(x*x)-(x*x*x)
#define g(x) cbrt(1+(x*x))
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
        cout << "Iteration-" << step << ":\t x1 = " << setw(10) << x1 << endl;
        step = step + 1;

        x0 = x1;

    } while (fabs(f(x1)) > e);

    cout << endl
         << "Root is " << x1;

    return (0);
}