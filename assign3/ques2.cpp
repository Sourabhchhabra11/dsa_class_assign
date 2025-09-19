#include<iostream>
using namespace std;
# define max 100
char s[max];

int top = -1;

bool isempty(){
  return (top == -1);
}

bool isfull(){
  return (top == max-1);
}

void push(char ch){
  if(isfull()){
    cout<<"stack overflows!"<<endl;
  }
  else{
    s[++top]=ch;
  }
}

char pop(){
  if(isempty()){
    cout<<"stack is empty."<<endl;
    return '\0';
  }
  else{
    return s[top--];
  }
}

void display(){
  for(int i=top;i>=0;i--){
    cout<<s[i];
  }
  cout<<endl;
}

int main(){
  string str = "DataStructure";
  string reversed = "";
  for(int i=0;i<str.length();i++){
    push(str[i]);
  }

  while(!isempty()){
    reversed += pop();
  }


  cout<<"original string is : "<<str<<endl;
  cout<<"reversed string is : "<<reversed;
  return 0;
}
