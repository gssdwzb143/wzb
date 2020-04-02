#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,a[50],maxlist=0,addlist=0,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            addlist = addlist + a[j];
            if(maxlist < addlist)
                maxlist = addlist;
        }
        addlist = 0;
    }
    printf("%d",maxlist);
    return 0;
}
