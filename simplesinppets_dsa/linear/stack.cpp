#include <iostream>  //standard input output stream or input output functionality
#include <string>    //for string class

using namespace std;    // to eliminate the repetitive use of std

class Stack{            // using OOP and creating stack class
	private:            // private access specifier for variables and stack array 
		int top;
		int arr[5];
		
	public:            // public access specifier for all functions
		Stack(){
			top = -1;  // intially top value -1
			for (int i=0; i<5; i++){        // for loop to intialize value to 0 of each value in array
				arr[i] = 0;
			}
		}
		 
		bool isEmpty(){                    // to check if the array is empty or not by looking at value of top
			if(top == -1)
				return true;
			else
				return false;
		}
		
		bool isFull(){                    // to check if the array is full or not by looking at the value of top
			if(top == 4)
				return true;
			else
				return false;
		}
		
		void push(int val){              // push function, increment value of top and then store the value
			if(isFull()){                // first check if the stack is full or not 
				cout<<"stack overflow"<<endl;
			}
			else{
				top++; 
				arr[top] = val;
			}
		}
		
		
		int pop(){                        // pop function has a return type int since we need to present it in console
			if(isEmpty()){                // before check if the stack is empty or not
				cout<<"stack underflow"<<endl;
				return 0;                 // since we are not returning any number we will use the default int main return statement
			}
			else{
				int popValue = arr[top];  // store the top value as a variable 
				arr[top] = 0;             // reinitialize the value as 0
				top --;                   //decrement the value
				return popValue;     
			}
		}
		
		int count(){                      // to count the number of numbers in stack
			return (top+1);
		}
		
		int peek(int pos){               // to check the value at a particular position
			if (isEmpty()){
				cout<<"stack underflow"<<endl;
				return 0;
			}
			else{
				return arr[pos];
			}
		}
		
		void change(int pos, int val){    
			arr[pos] = val;
			cout<<"Values changed at the position "<<pos<<endl;
		}
		
		void display(){                   // display all the numbers in tech stack
			cout<<"All values in the stack are: "<<endl;
			for(int i=4; i>=0; i--){
				cout<<arr[i]<<endl;
			}
		}
};

int main(){
	Stack s1;         //object initialization 
	int option, position, value;
	
	do{
		
		cout<<"---------Stack code-----------"<<endl;
		cout<<"Choose option and 0 for exit"<<endl;
		cout<<"1. Push"<<endl;
		cout<<"2. Pop"<<endl;
		cout<<"3. isEmpty"<<endl;
		cout<<"4. isFull"<<endl;
		cout<<"5. Peek"<<endl;
		cout<<"6. Count"<<endl;
		cout<<"7. Change"<<endl;
		cout<<"8. Display"<<endl;
		cout<<"9. Clear Screen"<<endl;
		
		cin>>option;
		
		switch(option){
			case 1:
				cout<< "Enter an item to push in the stack: ";
				cin>>value;
				s1.push(value);
				break;
			case 2:
				cout<<"Pop function called-popped value: "<<s1.pop()<<endl;
				break;
			case 3:
				if(s1.isEmpty())
					cout<<"Stack is empty"<<endl;
				else
					cout<<"Stack is not empty"<<endl;
				break;
			case 4:
				if(s1.isFull())
					cout<<"Stack is full"<<endl;
				else
					cout<<"Stack is not full"<<endl;
				break;
			case 5:
				cout<<"Enter the position you want to peek: ";
				cin>>position;
				cout<<"Peek function called - Value at position "<<position<<" is "<<s1.peek(position)<<endl;
				break;
			case 6:
				cout<<"Count function is called-Number of items in the stack are: "<<s1.count()<<endl;
				break;
			case 7:
				cout<<"Enter the value and position for the number to change: ";
				cin>>value>>position;
				s1.change(position, value);
				cout<<"Values has been changed"<<endl;
				break;
			case 8:
				s1.display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"Enter proper option number"<<endl;
		}
		
	}while(option != 0);
	
	
	
	return 0;
}