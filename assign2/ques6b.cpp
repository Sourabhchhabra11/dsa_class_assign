#include <iostream>
using namespace std;

int main() {
    int r,c,t1,t2;
    cin>>r>>c;
    cin>>t1;
    int A[100][3];
    A[0][0]=r; A[0][1]=c; A[0][2]=t1;
    for(int i=1;i<=t1;i++) cin>>A[i][0]>>A[i][1]>>A[i][2];
    cin>>t2;
    int B[100][3];
    B[0][0]=r; B[0][1]=c; B[0][2]=t2;
    for(int i=1;i<=t2;i++) cin>>B[i][0]>>B[i][1]>>B[i][2];
    int C[200][3],i=1,j=1,k=1;
    C[0][0]=r; C[0][1]=c;
    while(i<=t1 && j<=t2){
        if(A[i][0]==B[j][0] && A[i][1]==B[j][1]){
            C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2]+B[j][2];
            i++; j++; k++;
        } else if(A[i][0]<B[j][0] || (A[i][0]==B[j][0] && A[i][1]<B[j][1])){
            C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2]; i++; k++;
        } else {
            C[k][0]=B[j][0]; C[k][1]=B[j][1]; C[k][2]=B[j][2]; j++; k++;
        }
    }
    while(i<=t1){ C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2]; i++; k++; }
    while(j<=t2){ C[k][0]=B[j][0]; C[k][1]=B[j][1]; C[k][2]=B[j][2]; j++; k++; }
    C[0][2]=k-1;
    for(int x=0;x<=C[0][2];x++)
        cout<<C[x][0]<<" "<<C[x][1]<<" "<<C[x][2]<<endl;
}
