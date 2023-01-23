    #include<stdio.h>

    void main()
    {

        
        int c=0,i;
        char a[100];
        scanf("%s",&a);
        
        for(i=0;a[i]!='\0';i++)
        {
            c++;
        }
        printf("%d",c);
        
    }