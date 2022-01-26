#include <iostream>
#include <string>
using namespace std;

namespace my_test
{
    void print(string str)
    {
        cout << "hemlo " << str<<endl;
    }
}
namespace my_test_2
{
    void print(string str)
    {
        cout << "humle " << str<<endl;
    }
}
int main()
{   
    string name = "humle";
    my_test::print(name);
    my_test_2::print(name);
    return 0;
}
