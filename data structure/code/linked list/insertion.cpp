
//insertion nth pos
#include<iostream>
#include<cstring>
using namespace std;

struct student
{

    int roll;
    char name[25];
    struct student *next;
};
void InsertNthLL(struct student **h, int r, char n[25], int N)
{
    int i;
    struct student *newN, *temp;
    newN = (struct student *)malloc(sizeof(struct student));

    temp = *h;

    newN->roll = r;
    strcpy(newN->name, n);

    if (*h == NULL)
    {
        newN->next = NULL;
        *h = newN;
    }
    else if (N == 1)
    {
        newN->next = *h;
        *h = newN;
    }
    else
    {
        for (i = 1; i <= N - 2; i++)
            temp = temp->next;

        newN->next = temp->next;
        temp->next = newN;
    }
}
int main()
{
    int roll, size, N;
    char name[25];
    struct student a, b, c, *head;
    head = &a;

    a.roll = 101;
    strcpy(a.name, "ABC");
    a.next = &b;

    b.roll = 102;
    strcpy(b.name, "DEF");
    b.next = &c;

    c.roll = 103;
    strcpy(c.name, "GHI");
    c.next = NULL;

    InsertNthLL(&head, 105, "XYZ", 3);


    struct student *temp = head;

    while (temp != NULL)
    {
        cout << "Roll: " << temp->roll << ", Name: " << temp->name << endl;
        temp = temp->next;
    }

    return 0;
}
