#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string getData;
    int dataLength;
    string getName;

public:
    void read_binary(void);
    void is_binary(void);
    void one_compliment(void);
    void display(void);
};

void binary::read_binary()
{
    cout<<"Enter a binary number"<<endl;
    cin>>getData;
}
    
void binary::is_binary(void)
{
    dataLength = getData.length();
    for (int i = 0; i < dataLength; i++)
    {
        if (getData.at(i) != '0' && getData.at(i) != '1')
        {
            cout << "invald binary input" << endl;
            exit(0);
        }
    }
}

void binary::one_compliment(void)
{
    is_binary();
    cout<<"Running one's compliment...."<<endl;
    for (int i = 0; i < dataLength; i++)
    {
        if (getData.at(i) == '0')
        {
            getData.at(i) = '1';
        }
        else
            getData.at(i) = '0';
    }
    display();
}

void binary::display()
{
    cout<<"Displaying binary now......"<<endl;
    cout<<getData<<endl;
    cout<<"Length of binary is "<<dataLength<<endl;
}

int main()
{
    binary binary1;
    binary1.read_binary();
    binary1.one_compliment();
    return 0;
}
