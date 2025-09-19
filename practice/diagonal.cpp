#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n : ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"enter the "<<i<<"th element";
    cin>>arr[i];
  }
  int l=0;
  for(int k=0;k<n;k++){
    
    for(int j=0;j<n;j++){
      if(k==j){
        cout<<arr[l]<<"  ";
        l++;
      }
      else cout<<"0  ";
    }
    cout<<endl;
  }
  return 0;
}