#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct person
{
    string name;
    int id;
} person_1;

int main()
{
    person_1.name = "hello bro";
    person_1.id = 8;
    ofstream out_to_file("file.txt");
    out_to_file << person_1.name;
    FILE *file = fopen("file.txt", "+a");
    // file = fwrite(&person_1,sizeof(person),1,&out_to_file);   //not working
    return 0;
}
