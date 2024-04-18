#include <stdio.h>
#include <stdlib.h>
/*
Analytic Geometry Formula of Segmenting a Line
p1(x1,y1)
p2(x2,y2)
p1S:Sp2
segment ratio=> L:K

K(x3,y3)

x3 = (L*x1 + K*x2) / L+K
y3 = (L*y1+ K*y2) / L+K

*/

int main()
{
    int point1[2];
    int point2[2];
    float pointS[2];
    int segmentrate[2];

    printf("\n Simple Line Segmentation Calculator \n");

    printf("\n Enter the point1 values: \n");

    for(int i=0;i<2;i++)
    {
        if(i==0){
            printf("Enter the abscissas: ");
            scanf("%d",&point1[i]);
        }else if(i==1){
            printf("Enter the ordinates: ");
            scanf("%d",&point1[i]);
        }
    }

    printf("\n Enter the point2 values: \n");

    for(int i=0;i<2;i++)
    {
        if(i==0){
            printf("Enter the abscissas: ");
            scanf("%d",&point2[i]);
        }else if(i==1){
            printf("Enter the ordinates: ");
            scanf("%d",&point2[i]);
        }
    }

    printf("\n Enter the segment rate: \n");

    for(int i=0;i<2;i++)
    {
        if(i==0){
            printf("Enter the abscissas: ");
            scanf("%d",&segmentrate[i]);
        }else if(i==1){
            printf("Enter the ordinates: ");
            scanf("%d",&segmentrate[i]);
        }
    }

    //x3 = (L*x1 + K*x2) / L+K

    printf("\n Calculating segment point X value\n");

    pointS[0] = (float)(segmentrate[0]*point1[0]+segmentrate[1]*point2[0]) / (float)(segmentrate[0] + segmentrate[1]);

    printf("\n Calculating segment point Y value\n");

    pointS[1] = (float)(segmentrate[0]*point1[1]+segmentrate[1]*point2[1]) / (float)(segmentrate[0] + segmentrate[1]);


    printf("Segmented line S located in x-y plane, x= %f, y =%f",pointS[0],pointS[1]);




    return 0;
}
