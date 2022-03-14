#include <iostream>
using namespace std;

// int to_binary(int n)
// {
//     static int counter = 0;
//     static int binary[20];
//     if (n == 1)
//     {
//         return 1;
//     }
//     int digit = to_binary(n % 2);
// }
// int main()
// {

//     return 0;
// }

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << argv[0];
    }
    else
    {
        for (int i = 0; i < argc; i++)
        {
            cout << argv[i] << endl;
        }
    }
}
