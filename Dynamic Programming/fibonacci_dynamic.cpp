#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int fibonacci[10];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }
    return fibonacci[n - 1];
}
int main()
{
    int result = fibonacci(8);
    cout << result << endl;
    return 0;
}