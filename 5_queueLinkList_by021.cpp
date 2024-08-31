// 5). Write a menu driven program to implement following 
// functionality with Linked Queue:
// A. Insert node (Enqueue)
// B. Remove node (Dequeue) 
// C. Display Queue 
// 1). Write a menu driven program to implement following
// functionality with Singly Linked List:
// A. Insert node at first
// B. Insert node at end of list (append)
// C. Insert node at user choice position
// D. Remove node from first
// E. Remove node from last
// F. Remove node at user choice position
// G. Display list
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
class QueueLinklist
{
    Node *newnode;
    Node *front;
    Node *temp;
    Node *prev;

public:
    QueueLinklist()
    {
        newnode = NULL;
        front = NULL;
        temp = NULL;
        prev = NULL;
    }
    void insertFirst()
    {
        newnode = new Node();
        newnode->getdata();
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
        cout << "\nUpdated Head Address is " << head << "\n";
        // newnode->display();
        // cout<<" |\n";
    }

    void insertLast()
    {
        newnode = new Node();
        newnode->getdata();
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void insertUserChoice()
    {
        int totalNodes = 1, choice;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
            totalNodes++;
        }
        temp = head;
        // head->display();
        cout << "\nTotalNodes : " << totalNodes << endl;
        while (1)
        {
            cout << "Enter your choice (Between 1 and " << totalNodes << " ) : ";
            cin >> choice;
            if (choice >= 1 && choice <= totalNodes)
            {
                for (int i = 1; i < choice; i++)
                {
                    // cout<<"Next ";
                    prev = temp;
                    temp = temp->next;
                }
                newnode = new Node();
                newnode->getdata();
                newnode->next = temp;
                prev->next = newnode;
                break;
            }
        }
    }
    int deleteFirst()
    {
        int ITEM;
        if (head == NULL)
        {
            cout << "\nList are Empty :-\n";
        }
        else
        {
            temp = head;
            head = temp->next;
            ITEM = temp->data;
            delete temp;
            return ITEM;
        }
        return 0;
    }
    int deleteLast()
    {
        int ITEM;
        if (head == NULL)
        {
            cout << "\nList are Empty :-\n";
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            ITEM = temp->data;
            delete temp;
            return ITEM;
        }
        return 0;
    }
    int deleteUserChoice()
    {
        int totalNodes = 1, choice, ITEM;
        temp = head;
        if (head == NULL)
        {
            cout << "\nList are Empty :-\n";
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
                totalNodes++;
            }
            cout << "\nTotalNodes : " << totalNodes << endl;
            while (1)
            {
                cout << "Enter your choice (Between 1 and " << totalNodes << " ) : ";
                cin >> choice;
                if (choice >= 1 && choice <= totalNodes)
                {
                    temp = head;
                    for (int i = 1; i < choice; i++)
                    {
                        // cout<<"Next ";
                        prev = temp;
                        temp = temp->next;
                    }
                    prev->next = temp->next;
                    ITEM = temp->data;
                    delete temp;
                    return ITEM;
                    break;
                }
            }
        }
        return 0;
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "\nList are Empty :-\n";
        }
        else
        {
            int i = 1;
            temp = head;
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
    Linklist list;
    while (1)
    {
        cout << "\nEnter your choice:-";
        cout <<"1. Insert node (Enqueue)";
        cout <<"2. Remove node (Dequeue) ";
        cout <<"3. Display Queue ";
        cout <<"4. EXIT ";
        cin >> choice;
        if (choice == 1)
        {
            list.insertFirst();
        }
        else if (choice == 2)
        {
            list.insertLast();
        }
        else if (choice == 3)
        {
            list.insertUserChoice();
        }
        else if (choice == 4)
        {
            ITEM = list.deleteFirst();
            cout << "\nITEM fatched is " << ITEM << endl;
        }
        else if (choice == 5)
        {
            ITEM = list.deleteLast();
            cout << "\nITEM fatched is " << ITEM << endl;
        }
        else if (choice == 6)
        {
            ITEM = list.deleteUserChoice();
            cout << "\nITEM fatched is " << ITEM << endl;
        }
        else if (choice == 7)
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