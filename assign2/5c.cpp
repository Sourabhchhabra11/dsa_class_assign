#include<iostream>
using namespace std;
void setLower(int arr[], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<"Enter element at ("<<i<<","<<j<<"): ";
            int index = i*(i+1)/2 + j;
            cin>>arr[index];
        }
    }
}

void getLower(int arr[], int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i>=j) {
                int index = i*(i+1)/2 + j;
                cout<<arr[index]<<"  ";
            }
            else {
                cout<<"0  ";
            }
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter size of square matrix (n x n): ";
    cin>>n;

    int size = n*(n+1)/2;
    int *arr = new int[size];

    setLower(arr, n);

    cout<<"\nLower Triangular Matrix is:\n";
    getLower(arr, n);

    delete[] arr;
    return 0;
}
