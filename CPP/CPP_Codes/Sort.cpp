#include <iostream>
#include <vector>
using namespace std;

class Sort
{
public:
    vector<int> vector_1;
    int length, counter;
    Sort()
    {
        length = 0;
        counter = 0;
    }
    void get_Input();
    void selection_Sort()
    {
        int i, j;
        for (i = 0; i < length; i++)
        {
            for (j = 0; j < length - 1; j++)
            {
            }
        }
    }
    void bubble_Sort();
    void quick_Sort();
    void merge_Sort();
    void print_Vector()
    {
        counter = 0;
        while (counter < length)
        {
            cout << vector_1[counter] << " ";
            counter++;
        }
        cout << endl;
    }
};

void Sort::get_Input()
{
    cout << "Enter the number of elements you wish to enter" << endl;
    cin >> length;
    while (counter < length)
    {
        cin >> vector_1[counter];
        counter++;
    }
}

int main()
{
    Sort sorting_0;
    char choice;
    do
    {
        cout << "Enter choice\np for printing vector\n0 for exiting the program\n"
             << "s for selection sort\nb for bubble sort\n " << endl;
        cin >> choice;
        switch (choice)
        {
        case 's':
            sorting_0.selection_Sort();
        case 'p':
            sorting_0.print_Vector();
            break;
        case '0':
            cout << "----thank you for using----" << endl;
            break;
        }
    } while (choice != '0');
    return 0;
}