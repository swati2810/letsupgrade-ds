//insertion and deletion of the linked list
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
class node
{
	int data;
	node *next;
	public:
	void create();
	void insert();
	void delete();
};
node *temp=NULL,  *ptr=NULL,  *start=NULL,  *ptt=NULL;
int t, cout=0;
void node::create()
{
	int y;
	if (start!=NULL)
	cout<<"/n/ntlink list is already created/n";
	else
	{
		 y=1;
		 while(y==1)
		 {
		 	temp=new node;
		 	temp->next=NULL;
		 	cout<<"/nEnter a value:";
		     cin<<temp->data;
		     if(start==NULL)
		     {
		     	start=ptr=temp;
		     }
		     else
		     {
		     	ptr->next=temp;
		     	ptr=temp;
		     }
		     cout<<"Enter more node(1/10):";
		     cin>>y;
		 }
	}
}
void node::insert()
{
	int ch;
	cout<<"/n/n/t/t     INSERT MENU /n";
	cout<<"/n/t*******************/n";
	cout<<"/n/n/t 1.After a particular node/n";
	cout<<"/n/n/t 2.before a particular node/n";
	cout<<"/n/t*******************/n";
	cout<<"/n/n   ENTER YOUR CHOICE:";
	cin>>ch;
	switch(ch)
	{
		case 1:
		       cout<<"/nEnter the number after which node is to be inserted:";
		       cin>>t;
		       ptr=start;
		       while(t!=ptr->data && ptr->next!=NULL)
		       {
		       	ptr=ptr->next;
		       }
		       if(t==ptr->data)
         	{
         		temp=new node;
         		cout<<"/nEnter a value:";
         		cin>>temp->data;
         		temp->next=ptr->next;
         		ptr->next=temp;
         	}
         	else
         	  not_found();
         	  break;
          case 2:
          cout<<"/n Enter the number before which you want to insert";
          cin>>t;
          if(t==start->data)
          {
          	temp=new node;
          	cout<<"/nEnter a value:";
          	cin>>temp->data;
          	temp->next=start;
          	start=temp
          }
          else
          {
          	ptr=start;
          	while(t!=ptr->data && ptr!=NULL)
          	{
          		ptt=ptr;
          		ptr=ptr->next;
          	}
          	if(t==ptr->data)
          	{
          		temp=new node;
          		cout<<"/nEnter a value:";
          		cin>>temp->data
          		temp->next=ptr;
          		ptt->next=temp;
          	}
          	else
          	  not_found();
          }
          break;
          default :
          //clrscr();
      cout<<"/n/n/n/t/tInvalid choice entered. /nPress any key to continue";
      getch();
	}
}

void node::delete()
int ch;
cout<<"/n/n/t/t      deletion menu";
cout<<"/n/n/t******************";
cout<<"/n/n/t 1.At the begining of the list";
cout<<"/n/n/t 2.At the end of the list";
cout<<"/n/n/t**************";
cout<<"/n/n Enter your choice:";
cin>>ch;
       switch(ch)
       {
       	case 1:
       	if(start==NULL)
       	cout<<"/n/nThere are no elements in list/nPress enter to return to main menu";
       	else
       	{
       		ptt=start;
       	    start=start->next;
       	    delete ptt;
       	}
       	getch();
       	break;
         case 2:
         if(start==NULL)
	         cout<<"/n/n/There are no elements in list/nPress enter to return to main menu";
	         else
	         {
	         	cout<<"/nPlease enter the number which you want to delete:";
	         	cin>>t;
	         	if(t==start->data)
	         	{
	         		ptr=start;
	         		start=start->next;
	         		delete ptr;
	         	}
	         	else
	         	{
	         		ptr=start;
	         		while(t!=ptr->data && ptr!=NULL)
	         		{ 
	         		ptt=ptr;
	         		ptr=ptr->next;
	         		}
	         		if(t==ptr->data)
	         		{
	         			ptt->next=ptr->next;
	         			delete ptr;
	         		}
	         		else
	         		not_found();
	         	}
	         }
	         getch();
       }
       }