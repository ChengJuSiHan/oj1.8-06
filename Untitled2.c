#include <stdio.h>
int main()
{
    int m,n,i,j,a[105][105]={0},b[105][105]={0},k=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        if(a[i][j]==b[i][j]) k++;
        printf("%.2f",(float)k*100/(m*n));
}
