#include <iostream>
using namespace std;
int x[5000], ok = 1, k, n;
void in()
{
    if(x[1] != n)
    {
        cout << "(";
        for (int i = 1; i <= k; i++)
        {
            if (i != k)
                cout << x[i] << " ";
            else
                cout << x[i];
        }
        cout << ")" << endl;
    }
}
void Next_Division()
{
    int i = k, j, R, S, D;
    while (i > 0 && x[i] == 1)
        i--;
    if (i > 0)
    {
        x[i] -= 1;
        D = k - i + 1;
        R = D / x[i];
        S = D % x[i];
        k = i;
        if (R > 0)
        {
            for (j = i + 1; j <= i + R; j++)
                x[j] = x[i];
            k += R;
        }
        if (S > 0)
        {
            k = k + 1;
            x[k] = S;
        }
    }
    else
        ok = 0;
}
int main()
{
    n = 0, ok = 1;
    k = 1;
    cin >> n;
    x[k] = n;
    while (ok == 1)
    {
        in();
        Next_Division();
    }
    cout << endl;
    return 0;
}

