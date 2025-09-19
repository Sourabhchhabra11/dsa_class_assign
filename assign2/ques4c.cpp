#include<iostream>
using namespace std;
int main(){
  string str,res;
  cout<<"enter the string : ";
  cin>>str;
  for(int i=0;i<=(str).length();i++){
    char c = str[i];
    if(str[i]!='a' && str[i]!='e'&& str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' ){
      res+=c;
    }
  }
  cout<<"string without vowels : "<<res<<endl;
  return 0;
}