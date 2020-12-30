#include<iostream.h>
#include<conio.h>
void main()
{
	int n, *p;
	int i, t, ptr;
	clrscr();
	cout<<"\nEnter the size of array:";
	cin>>n;
	p=new int[n];
	cout<<"\nEnter numbers "<<n<<" elements\n";
	for(i=1;i<=n;i++)
	        cin>>p[i];
	cout<<"\nElements before insertion sorting\n";
p[0]=0;
    for(i=1;i<=n;i++)
            cout<<p[i]<<"\t";
    for(i=1;i<=n;i++)
           {
           t=p[i];
           ptr=i-1;
           while(t<p[ptr])
                   {
                   p[ptr+1]=p[ptr];
                   ptr--;
                   }
           p[ptr+1]=t;
           }
     cout<<"\nElements after insertion sorting\n";
   for(i=1;i<=n;i++)
           cout<<p[i]<<"\t";
getch();
}
                   
	