#include<iostream>
using namespace std;
void setSymmetric(int arr[], int n, int i, int j, int x) {
    if(i >= j) {  // lower half
        int index = (i*(i+1))/2 + j;
        arr[index] = x;
    } else { 
        int index = (j*(j+1))/2 + i;
        arr[index] = x;
    }
}

int getSymmetric(int arr[], int n, int i, int j) {
    if(i >= j) {
        int index = (i*(i+1))/2 + j;
        return arr[index];
    } else {
        int index = (j*(j+1))/2 + i;
        return arr[index];
    }
}

void displaySymmetric(int arr[], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<getSymmetric(arr,n,i,j)<<" ";
        }
        cout<<"\n";
    }
}

int main() {
    int n;
    cout<<"Enter size of matrix: ";
    cin>>n;

    int size = n*(n+1)/2;
    int arr[size] = {0};

    cout<<"Enter elements of symmetric matrix:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i >= j) {
                int x;
                cout<<"Element ["<<i<<"]["<<j<<"]: ";
                cin>>x;
                setSymmetric(arr,n,i,j,x);
            }
        }
    }

    cout<<"\nSymmetric matrix:\n";
    displaySymmetric(arr,n);

    return 0;
}
