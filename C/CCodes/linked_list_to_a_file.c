// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// struct node
// {
//     char name[20];
//     int age;
//     float salary;
//     struct node *next;
// } * head, *tail;

// void add_nodes(char name[], int age, float salary)
// {
//     struct node *newNode = malloc(sizeof(struct node));
//     strcpy(newNode->name, name);
//     newNode->age = age;
//     newNode->salary = salary;
//     newNode->next = NULL;
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//     }
//     else
//     {
//         tail->next = newNode;
//         tail = newNode;
//     }
// }

// void print_node(struct node *n)
// {
//     while (n != NULL)
//     {
//         printf("%s -> %d -> %f\n", n->name, n->age, n->salary);
//         n = n->next;
//     }
// }

// void read_from_file()
// {
//     // printf("entering read_from_file\n");
//     FILE *file = fopen("stucture.txt", "r");
//     rewind(file);
//     ftell(file);
//     struct node *read_data;
//     fread(read_data, sizeof(struct node), 1, file);
//     printf("%s\n", read_data->name); // read_data->age, read_data->salary
//     fclose(file);
// }

// void write_to_file()
// {
//     char name[10];
//     int age;
//     float salary;
//     char choice;
//     FILE *file;
//     file = fopen("structure.txt", "a+");
//     do
//     {
//         printf("Enter name\n");
//         gets(name);
//         printf("Enter age and salary\n");
//         scanf("%d%f", &age, &salary);
//         add_nodes(name, age, salary);
//         fflush(stdin);
//         printf("Do you want to continue\n");
//         scanf("%c", &choice);
//         fflush(stdin);
//     } while (choice != 'n');
//     struct node *temporary;
//     temporary = head;
//     while (temporary != NULL)
//     {
//         fwrite(&temporary, sizeof(struct node), 1, file);
//         printf("Data regarding %s is written\n", temporary->name);
//         temporary = temporary->next;
//     }
//     fclose(file);
// }

// void main()
// {
//     write_to_file();
//     printf("data being read from the file.....\n");
//     read_from_file();
// }

// C program for reading
// struct from a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct person with 3 fields
struct node
{
    char name[20];
    int age;
    float salary;
    //struct node *next;
};

// Driver program
int main()
{
    FILE *infile;
    struct node input;

    // Open person.dat for reading
    infile = fopen("structure.dat", "r");
    if (infile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit(1);
    }

    // read file contents till end of file
    while (fread(&input, sizeof(struct node), 1, infile))
        printf("%s -> %d -> %f\n", input.age,
               input.name, input.salary);

    // close file
    fclose(infile);

    return 0;
}