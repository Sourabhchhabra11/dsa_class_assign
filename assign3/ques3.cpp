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

bool ismatching(char open, char close){
  return (open == '(' && close == ')' || open == '{' && close == '}' || open == '[' && close == ']');
}

bool checking(string ex){
  for(int i=0;i<ex.length();i++){
    char ch = ex[i];
    if(ch == '(' || ch == '{' || ch == '[' ){
      push(ch);
    }
    else if(ch == ')' || ch == '}' || ch == ']'){
      if(isempty()){
        return false;
      }
      char top = pop();
      if(!ismatching(top,ch)){
        return false;
      }
    }
  }
  return isempty();
}

int main(){
  string expr;
  cout<<"enter the expr : ";
  cin>>expr;
  if(checking(expr)){
    cout<<"expression is balanced.";
  }
  else{
    cout<<"expression is not balanced";
  }
  return 0;
}