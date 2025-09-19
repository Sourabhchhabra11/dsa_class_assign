#include<iostream>
using namespace std;


void setUpper(int arr[], int n, int i, int j, int x) {
    if(i <= j) {
        int index = (i * (2*n - i + 1)) / 2 + (j - i);
        arr[index] = x;
    }
}

int getUpper(int arr[], int n, int i, int j) {
    if(i <= j) {
        int index = (i * (2*n - i + 1)) / 2 + (j - i);
        return arr[index];
    }
    return 0; 
}

void displayUpper(int arr[], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<getUpper(arr,n,i,j)<<" ";
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

    cout<<"Enter elements of upper triangular matrix:\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            int x;
            if(i <= j) {
                cout<<"Element ["<<i<<"]["<<j<<"]: ";
                cin>>x;
                setUpper(arr,n,i,j,x);
            }
        }
    }

    cout<<"\nUpper triangular matrix:\n";
    displayUpper(arr,n);

    return 0;
}
