// Stack using array 
 
#include<iostream> 
using namespace std; 
 
void push(int *stack, int value, int N); 
int pop(int *stack); 
 static int top; 
int main(){ 
    top=0; 
    int *stack; 
    int N,choice,temp; 
    cout<<"Enter Size of Stack (N) :"; 
    cin>>N; 
 
    stack=new int[N]; 
 
    while(1){ 
      cout<<"\n 1)Push  2)Pop 0)Exit"; 
      cin>>choice; 
      switch(choice){ 
        case 0: 
          exit(1); 
        case 1: 
          cout<<"\n\nEnter number to push:"; 
          cin>>temp; 
          push(stack,temp, N); 
          break; 
        case 2: 
          cout<<"\n"; 
          int no=pop(stack); 
          cout<<"Number Poped="<<no<<endl; 
          break; 
 
      } 
    } 
} 
 
void push(int *stack, int value, int N){ 
 
  if(top>N-1){ 
    cout<<"\n stack Overflow !!"; 
    return; 
  } 
  top++; 
  stack[top]=value; 
} 
 
int pop(int *stack){ 
  if(top==-1){ cout<<"\n\aStack belowFlow"; return -999;  } 
  return stack[top--]; 
} 