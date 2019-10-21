#include<iostream>
#include<list>
using namespace std;
void showlist(list<int> a)
{
	list <int> :: iterator i;
	cout<<": LIST :"<<endl;
	for( i = a.begin() ; i != a.end() ; ++i)
	{
		cout<<" "<<*i<<" ";
	}
	cout<<endl;
}
void deletelist(list<int> b)
{
	list<int> :: iterator i;
	cout<<"ENTER THE NUMBER TO BE DELETED :";
	int num;
	cin>>num;
	for( i = b.begin() ; i != b.end() ; ++i)
	{
		if(*i == num)
		{
			cout<<*i<<" HAS BEEN DELETED"<<endl;
			i = b.erase(i);
		}
	}
	cout<<": EDITED LIST :"<<endl;
	for( i = b.begin() ; i != b.end() ; ++i)
	{
		cout<<" "<<*i<<" ";
	}
	cout<<endl;
}
	
	  
int main()
{
	list <int> l1;
	int c1,c2;
	int n;
	char ch1,ch2;
	do{
		cout<<"_______LISTS_______"<<endl;
		cout<<"1. SINGLY LINKED LIST. "<<endl;
		cout<<"2. DOUBLY LINKED LIST. "<<endl;
		cout<<"3. CIRCULAR LINKED LIST. "<<endl;
		cout<<endl;
		cout<<"ENTER YOUR CHOICE : ";
		cin>>c1;
		switch(c1)
		{
			case 1 : do{
						cout<<"1. INSERT IN THE LIST."<<endl;
						cout<<"2. DELETE FROM THE LIST. "<<endl;
						cout<<"3. REVERSE LIST."<<endl;
						cout<<"4. SORTING. "<<endl;
						cout<<"5. DISPLAY LIST. "<<endl;
						cout<<endl<<"ENTER YOUR CHOICE : ";
						cin>>c2;
						switch(c2)
						{
							case 1 : cout<<"ENTER THE ELEMENT : ";
									 cin>>n; 
									 l1.push_back(n);
									 break;
						    case 2 : deletelist(l1);
									 break;
							/*case 3 : cout<<l1.front()<<" HAS BEEN DELETED "<<endl;								  
									 l1.pop_front();
									 break;		
						  	case 4 : cout<<l1.back()<<" HAS BEEN DELETED "<<endl;								  
									 l1.pop_back();
									 break;	*/
							case 3 : cout<<"REVERSED LIST  "<<endl;								  
									 l1.reverse();
									 showlist(l1);
									 break;		
							case 4 : cout<<"SORTED LIST "<<endl;
									 l1.sort();
									 showlist(l1);
									 break;
							case 5 : showlist(l1);
									 break;				 
							default: cout<<"__WRONG CHOICE__"<<endl;
					   }
					   	cout<<"DO YOU WANNA CON. : ";
					   	cin>>ch1;
				   	}while(ch1=='y' ||ch1=='Y');
				   	 break;
			case 2 : do{
						cout<<"1. INSERT FROM FRONT."<<endl;
						cout<<"2. INSERT FROM BACK ."<<endl;
						cout<<"3. DELETE FROM FRONT. "<<endl;
						cout<<"4. DELETE FROM BACK . "<<endl;
						cout<<"5. REVERSE LIST."<<endl;
						cout<<"6. SORTING. "<<endl;
						cout<<endl<<"ENTER YOUR CHOICE : ";
						cin>>c2;
						switch(c2)
						{
							case 1 : cout<<"ENTER THE ELEMENT : ";
									 cin>>n; 
									 l1.push_front(n);
									 break;
						    case 2 : cout<<"ENTER THE ELEMENT : ";
									 cin>>n; 
									 l1.push_back(n);
									 break;
							case 3 : cout<<l1.front()<<" HAS BEEN DELETED "<<endl;								  
									 l1.pop_front();
									 break;		
						  	case 4 : cout<<l1.back()<<" HAS BEEN DELETED "<<endl;								  
									 l1.pop_back();
									 break;	
							case 5 : cout<<": REVERSED LIST :"<<endl;								  
									 l1.reverse();
									 showlist(l1);
									 break;		
							case 6 : cout<<": SORTED LIST :"<<endl;
									 l1.sort();
									 showlist(l1);
									 break;				 
							default: cout<<"__WRONG CHOICE__"<<endl;
					   }
					   	cout<<"DO YOU WANNA CON. : ";
					   	cin>>ch1;
				   	}while(ch1=='y' ||ch1=='Y');
				   	 break;
			case 3 : do{
						cout<<"1. INSERT FROM FRONT."<<endl;
						cout<<"2. INSERT FROM BACK ."<<endl;
						cout<<"3. DELETE FROM FRONT. "<<endl;
						cout<<"4. DELETE FROM BACK . "<<endl;
						cout<<"5. REVERSE LIST."<<endl;
						cout<<"6. SORTING. "<<endl;
						cout<<endl<<"ENTER YOUR CHOICE : ";
						cin>>c2;
						switch(c2)
						{
							case 1 : cout<<"ENTER THE ELEMENT : ";
									 cin>>n; 
									 l1.push_front(n);
									 break;
						    case 2 : cout<<"ENTER THE ELEMENT : ";
									 cin>>n; 
									 l1.push_back(n);
									 break;
							case 3 : cout<<l1.front()<<" HAS BEEN DELETED "<<endl;								  
									 l1.pop_front();
									 break;		
						  	case 4 : cout<<l1.back()<<" HAS BEEN DELETED "<<endl;								  
									 l1.pop_back();
									 break;	
							case 5 : cout<<": REVERSED LIST :"<<endl;								  
									 l1.reverse();
									 showlist(l1);
									 break;		
							case 6 : cout<<": SORTED LIST :"<<endl;
									 l1.sort();
									 showlist(l1);
									 break;				 
							default: cout<<"__WRONG CHOICE__"<<endl;
					   }
					   	cout<<"DO YOU WANNA CON. : ";
					   	cin>>ch1;
				   	}while(ch1=='y' ||ch1=='Y');
				   	 break;
		}
			cout<<": PRESS Y TO GO BACK TO MAIN MENU : ";
		   	cin>>ch2;
				   
	}while(ch2=='y'||ch2=='Y');
	return 0;
}
				   	 
									 
									 
									 
									 
									 
									 
									 
									 								 
