#include<iostream>
using namespace std;
int main(){
  int n=8;
  int arr[n] = {1,1,2,2,3,3,4,4};
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        for(int k=j;k<n-1;k++){
          arr[k] = arr[k+1];
        }
        n--;
        j--;
      }
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
  }
}