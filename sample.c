#include<stdio.h>
#include<string.h>

void main()
{
    char str1[20];
    char str2[20];
    int flag = 0;
    printf("Enter string1:");
    gets(str1);
    printf("Enter string2:");
    gets(str2);
    for(int i=0; str1[i]!='\0' || str2[i]!='\0' ; i++)
    {
        if(str1[i]!= str2[i])
        {
            flag = 1;
            break;
        }
    }

    //if(strcmp(str1,str2)==0)  //string compare function
    if(flag == 0)
    {
        printf("same_string");
    }
    else
    {
        printf("different");
    }
}


