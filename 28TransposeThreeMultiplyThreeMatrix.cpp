#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the values of row and column of matrix : ";
    cin>>row>>col;
 
    int mat[row][col];
    cout<<"Enter the elements of matrix : "<<endl;
     for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }
    

    // Printing the original Matrix.
    cout<<"Original Matrix is -\n";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }


    // Declaring transpose matrix with inverted 
    int T_mat[col][row];

    // Assigning values accordingly. 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            T_mat[j][i] = mat[i][j];
        }
    }

    // Printing the transposed Matrix.
    cout<<"\nTransposed Matrix is -\n";
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            cout<<T_mat[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}