#include <iostream> 
#include <deque> 

using namespace std; 

void showDeque(deque <int> d) 
{ 
	deque <int> :: iterator it; 
	for (it = d.begin(); it != d.end(); ++it)
	{
		cout << '\t' << *it;
	}
	cout << '\n'; 
} 

int main() 
{
	int i;
	int dequeChoice;
	int elements;
	deque <int> d;
	
	do
	{				
		cout<<"\nOperations of Deque : ";
		cout<<"\n\t\t1. Push an Element from Front";
		cout<<"\n\t\t2. Push an Element from Back";
		cout<<"\n\t\t3. Pop an Element from Front";
		cout<<"\n\t\t4. Pop an Element from Back";
		cout<<"\n\t\t5. Display Deque";
		cout<<"\n\t\t6. Exit";
		cout<<"\nSelect Deque Operation : ";
		cin>>dequeChoice;

		switch(dequeChoice)
		{
			case 1:
				cout<<"Enter the number of Elements to be Added : ";
				cin>>elements;
				while(elements!=0)
				{
					cout<<"Enter the Element : ";
					cin>>i;
					d.push_front(i);
					--elements;
				}
				break;
			
			case 2:
				cout<<"Enter the number of Elements to be Added : ";
				cin>>elements;
				while(elements!=0)
				{
					cout<<"Enter the Element : ";
					cin>>i;
					d.push_back(i);
					--elements;
				}
				break;
			
			case 3:
				cout<<"The Deleted Element is : ";
				cout<<d.front();							
				d.pop_front();
				break;

			case 4:
				cout<<"The Deleted Element is : ";
				cout<<d.back();							
				d.pop_back();
				break;

			case 5:
				cout << "The deque is : ";
				showDeque(d);
		}
	}while(dequeChoice>=1 && dequeChoice<6);
}

