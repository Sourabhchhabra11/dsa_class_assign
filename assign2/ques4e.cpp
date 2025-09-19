#include<iostream>
using namespace std;
int main(){
  string str;
  cout<<"enter the string : ";
  cin>>str;
  for(int i=0;i<str.length();i++){
    if(str[i] >= 'A' && str[i] <= 'Z'){
      str[i]+=32;
    }
  }
  cout<<"string in lowercase is : "<<str;
  return 0;
}