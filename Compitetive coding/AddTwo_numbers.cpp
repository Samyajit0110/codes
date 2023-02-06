/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <iostream>
#include <list>
#include <iterator>
using namespace std;
void printlist(list<int> nlist)
{
    list<int>::iterator iter;
    for (iter = nlist.begin(); iter != nlist.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << " " << endl;
}

int sum(int a, int b)
{
    int carry_sum = a + b;
    if (carry_sum > 9)
    {
        carry_sum -= 10;
    }
    return carry_sum;
}
int main()
{
    list<int> list1;
    list<int> list2;
    int i;
    for (i = 1; i <= 3; i++) // 123
    {
        list1.push_back(i);
    }
    for (i = 2; i <= 4; i++) // 234
    {
        list1.push_back(i);
    }
    list<int> sumlist;
    int carry = 0, sum = 0;
    list<int>::iterator iter1;
    list<int>::iterator iter2;
    for (iter1 = list1.begin(), iter2 = list2.begin(); iter1 != list1.end(), iter2 != list2.end(); iter1++, iter2++)
    {
        sum = *iter1 + *iter2 + carry;
        carry = 0;
        if ((*iter1 + *iter2 + carry) > 9)
        {
            carry = 1;
            sumlist.push_back(sum-10);
        }
        printlist(sumlist);

        return 0;
    }
}
