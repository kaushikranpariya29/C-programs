/*2). Write a menu driven program to implement following
functionality with Binary Search Tree.
A. Insert node
B. Remove node
C. Update node
D. Display tree using in-order traversal  
*/
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(){
        data = 0;
        left = right = NULL;
    }
};
class BinaryTree{
    public:
    Node *root;
    Node *newNode;
    BinaryTree(){
        root = NULL;
        newNode = NULL;    
    }
    void insertNode(int data){
        if(root==NULL){
            root = new Node();
            root->data=data;
            cout<<"\nroot added\n";
        }
        else{
            insertLeaf(data,root);
        }
    }
    void insertLeaf(int data, Node *ptr){
        if(data <= ptr->data){
            if(ptr->left==NULL){
                newNode = new Node();
                newNode->data = data;
                ptr->left = newNode;
                cout<<"Added at Left\n";
            }
            else{
                insertLeaf(data,ptr->left);
            }
        }
        else{
            if(ptr->right==NULL){
                newNode = new Node();
                newNode->data = data;
                ptr->right = newNode;
                cout<<"Added at Right\n";
            }
            else{
                insertLeaf(data,ptr->right);
            }
        }
    }
    void remove(int data,Node *ptr){
        if(root==NULL){
            cout<<"\nTree Is Empty, No deletion\n";
        }
        else if(ptr==NULL){
            cout<<"\nUnsuccesssfull Deletion\n";
        }
        else{
            if(ptr->left->left != NULL || ptr->left->right != NULL){
                if(data <= ptr->data){
                    remove(data,ptr->left);
                }
                else{
                    remove(data,ptr->right);
                }
            }
            else{
                if(ptr->left->data == data && ptr->left->left == NULL && ptr->left->right == NULL){
                    delete(ptr->left);
                    ptr->left = NULL;
                    cout<<"\nDeleted\n";
                }
                else if(ptr->right->data == data && ptr->right->left == NULL && ptr->right->right == NULL){
                    delete(ptr->right);
                    ptr->right = NULL;
                    cout<<"\nDeleted\n";
                }
                else{
                    cout<<"\nUnsuccesssfull Deletion\n";
                }
            }
        }
    }
    void updateNode(int old,int data,Node *ptr){
        if(ptr==NULL){
            if(root==NULL){
                cout<<"\nTree Is Empty, No deletion\n";
            }
            else{
                cout<<"\nKey Not fond try Again\n";
            }
        }
        else{
            if(data <= ptr->data){
                if(ptr->data==old){
                    ptr->data=data;
                    cout<<"\nUpdated\n";
                }
                else{
                    updateNode(old,data,ptr->left);
                }
            }
            else{
                if(ptr->data==old){
                    ptr->data = data;
                    cout<<"\nUpdated\n";
                }
                else{
                    updateNode(old,data,ptr->right);
                }
            }
        }
    }
    void preOrder(Node *next){
        if(next!=NULL){
            cout<<next->data<<" | ";
            preOrder(next->left);
            preOrder(next->right);
        }
    }
};
int main(){
    int data,choice,old;
    BinaryTree b1;
    while(1){
        cout<<"\nEnter Your Choice :-\n1. Insert\n2. Remove\n3. Update\n4. display preOrder\n5. Exit\n:";
        cin>>choice;
        if(choice==1){
            cout<<"Enter Your data : ";
            cin>>data;
            b1.insertNode(data);
        }
        else if(choice==2){
            cout<<"Enter a key to Delete : ";
            cin>>data;
            b1.remove(data,b1.root);
        }
        else if(choice==3){
            cout<<"Enter Old key data : ";
            cin>>old;
            cout<<"ENter new data : ";
            cin>>data;
            b1.updateNode(old,data,b1.root);
        }
        else if(choice==4){
            cout<<"\nPreorder : ";
            b1.preOrder(b1.root);
        }
        else{
            break;
        }
    }
    return 0;
}