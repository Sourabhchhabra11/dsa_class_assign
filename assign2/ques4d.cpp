#include<iostream>
using namespace std;
int main(){
  string str;
  cout<<"enter the string :";
  cin>>str;
  for(int i=0;i<str.length()-1;i++){
    for(int j=0;j<str.length()-i-1;j++){
      if(str[j]>str[j+1]){
        char temp = str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
      }
    }
  }
  for(int k=0;k<str.length();k++){
    cout<<str[k];
  }
  return 0;
}