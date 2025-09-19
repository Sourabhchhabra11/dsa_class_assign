#include<iostream>
using namespace std;
int main(){
  const int n =3;
  int arr[n][n]={1,2,3,1,2,3,1,2,3};
  int brr[n][n]={1,2,3,1,2,3,1,2,3};
  int crr[n][n]={0};
  int sum =0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
      crr[i][j]+=arr[j][k]*brr[k][j];
      }
    }    
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<crr[i][j]<<"  ";
    }
    cout<<endl;
  }
  

}