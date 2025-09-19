#include<iostream>
using namespace std;
void setTriDiagonal(int arr[], int n, int i, int j, int x) {
    if(i==j) arr[i] = x;                 
    else if(i==j+1) arr[n+i-1] = x;      
     else if(j==i+1) arr[2*n+i-1] = x;
}

int getTriDiagonal(int arr[], int n, int i, int j) {
    if(i==j) return arr[i];
    else if(i==j+1) return arr[n+i-1];
    else if(j==i+1) return arr[2*n+i-1];
    return 0;
}

void displayTriDiagonal(int arr[], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<getTriDiagonal(arr,n,i,j)<<" ";
        }
        cout<<"\n";
    }
}

int main(){
   int n;
    cout<<"Enter size of matrix: ";
    cin>>n;

    int size = 3*n - 2;
    int arr[size] = {0};
    setTriDiagonal(arr,n,0,0,5);
    setTriDiagonal(arr,n,0,1,8);
    setTriDiagonal(arr,n,1,0,4);
    setTriDiagonal(arr,n,1,1,6);
    setTriDiagonal(arr,n,1,2,9);
    setTriDiagonal(arr,n,2,1,7);
    setTriDiagonal(arr,n,2,2,10);

    cout<<"Tri-diagonal matrix is:\n";
    displayTriDiagonal(arr,n);

    return 0;
}