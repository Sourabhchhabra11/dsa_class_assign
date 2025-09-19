#include<iostream>
#include<string>
using namespace std;
int main(){
  string str1,rev;
  cout<<"enter string : ";
  getline(cin,str1);
  for(int i=str1.length();i>=0;i--){
    rev += str1[i];
  
  }
  cout<<"reversed string is : "<<rev<<endl;
  return 0;
}