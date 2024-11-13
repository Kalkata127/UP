#include <iostream>
using namespace std;

int smallestEl(int matrix[3][3]){
    int smallest = matrix[1][1];
    for(int j = 0; j<3; j++){
        for(int i = 0; i<3; i++){
            if(matrix[j][i]<=smallest){
                smallest = matrix[j][i];
            }
        }
    }
    return smallest;

}

int main() {
    int matrix[3][3] = { { 3, 5, 1}, { 6, 2, 4}, {9, 0, 8} };
    cout<<smallestEl(matrix);
    
    return 0;
 }

