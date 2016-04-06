//
// Created by wqm on 16-4-6.
//

#include "snakeMatrix.h"
#include <algorithm>

void generateMatrix(int n)
{
    int **res;
    res = new int *[n];
    for(int i =0;i<n;i++)
        res[i] = new int[n];
    int i=0;
    int j=0;
    res[0][0]=1;
    for(i =0;i<n-1;i++)
    {
        res[i+1][0]=res[i][0]+i+1;
    }
    for(j=1;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            res[i][j]=res[i+1][j-1]+1;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<res[i][j]<<' ';
        }
        cout<<endl;
    }

    for(i=0;i< n;i++)
    delete[]res[i];
    delete[]res;
}