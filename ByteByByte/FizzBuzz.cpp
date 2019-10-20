#include <iostream>
using namespace std;

// Output numbers from 1 to x. If the number is divisible by 3,
// replace it with “Fizz”. If it is divisible by 5, replace it
// with “Buzz”. If it is divisible by 3 and 5 replace it with
// “FizzBuzz”.

void FizzBuzz(int x)
{
    for (int i = 1; i <= x; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FIZZBUZZ" << endl;
        else if (i % 3 == 0)
            cout << "FIZZ" << endl;
        else if (i % 5 == 0)
            cout << "BUZZ" << endl;
        else
            cout << i << endl;
    }
}

int main()
{
    FizzBuzz(16);
    return 0;
}