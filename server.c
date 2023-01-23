#include<stdio.h>
#include<try1.h>

void compare(char a[],char b[])
{
    
     while (a[count1] != '\0')
        count1++;
    while (b[count2] != '\0')
        count2++;
    if(count1==count2)
       {    
          for(int i=0;i<count1;i++)
          {
             if(a[i]==b[i])
               {
                  flag=1;
               }
             else
              {
                 flag=0;
                 break;
              }
          }
        }  
    else{
        printf("strings are different");
        }
    if(flag==1)
      {
        printf("strings are same");
      } 
   else if(flag==0)
      {
         printf("strings are different");

      }
}
