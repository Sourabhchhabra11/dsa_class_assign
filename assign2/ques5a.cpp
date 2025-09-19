#include<iostream>
using namespace std;
void setElements(int arr[],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j){
        cout<<"enter the value of diagonal "<<i+1<<" :";
        cin>>arr[i];
      }
    }
    
  }
}

void getElements(int arr[],int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j){
        cout<<arr[i]<<"  ";
      }
      else cout<<"0"<<"  ";
    }
    cout<<endl;
  }
}

int main(){
  int n;
  cout<<"enter the value of n :";
  cin>>n;
  int arr[n];
  setElements(arr,n);
  getElements(arr,n);
  return 0;
}