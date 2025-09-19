#include<iostream>
using namespace std;
int arr[100];
int n;
void createArray(){
  cout<<"enter the size : ";
  cin>>n;
  for(int i=0;i<n;i++){    
    cout<<"enter the number "<<i;
    cin>>arr[i];
  }
}
void display(){
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
}
void insert(){
  int x,y;
  cout<<"enter the number : ";
  cin>>x;
  cout<<"enter the position : ";
  cin>>y;
  for(int i=n;i>=y;i--){
  arr[i+1] = arr[i];
  }
  arr[y]=x;
  n++;
}
void dele(){
  int pos;
  cout<<"enter the position of element : ";
  cin>>pos;
  for(int i=pos;i<=n;i++){
    arr[i]=arr[i+1];
  }
  n--;
}
void linear(){
  int target;
  cout<<"enter the target : ";
  cin>>target;
  bool found = false;
  for(int i=0;i<n;i++){
    if(arr[i]==target){
      cout<<target<<" is at "<<i<<"th place.";
      found = true;
      break;
    }
  }
  if(!found) cout<<"element not found.";
}
int main(){
  int choice;
  do{
    cout<<"enter the value of choice : ";
    cin>>choice;
    switch(choice){
    case 1:
    createArray();
    break;
    case 2:
    display();
    break;
    case 3:
    insert();
    break;
    case 4:
    dele();
    break;
    case 5:
    linear();
    break;
    case 6:
    cout<<"exiting";
    break;
    default :
    break;
  }
}
while(choice !=0);
  return 0;
}