/*2). Write a program to implement stack using student class. Student
class conations property like id, name and marks. Following
operation should be performed:
A. Insert Student (Push)
B. Remove Student (Pop)
C. Display
(Note: Program should be menu driven)*/
#include<iostream>
using namespace std;
#define SIZE  5
class Student
{
	int s_id;
	string s_name,status;
	float mark[3],total=0,per;
	public:

    Student(){
        s_id=0;
        s_name=status="";
        for(int i=0 ; i<3 ; i++){    mark[i]=0;	  }
        total=per=0;
    }

	void getdata(){
		cout<<"Feel following information for Student "<<endl;
		cout<<"Student ID ?       : ";
		cin>>s_id;
		cout<<"Student Name ?     : ";
		cin>>s_name;
		cout<<"Enter mark for 3 subject ---"<<endl;
		for(int i=0 ; i<3 ; ){
			cout<<"Subject "<<i+1<<" Mark ? : ";
			cin>>mark[i];
			if(mark[i]<0 || mark[i]>100){
				cout<<"Invailed mark try Again ---\n";
                continue;
			}
            total+=mark[i];
            i++;	
		}
        calculate();
	}
	void result(){
		cout<<"=============RESULT=============\n";
		cout<<"Student ID : "<<s_id<<endl;
		cout<<"Name       : "<<s_name<<endl;
		cout<<"--------------------------------\n";
		cout<<"Subject  Mark \n";
		for(int i=0 ; i<3 ; i++){
			cout<<i+1<<"     :  "<<mark[i]<<endl;
		}
		cout<<"Total :  "<<total<<endl;
		cout<<"--------------------------------\n";
		cout<<"Status     : "<<status<<endl;
		cout<<"Percentage : "<<per<<" %"<<endl;
		cout<<"================================\n";
	}
	void calculate(){
		per = total/3;
		if(per>35){status="PASS";}
		else{status="FAIL";}
    }
};

class Stack{
    Student A[SIZE];
    int TOP;
    
    public:
    Stack(){
        TOP = 0;
    }               

    void PUSH(Student stud){
        if(TOP>=SIZE){
            cout<<"\nStudent Stack is full\n";
        }
        else{
            TOP++;       
            A[TOP-1] = stud;
            cout<<"\nPUSH Successfully\n";
        }
    }

    Student POP(){
        Student stud;
        if(TOP<1){
            cout<<"\nStack is Empty\n";
        }
        else{
            TOP--;
            stud = A[TOP];     
        }
        return stud;
    }

    void STATUS(){
        if(TOP<1){
            cout<<"\nStatck is Empty\n";
        }
        else{
            if(TOP>=SIZE){
                cout<<"\nStack is full\n";
            }
            else{
                float free;
                free = (SIZE - TOP)/SIZE*100;
                cout<<"percentage of free STACK is "<<free<<"%\n";
            }
        }
    }
    void display(){
        if(TOP<1){
            cout<<"\nStatck is Empty\n";
        }
        else{
            cout<<"\nSTACK is : \n";
            for(int i=TOP-1 ; i>=0; i--){
                cout<<"\n\nStudent Stack : "<<i<<endl;
                A[i].result();
            }
        }
    }
};
int main(){
    int choice;
    Stack stack;
    while(1){
        cout<<"\nEnter your choice\n1. POP\n2. PUSH\n3. STATUS\n4. display\n5. EXIT\nchoice : ";
        cin>>choice;
        if(choice==1){
            Student stud = stack.POP();
            stud.result();
        }
        else if(choice==2){
            Student stud;
            stud.getdata();
            stack.PUSH(stud);
        }
        else if(choice==3){
            stack.STATUS();
        }
        else if(choice==4){
            stack.display();
        }
        else if(choice==5){
            break;
        }
        else{
            cout<<"\nINVALID input try again : \n";
        }
    }
    return 0;
}