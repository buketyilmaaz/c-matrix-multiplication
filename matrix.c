#include <stdio.h>

int main() {

    int a[2][2], b[2][2], result[2][2];

    printf("Enter elements of first matrix:\n");

    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    scanf("%d",&a[i][j]);

    printf("Enter elements of second matrix:\n");

    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    scanf("%d",&b[i][j]);

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j]=0;

            for(int k=0;k<2;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("Result matrix:\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
