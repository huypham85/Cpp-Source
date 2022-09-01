#include <bits/stdc++.h>

using namespace std;

// function to find smallest number k such that
// the product of digits of k is equal to n
long long int smallestNumber(int n){
    if (n >= 0 && n <= 9)
        return n;
    stack<int> digits;
    for (int i=9; i>=2 && n > 1; i--)
    {
        while (n % i == 0)
        {
            digits.push(i);
            n = n / i;
        }
    }
    
    if (n != 1)
        return -1;
    long long int k = 0;
    while (!digits.empty())
    {
        k = k*10 + digits.top();
        digits.pop();
    }
    return k;
}

// Driver program to test above
int main()
{
    int n = 10;
    cout << smallestNumber(n);
    return 0;
} 