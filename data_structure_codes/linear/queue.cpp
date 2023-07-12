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
		
		bool isEmpty(){                    // as we can see in constructor function the intial conditions 
			if(front == -1 && rear == -1)
				return true;
			else 
				return false;
			
		}
		
		bool isFull(){
			if(rear == 4)                 // since the size is 5 and the position starts from 0
				return true;
			else
				return false;
		}
		
		void enqueue(int val){            //first check if the queue is full or not
			if(isFull()){
				cout<<"Queue is full"<<endl;
				return;
			}
			else if(isEmpty()){          // special condition if the queue is empty
				rear = 0;                //since both rear and front are -1 initially
				front = 0;               // we need to set them to 0 and then assign to the rear position
				arr[rear] = val;
			}
			else{
				rear++;                  //default process is to first increment the rear value and the assign it
				arr[rear] = val;
			}
		}
		
		int dequeue(){
			int x;
			if(isEmpty()){
				cout<<"Queue is empty"<<endl;
				return 0;
			}
			else if(front == rear){     //dequeue func to remove the FIFO so first we will assign the value to some x variable 
				x = arr[front];         //assign the position 0 again to display that it has been dequeued
				arr[front] = 0;         // special condition if we are dequeuing the first value then we need to again assign
				rear = -1;              // front and rear -1 or else the next equeue func will not get carried out
				front = -1;
				return x;
			}
			else{
				x = arr[front];         // default is to assign,increment the front and return
				arr[front] = 0;
				front++;
				return x;
			}
		}
		
		int count(){
			return (rear-front+1);      // standard math stuff
		}
		
		void display(){
			cout<<"All values is the Queues are: "<<endl;
			for(int i=0; i<5; i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};

int main(){
	
	Queue q1;
	int option, value;
	
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
		
		switch(option){
			case 0: 
				break;
			case 1:
				cout<<"Enqueue Operation \nEnter an item to Enqueue in the Queue: ";
				cin>>value;
				cout<<endl;
				q1.enqueue(value);
				break;
			case 2:
				cout<<"Dequeue Operation\nDequeueed Value: "<<q1.dequeue()<<endl;
				break;
			case 3:
				if(q1.isEmpty())
					cout<<"Queue is Empty"<<endl;
				else
					cout<<"Queue is not empty"<<endl;
				break;
			case 4:
				if(q1.isFull())
					cout<<"Queue is Full"<<endl;
				else
					cout<<"Queue is not Full"<<endl;
				break;
			case 5:
				cout<<"Count Operation \nCOunt of items in Queue: "<<q1.count()<<endl;
				break;
			case 6:
				cout<<"Display function called "<<endl;
				q1.display();
				break;
			case 7:
				system("cls");
		}
		
	}while(option!=0);
	return 0;
}