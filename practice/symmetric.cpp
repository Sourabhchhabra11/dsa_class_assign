#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n : ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n*(n+1)/2;i++){
    cout<<"enter the "<<i<<"th element : ";
    cin>>arr[i];
  }
  int l=0,h=1;

  for(int k=0;k<n;k++){
    
    for(int j=0;j<n;j++){
      if(k<=j){
        cout<<arr[l]<<"  ";
        l++;
      }
      else{
        
        // cout<<arr[h]<<"  ";
        cout<<arr[k+j]<<"  ";
        // h++;
      }
    }
    cout<<endl;
  }
  return 0;
}