// to take array elements at the run time
#include <stdio.h>
int main() {
    int rows,cols;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Enter the number of columns:");
    scanf("%d",&cols);
    int arr[rows][cols];
    printf("Enter the array elements:\n");
    for(int i=0;i<rows;i++) {
    for(int j=0;j<cols;j++) {
        scanf("%d",&arr[i][j]);
    }
    }
    printf("Array elements are:\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
    printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
        return 0;
}