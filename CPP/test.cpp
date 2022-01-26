#include <iostream>
#include <string>
using namespace std;
// // variable
// /*
// int
// float
// double
// bool
// */
// //"::" scope resolution

// // namespace khunti
// // {
// //     void hemlo()
// //     {
// //         cout << "hemlo from khunti" << endl;
// //     }
// // }

// // namespace sam
// // {
// //     void hemlo()
// //     {
// //         cout << "hemlo from sam" << endl;
// //     }
// // }

// int ggwp = 8;
// inline void add(int a = 6, int b = 6)
// {
//     int ggwp = 80;
//     cout << ++ggwp << endl;
// }

struct otaku
{
    int age; //32 bits
    float weight;//32
    char first_char;//1
    string hobby;//64
};
int main()
{
    // khunti::hemlo();
    // sam::hemlo();
    //add();
    //cout << ggwp;
    otaku khunti;
    otaku sam;
    khunti.age = 20;
    khunti.weight = 100.00f;
    khunti.first_char = 'k';
    khunti.hobby = "hentai";
    cout<<khunti.hobby;
    return 0;
}
