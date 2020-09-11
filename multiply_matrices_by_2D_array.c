/*
Rules: 
    multiply a matrix by another matrix we need to do the "dot product" of rows and columns.
    The "Dot Product" is where we multiply matching members, then sum up.
*/


#include <stdio.h>

int main()
{
    int a[2][3]={{1,0,3},{2,-1,0}};
    int b[3][2]={{1,-1},{2,3},{4,0}};
    int i,j,k, c[2][2]={0};	
    
    // Triple loop  
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            for(k=0;k<2;k++)
            {
                c[i][k]+=a[i][j]*b[j][k];           // dot product
            }
    
    printf("Results of Multiple Mutrices :\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
           if(j%2==0) printf("\n");
           printf("%3d ", c[i][j]);
        }
    printf("\n");
    return 0;
}
//Results：c[2][2]={{13,-1},{0,-5}}