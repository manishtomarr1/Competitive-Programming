// meaning of this is to find all the prime number in the array
// we go upto size/2 because all the sizes is cover upto size/2 like size of vector is 20 we go upto 10
// because 3 is prime so 6,9,12,15,18 is not prime like this.

#include <iostream>
#include <vector>
using namespace std;

const int Nmax = 10001;

bool isPrime[Nmax];

void checkList(int n)
{
    for (auto &i : isPrime)
    {
        i = true;
    }

    for (int i = 2; i < n / 2; i++) // size/2 because all the index is cover from size/2
    {
        if (isPrime[i] == true)
        {

            for (int j = i * 2; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{

    checkList(17);
    for (int i = 2; i < 17; i++)
    {
        if (isPrime[i] == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}