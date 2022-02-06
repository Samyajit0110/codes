#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float total_percentage = 0.0f;
struct node
{
    struct node *next;
    int roll;
    char name[50];
    int math_marks;
    int physics_marks;
    int chemistry_marks;
    int english_marks;
    int computer_marks;
} * head, *tail, *previousNode, *nextNode, *tempNode;
void createNode(char getName[], int roll,int maths,int physics,int chemistry,int english,int computer)
{
    struct node *newNode = malloc(sizeof(struct node));
    strcpy(newNode->name, getName);
    newNode->roll = roll;
    newNode->math_marks = maths;
    newNode->physics_marks = physics;
    newNode->chemistry_marks = chemistry;
    newNode->english_marks = english;
    newNode->computer_marks = computer;

    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void insertInList(int position, int element)
{
    int index = 1;
    tempNode = malloc(sizeof(struct node));
    tempNode->roll = element;
    tempNode->next = NULL;
    if (position == 0 || position == 1) // insertion at head
    {
        tempNode->next = head;
        head = tempNode;
    }
    else
    {
        previousNode = head;
        while (index < position - 1) // till previous node
        {
            index++;
            previousNode = previousNode->next;
        }
        nextNode = previousNode->next;
        previousNode->next = tempNode;
        tempNode->next = nextNode;
    }
}

void deleteNode(struct node **head_ref, int key)
{
    struct node *tempNode = *head_ref;

    if (tempNode != NULL && tempNode->roll == key)
    {
        *head_ref = tempNode->next; // Changed head
        free(tempNode);             // free old head
        return;
    }
    while (tempNode != NULL && tempNode->roll != key)
    {
        previousNode = tempNode;
        tempNode = tempNode->next;
    }

    if (tempNode == NULL)
    {
        printf("Desired key not found\n");
        return;
    }
    previousNode->next = tempNode->next;
    free(tempNode); // Free memory
}

// void selectInList(int position)
// {
//     int counter = 1;
// }

void update(int key, int newEntry)
{
    int index;
    tempNode = head;
    while (tempNode != NULL)
    {
        if (tempNode->roll != key)
        {
            tempNode = tempNode->next;
        }
        else
        {
            tempNode->roll = newEntry;
            printf("Updated value to %d\n", newEntry);
            return;
        }
    }
    printf("Desired value not found\n");
    return;
}

void percentage(struct node *n)
{
    total_percentage = ((n->math_marks+n->chemistry_marks+n->physics_marks+n->english_marks+n->computer_marks)/500)*100;
}
 void report_card(struct node * n)
 {
     printf("The report card of the student is as follows: \n");
     printf("name \t%s\n",n->name);
     printf("roll no \t%d\n",n->roll);
     printf("physics \t%d\n",n->physics_marks);
     printf("chemistry \t%d\n",n->chemistry_marks);
     printf("maths \t%d\n",n->math_marks);
     printf("english \t%d\n",n->english_marks);
     printf("computer \t%d\n",n->computer_marks);
 }

void printList(struct node *n)
{
    while (n != NULL)
    {
        printf("%d and  %s\n", n->roll, n->name);
        n = n->next;
    }
    printf("\n");
}
void main()
{
    // head = malloc(sizeof(struct node));
    // example list start
    strcpy(head->name, "ram");
    head->roll = 56;
    head->math_marks = 88;
    head->chemistry_marks = 87;
    head->physics_marks = 89;
    head->english_marks = 78;
    head->computer_marks = 90;

    struct node *student_2 = malloc(sizeof(struct node));
    strcpy(student_2->name, "shyam");
    student_2->roll = 26;
    student_2->math_marks = 33;
    student_2->chemistry_marks = 97;
    student_2->physics_marks = 84;
    student_2->english_marks = 68;
    student_2->computer_marks = 98;

    struct node *student_3 = malloc(sizeof(struct node));
    strcpy(student_3->name, "hehe");
    student_3->roll = 54;
    student_3->math_marks = 85;
    student_3->chemistry_marks = 57;
    student_3->physics_marks = 89;
    student_3->english_marks = 88;
    student_3->computer_marks = 80;

    struct node *student_4 = malloc(sizeof(struct node));
    strcpy(student_4->name, "hehe");
    student_4->roll = 65;
    student_4->math_marks = 84;
    student_4->chemistry_marks = 27;
    student_4->physics_marks = 69;
    student_4->english_marks = 88;
    student_4->computer_marks = 60;
    // end of example list

    int choice;
    int positon, newElement, key, length;
    int maths,physics,chemistry,english,computer;
    char getName[50];
    do
    {
        printf("Enter choice\n\n");
        printf("0   create a new list\n1   insert\n2   delete\n3   update\n4   display\n5   exit\n");
        scanf("%d", &choice);
        printf("\n\n");
        switch (choice)
        {
        case 0:
            printf("Enter no of elements in the list\n");
            scanf("%d", &length);
            printf("keep entering roll and names\n");
            while (length > 0)
            {
                scanf("%d", &newElement);
                scanf("%d%d%d%d%d",&maths,&physics,&chemistry,&english,&computer);
                while (getchar() != '\n')
                {
                }
                gets(getName);
                createNode(getName, newElement,maths,physics,chemistry,english,computer);
                length--;
            }
            break;
        case 1:
            printf("Enter position and roll\n");
            scanf("%d%d", &positon, &newElement);
            insertInList(positon, newElement);
            break;
        case 2:
            printf("Enter key to be deleted\n");
            scanf("%d", &key);
            deleteNode(&head, key);
            break;
        case 3:
            printf("Enter roll to be updated and new entry");
            scanf("%d%d", &key, &newElement);
            update(key, newElement);
            break;
        case 4:
            printList(head);
            break;
        case 5:
            printf("bye bye!!");
            break;
        default:
            printf("Invalid input");
            break;
        }
    } while (choice != 5);
}
