// 4). Write a menu driven program to implement following 
// functionality with Linked Stack:
// A. Insert node (Push)
// B. Remove node (Pop)
// C. Display stack
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    void getdata()
    {
        cout << "\nEnter data : ";
        cin >> data;
    }
    void display()
    {
        cout << " | D:" << data;
    }
};
class StackLinklist
{
    Node *newnode;
    Node *TOP;
    Node *temp;
public:
    StackLinklist()
    {
        newnode = NULL;
        TOP = NULL;
        temp = NULL;
    }
    void PUSH()
    {
        newnode = new Node();
        newnode->getdata();
        if (TOP == NULL)
        {
            TOP = newnode;
        }
        else
        {
            newnode->next = TOP;
            TOP = newnode;
        }
    }

    int POP()
    {
        int ITEM;
        if (TOP == NULL)
        {
            cout << "\nList are Empty :-\n";
        }
        else
        {
            temp = TOP;
            TOP = temp->next;
            ITEM = temp->data;
            delete temp;
            return ITEM;
        }
        return 0;
    }
    
    void display()
    {
        if (TOP == NULL)
        {
            cout << "\nList are Empty :-\n";
        }
        else
        {
            int i = 1;
            temp = TOP;
            cout << "link list : ";
            while (temp != NULL)
            {
                temp->display();
                temp = temp->next;
                i++;
            }
            cout << " |\n";
        }
    }
};
int main()
{
    int choice, ITEM;
    StackLinklist list;
    while (1)
    {
        cout << "\nEnter your choice:-";
        cout << "\n1. PUSH";
        cout << "\n2. POP";
        cout << "\n3. Display list";
        cout << "\n4. Exit \n: ";
        cin >> choice;
        if (choice == 1)
        {
            cout<<"ENter your ITEM : ";
            list.PUSH();
        }
        else if (choice == 2)
        {
            ITEM = list.POP();
            cout << "\nITEM fatched is " << ITEM << endl;
        }
        else if (choice == 3)
        {
            list.display();
        }
        else
        {
            break;
        }
    }
    return 0;
}