#include<iostream>
using namespace std;
int main(){
  int arr[3][3]={1,1,1,2,2,2,3,3,3};
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
  }
  int sumrow=0,sumcoloum=0;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      sumrow+=arr[i][j];
    }
    cout<<"sum of "<<i+1<<"th row is : "<<sumrow<<endl;
    sumrow=0;
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      sumcoloum+=arr[j][i];
    }
    cout<<"sum of "<<i+1<<"th coloum is : "<<sumcoloum<<endl;
    sumcoloum=0;
  }
}