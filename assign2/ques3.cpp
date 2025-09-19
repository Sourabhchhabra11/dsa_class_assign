#include<iostream>
using namespace std;

int linear(int arr[],int n){
  for(int i=0;i<n-1;i++){
    if(arr[i] != i+1){
      return i+1;
    }
  }
  return n;
}

int binary(int arr[],int n){
  int fd=0, ld=n-2;
  while(fd<=ld){
    int mid=(fd+ld)/2;
    if(arr[mid]==mid+1){
      fd = mid + 1;
    }
    else{
      ld = mid - 1;
    }
  }
  return fd+1;
}

int main(){
  int arr[] = {1,2,3,4,5,6,8,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"missing element in linear search is : "<<linear(arr,n)<<endl;
  cout<<"missing element in binary search is : "<<binary(arr,n)<<endl;
}