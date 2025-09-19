#include <iostream>
using namespace std;
int main(){
    int n,m;
    int sum=0;
    int i,j;
    cout<<"enter the value of row and column :";
    cin>>n>>m;
    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum= sum + arr[i][j];
        }
        cout<<"sum of row "<<i+1<<" is :"<<sum<<endl;
        sum=0;
    }

    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            sum= sum + arr[i][j];
        }
        cout<<"sum of column "<<j+1<<" is :"<<sum<<endl;
        sum=0;
    }

    return 0;
}