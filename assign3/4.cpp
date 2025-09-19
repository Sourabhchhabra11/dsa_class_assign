#include<iostream>
#include<cmath>
using namespace std;
# define max 10
char str[max];
int top = -1;
bool isfull(){
  return top==max-1;
}

bool isempty(){
  return top==-1;
}

int push(int value){
  if(isfull()){
    cout<<"overflow!!";
  }
  else{
    str[++top] = value;
  }
}

int pop(){
  if(isempty()){
    cout<<"underflow!!";
  }
  else{
    str[top--];
  }
}

int main(){
  char arr[20];
  int n= sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    cout<<"enter the characters of expression : ";
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    if(isdigit(arr[i])){
      arr[i]=arr[i]-48;
      push(arr[i]);
    }
    int a= pop();
    int b = pop();
    if(arr[i]=='+' || arr[i]=='-' || arr[i]=='*' || arr[i]=='/'){
      switch(arr[i]){
        case '+':
          cout<<a+b<<endl;
        case '-':
          cout<<a-b<<endl;
        case '*':
          cout<<a*b<<endl;
        case '/':
          cout<<a/b<<endl;
      }
    }
  }
}