#include<iostream>
using namespace std;


class Queue{
	private:
		int front;
		int rear;
		int arr[5];
		
	public:
		Queue(){
			
		}
};

int main(){
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