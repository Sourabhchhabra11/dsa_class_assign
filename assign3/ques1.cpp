#include<iostream>
using namespace std;
# define max 5
int arr[max];
int top=-1;

bool isempty(){
  return (top==-1);
}

bool isFull(){
  return (top == max-1);
}

void push(int value){
  if(isFull()){
    cout<<"stack is overflowing!!";
  }
  else{
    arr[++top]=value;
  }
}

void pop(){
  if(isempty()){
    cout<<"stack is already empty!!";
  }
  else{
    arr[top--];
  }
}

void peek(){
  if(isempty()){
    cout<<"stack is empty.";
  }
  else{
  cout<<arr[top];
  }
}

void display(){
  if(isempty()){
    cout<<"stack is already empty.";
  }
  else{
  for(int i=top;i>=0;i--){
    cout<<arr[i]<<" ";
  }
}
}

int main(){
  int value,choice;
  
  do{
  cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. isEmpty\n";
        cout << "4. isFull\n";
        cout << "5. Display\n";
        cout << "6. Peek\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;  
    switch(choice){
      case 1:
        cout<<"enter the value you want to add : ";
        cin>>value;
        push(value);
        break;

      case 2:
        pop();
        break;

      case 3:
        if(isempty()){
            cout<<"stack is empty.";
        }
        else{
          cout<<"stack is completely full.";
        }
        break;

      case 4:
        if(isFull()){
          cout<<"the stack is already full.";
        }
        else{
          cout<<"stack is empty.";
        }
        break;

      case 5:
        display();
        break;
      case 6:
        peek();
        break;

      case 7:
        cout<<"Exiting......";
        break;

      default:
        cout<<"invalid choice !!";
      }
  } while(choice != 7);
  return 0;

}