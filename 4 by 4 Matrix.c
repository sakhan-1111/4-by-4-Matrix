#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,k;
    int a[4][4],s=0;
    printf("Enter the elements of the 4 by 4 matrix: \n");
    //Input.
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    // addition
    k=3;
     for(i=0; i<4; i++)
    {
        s=s+a[i][k];
        k=k-1;
    }
    // printing
    printf("result= %d",s);
    return 0;
}
