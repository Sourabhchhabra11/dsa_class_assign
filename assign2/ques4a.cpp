#include<iostream>
#include<string>
using namespace std;
int main(){
  string str1,str2;
  cout<<"enter first string : ";
  getline(cin,str1);
  cout<<"enter second string : ";
  getline(cin,str2);
  str1 = str1 + str2;
  cout<<"Concatenated string is : "<<str1<<endl;
  return 0;
}