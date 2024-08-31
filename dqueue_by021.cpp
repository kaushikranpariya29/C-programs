// 3). Write a menu driven program to implement following
// functionality with Deque using array:
// A. Insert element at Front
// B. Insert element at Rear
// C. Remove element at Front
// D. Remove element at Rear
// E. Display the queue

#include<iostream>
using namespace std;
#define SIZE 5
class SimpleQueue{
    int array[SIZE];
    int front,rare;
    public:
    SimpleQueue(){
        front=0,rare=0;    
    }
    void insertFront(int ITEM){
        if(rare == SIZE){
            cout<<"\nQUEUE is full no insertion:-\n";
        }
        else{
            if(rare==0 && front==0){
                front = 1;
                array[front-1]=ITEM;
                rare++;
            }
            else{
                for(int i=rare;i>=front-1;i--){
                    array[i+1] = array[i];
                }
                array[front-1]=ITEM;
                rare++;
            }
            cout<<"ITEM : "<<ITEM<<" Stored in front : "<<front-1<<endl;
        }
    }
    void insertRare(int ITEM){
        if(rare == SIZE-1){
            cout<<"\nQUEUE is full no insertion:-\n";
        }
        else{
            if(rare==-1 and front==-1){
                front=0;
            }
            rare++;
            array[rare]=ITEM;
            cout<<"ITEM : "<<ITEM<<" Stored in RARE : "<<rare<<endl;
        }
    }
    
    int removeFront(){
        int ITEM;
        if(front==-1){
            cout<<"\nQUEUE is Empty no Deletion:-\n";
        }
        else{
            ITEM = array[front];
            array[front] = 0;
            if(front==rare){
                front=-1;
                rare=-1;
            }
            else{
                front++;
            }
            cout<<"ITEM : "<<ITEM<<" DELETED from front : "<<front<<endl;
            return ITEM;
        }
        return 0;
    }

    int removeRare(){
        int ITEM;
        if(front==-1){
            cout<<"\nQUEUE is Empty no Deletion:-\n";
        }
        else{
            ITEM = array[front];
            array[front] = 0;
            if(front==rare){
                front=-1;
                rare=-1;
            }
            else{
                front++;
            }
            cout<<"ITEM : "<<ITEM<<" DELETED from front : "<<front<<endl;
            return ITEM;
        }
        return 0;
    }

    void display(){
        if(front==0){
            cout<<"\nQUEUE is Empty:-\n";
        }
        else{
            cout<<"\nQUEUE : ";
            for(int i=front-1;i<rare;i++){
                cout<<" | "<<array[i];
            }
            cout<<" |\n";
        }
    }
};
int main(){
    SimpleQueue q1;
    int choice,ITEM;
    // do{
    while(1){
        cout<<"\nEnter your choice :-\n";
        cout<<"1. Insert element at Front\n";
        cout<<"2. Insert element at Rear\n";
        cout<<"3. Remove element at Front\n";
        cout<<"4. Remove element at Rear\n";
        cout<<"5. Display the queue\n";
        cout<<"6. Exit\n: ";
        cin>>choice;
        if(choice==1){
            cout<<"Enter any number : ";
            cin>>ITEM;
            q1.insertFront(ITEM);
        }
        else if(choice==2){
            cout<<"Enter any number : ";
            cin>>ITEM;
            q1.insertRare(ITEM);
        }
        else if(choice==3){
            ITEM = q1.removeFront();
        }
        else if(choice==4){
            ITEM = q1.removeRare();
        }
        else if(choice==5){
            q1.display();
        }
        else{
            break;
        }
    }
}