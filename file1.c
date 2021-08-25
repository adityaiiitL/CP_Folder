#include<stdio.h>
int main(){

    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    int a[l][n][m];
    for(int i=0;i<l;i++){

        for(int j=0;j<n;j++){

            for(int k=0;k<m;k++){

                scanf("%d",&a[i][j][k]);
            }
        }
    }
    int b[l][m][n];
    for(int i=0;i<l;i++){

        for(int j=0;j<m;j++){

            for(int k=0;k<n;k++){

                b[i][j][k]=a[i][k][j];
            }
        }
    }
    for(int i=0;i<l/2;i++){

        for(int j=0;j<m;j++){

            for(int k=0;k<n;k++){

                int temp=b[l-i-1][j][k];
                b[l-i-1][j][k]=b[i][j][k];
                b[i][j][k]=temp;
            }
        }
    }
    
    int c[n][l][m];
    for(int i=0;i<n;i++){

        for(int j=0;j<l;j++){

            for(int k=0;k<m;k++){

                c[i][j][k]=b[j][k][i];
            }
        }
    }
    for(int i=0;i<n;i++){

        for(int j=0;j<l;j++){

            for(int k=0;k<m;k++){

                printf("%d ",c[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}