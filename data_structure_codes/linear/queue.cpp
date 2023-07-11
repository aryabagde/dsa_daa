#include<iostream>
using namespace std;


class Queue{
	private:
		int front;           //font head of the queue
		int rear;            //rear head of the queue
		int arr[5];          //static initialization
		
	public:
		Queue(){             // constructor function
			
			front = -1;      //no values in queue so front and rear values are -1
			rear = -1;
			for(int i=0; i<5; i++){  // initializing all the values to 0
				
				arr[i] = 0;
			}
			
		}
};

int main(){
	
	Queue q1;
	
	do{
		
		cout<<"What operation do you want to perform?"<<endl;
		cout<<"1. Enqueue"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. isEmpty"<<endl;
		cout<<"4. isFull"<<endl;
		cout<<"5. Count"<<endl;
		cout<<"6. Display"<<endl;
		cout<<"7. Clear Screen"<<endl;
		
		cin>>option;
		
	}while(option!=0)
	return 0;
}