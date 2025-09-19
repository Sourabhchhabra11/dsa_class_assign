#include<iostream>
using namespace std;
int main(){
  int arr[]={1,2,1,3,2,8,6};
  int n= sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        for(int k=j;k<n-1;k++){
          arr[k]=arr[k+1];
        }
        n--;
        j--;
      }
    }
  }
  for(int l=0;l<n;l++){
    cout<<arr[l]<<" ";
    }
    return 0;
}