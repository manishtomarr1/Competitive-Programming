#include <iostream>
#include <vector>
using namespace std;
vector<int> factor;

void prime(int &num)
{
    int init = 2;

    while (num > 1)
    {
        while (num % init == 0)
        {
            num /= init;
            factor.push_back(init);
        }

               init++;
    }
}

int main()
{
    int num = 6;
    prime(num);

    for (auto &i : factor)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}