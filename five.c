#include<stdio.h>
void main()
{

    int A[100];
    int x,l,i,j,flag=0;
    printf("please enter how many elements you want to add in  array:");
    scanf("%d",&j);
    printf("please enter array elements:");
    for(i=0;i<j;i++)
    {
        scanf("%d",&A[i]);
    }

    
    printf("please enter digit");
    
    //printf("%d",l);
    i=0;
    scanf("%d",&x);
    while(A[i]!='\0')
    {
        if(A[i]==x)
        {
            flag=1;
           printf("%d",i);
        }
        i++;
    }
    if(flag==0)
    {
        printf("-1");
    }
    



   /* for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==x)
        {
            flag=1;
           printf("%d",i);
        }
    }
    */
    /*if(flag!=1)
    {
     printf("-1");
    }
    */
     
}