#include <iostream>
using namespace std;

int main() {
    int rows, cols, terms;
    cout << "Enter rows, cols, non-zero terms: ";
    cin >> rows >> cols >> terms;

    int mat[100][3], trans[100][3];

    mat[0][0] = rows;
    mat[0][1] = cols;
    mat[0][2] = terms;

    cout << "Enter row, col, value for each term:\n";
    for (int i = 1; i <= terms; i++) {
        cin >> mat[i][0] >> mat[i][1] >> mat[i][2];
    }

    cout << "\nOriginal Triplet:\n";
    for (int i = 0; i <= terms; i++) {
        cout << mat[i][0] << " " << mat[i][1] << " " << mat[i][2] << endl;
    }

    trans[0][0] = cols;
    trans[0][1] = rows;
    trans[0][2] = terms;

    int k = 1;
    for (int i = 0; i < cols; i++) {
        for (int j = 1; j <= terms; j++) {
            if (mat[j][1] == i) {
                trans[k][0] = mat[j][1];
                trans[k][1] = mat[j][0];
                trans[k][2] = mat[j][2];
                k++;
            }
        }
    }

    cout << "\nTransposed Triplet:\n";
    for (int i = 0; i <= terms; i++) {
        cout << trans[i][0] << " " << trans[i][1] << " " << trans[i][2] << endl;
    }

    return 0;
}
