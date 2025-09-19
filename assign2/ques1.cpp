#include<iostream>
using namespace std;

int binary(int arr[],int n,int target){
  int fd = 0,ld=n-1;
  while(fd<=ld){
    int mid = (fd+ld)/2;
    if(arr[mid]==target){
      return mid;
    }
    else if(arr[mid]<target){
      fd = mid+1;
    }
    else{
      ld = mid-1;
    }
  }
  return -1;
}
int main(){
  int arr[]={1,3,4,6,7,8,9,11,14};
  int n = sizeof(arr)/sizeof(arr[0]);
  int target;
  cout<<"enter the element you want to search : ";
  cin >> target;
  int result = binary(arr,n,target);
  if(result != -1) cout<<"element found at index : "<<result<<endl;
  else cout<<"element not found. " <<endl;
  return 0;
}