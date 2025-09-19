#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" number element : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        int j=i+1;
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    cout<<"total number of inversions in the loop is : "<<count;

    return 0;
}