#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n : ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"enter the "<<i<<"th element : ";
    cin>>arr[i];
  }
  int count=0;
  for(int i=0;i<n;i++){
    int j=0;
    for(j=0;j<i;j++){
      if(arr[i]==arr[j]){
        break;
      }
    }
    if(i==j){
      count++;
    }
  }
  cout<<"total distinct elements are = "<<count;
  return 0;
}