// method 1 - bruit force approach time complexity O(n)

// method 2 - if we have have the number n = a * b,
//                                a belongs to (1, n - 1] and b is lesser then the number 'n' that means the number is not prime
//                                means 14 = 2*7 , means 14 is not prime , 3= 1*3, 3 is prime
// here n is the number of which we check it is prime or not
// n= a*b , a belongs to [2,n-1]
//  b = n/a, a<= b
//  a.b >= a*a, a*b =n
//  a= squrt n
// time complexity = O(sqrt n)

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << boolalpha;
    cout << isPrime(7) << endl;

    return 0;
}