#include<iostream>
using namespace std;
int main(){
  int arr[3][3]={12,13,14,21,23,24,31,32,34};
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
  }
  int rev,ld,s[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      s[i][j]=0;
      while(arr[i][j]>0){
      ld=arr[i][j]%10;
      s[i][j]= s[i][j]*10+ld;
      arr[i][j]/=10;
    }
    }
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<s[i][j]<<"  ";
    }
    cout<<endl;
  }
}