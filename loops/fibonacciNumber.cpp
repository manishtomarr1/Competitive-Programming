#include <iostream>
using namespace std;

int fib(int n)
{

    int prev = 0;    // f1
    int current = 1; // f2'
    int next =0;

    if (n == 0)
    {
        return n;
    }
    if (n == 1)
    {
        return 1;
    }

    if (n > 1)
    {
        for (int i = 2; i < n; i++)
        {
            next = prev+current;
            prev = current;
            current = next;

        }
    }

    return current;
}

int main () {

    cout << fib(6) << endl;

    return 0;
}