#include <iostream>
using namespace std;

int main() {
    int r1,c1,t1,r2,c2,t2;
    cin>>r1>>c1;
    cin>>t1;
    int A[100][3];
    A[0][0]=r1; A[0][1]=c1; A[0][2]=t1;
    for(int i=1;i<=t1;i++) cin>>A[i][0]>>A[i][1]>>A[i][2];
    cin>>r2>>c2;
    cin>>t2;
    int B[100][3];
    B[0][0]=r2; B[0][1]=c2; B[0][2]=t2;
    for(int i=1;i<=t2;i++) cin>>B[i][0]>>B[i][1]>>B[i][2];

    if(c1!=r2){ cout<<"not possible"; return 0; }

    int C[200][3],k=1;
    C[0][0]=r1; C[0][1]=c2;
    for(int i=1;i<=t1;i++){
        for(int j=1;j<=t2;j++){
            if(A[i][1]==B[j][0]){
                int row=A[i][0], col=B[j][1], val=A[i][2]*B[j][2];
                int found=0;
                for(int x=1;x<k;x++){
                    if(C[x][0]==row && C[x][1]==col){
                        C[x][2]+=val; found=1; break;
                    }
                }
                if(!found){
                    C[k][0]=row; C[k][1]=col; C[k][2]=val; k++;
                }
            }
        }
    }
    C[0][2]=k-1;
    for(int i=0;i<=C[0][2];i++)
        cout<<C[i][0]<<" "<<C[i][1]<<" "<<C[i][2]<<endl;
}
