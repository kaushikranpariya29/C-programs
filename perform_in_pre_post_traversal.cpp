// 1). Write a program to implement following tree and perform inorder, pre-order and post-order traversal.
#include<iostream>
using namespace std;
class Node{
    public:
    char data;
    Node *left;
    Node *right;
    Node(){
        data = '0';
        left = NULL;
        right = NULL;
    }
};
class Tree{
    public:
    Node *F,*B,*G,*A,*D,*I,*C,*E,*H;
    Node *root;
    Tree(){   
        F=B=G=A=D=I=C=E=H=root=NULL;
    }
    void setvalue(){
        F = new Node();
        B = new Node();
        G = new Node();
        A = new Node();
        D = new Node();
        I = new Node();
        C = new Node();
        E = new Node();
        H = new Node();
        
        F->data = 'F';
        B->data = 'B';
        G->data = 'G';
        A->data = 'A';
        D->data = 'D';
        I->data = 'I';
        C->data = 'C';
        E->data = 'E';
        H->data = 'H';
        root = new Node();
       
        F->left=B;
        F->right=G;
        B->left=A;
        B->right=D;
        // G->left=;
        G->right=I;
        // A->left=;
        // A->right=;
        D->left=C;
        D->right=E;
        I->left=H;
        // I->right=;
        // C->left=;
        // C->right=;
        // E->left=;
        // E->right=;
        // H->left=;
        // H->right=;  

        root = F;
    } 
    void inOrder(Node *next){
        // cout<<"Check"<<next->data;
        if(next!=NULL){
            // cout<<"CheckLeft"<<next->data;
            inOrder(next->left);
            cout<<next->data;
            // cout<<"Checkrigth"<<next->data;
            inOrder(next->right);
        }
    }
    void preOrder(Node *next){
        if(next!=NULL){
            cout<<next->data;
            preOrder(next->left);
            preOrder(next->right);
        }
    }
    void postOrder(Node *next){
        if(next!=NULL){
            postOrder(next->left);
            postOrder(next->right);
            cout<<next->data;
        }
    }
};
int main(){
    Tree t1;
    t1.setvalue();
    cout<<"\nINORDER : ";
    t1.inOrder(t1.root);
    cout<<"\nPREORDER : ";
    t1.preOrder(t1.root);
    cout<<"\nPOSTORDER : ";
    t1.postOrder(t1.root);
}
/*
OUTPUT :
INORDER : ABCDEFGHI
PREORDER : FBADCEGIH
POSTORDER : ACEDBHIGF
*/