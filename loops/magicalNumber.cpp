#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric> //for accumulate
using namespace std;

int conversion(int n)
{

    string str = to_string(n);
    vector<int> vec;

    for (int i = 0; i < str.size(); i++)
    {
        // convert char to int
        // method1:-
        // char character = '5';          // Replace '5' with your character
        // std::string str(1, character); // Convert the character to a string
        // int number = std::stoi(str);

        // method2
        int number = str[i] - '0'; // convert char to int
        vec.push_back(number);
    }

    int sum = std::accumulate(vec.begin(), vec.end(), 0);

    return sum;
}

int conversion2(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10; // by doing so we are getting last digit of the number
        num = num / 10;  // by doing so we are removing last digit from the number
    }

    return sum;
}

int magicalNumber(int num)
{

    while (num >= 9)
    {
        num = conversion2(num);
    }

    return num;
}

int main()
{
    int num = 9754;
    cout << magicalNumber(num) << endl;
    return 0;
}