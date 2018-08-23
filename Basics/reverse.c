/*Program to reverse all strings identically using 2D Array and string length
  Like string input -> "XYZ ZEF" Output-> "ZYX FEZ"*/
/*Header Files*/  
#include <stdio.h>
#include <string.h>
 /*Start of Main Function*/
void main()
{
    /*Initialization of variables*/
    int i,j=0,k=0,x,length;
    /*Initialization of a 2D Array*/
    char str[100],str1[10][20],temp;
    /*Initializing 2D Array*/
    printf("Enter all strings to be reversed identically:\n");
    /*[^\n]-> used for taking input until a newline isn't found*/
    scanf("%[^\n]s", str);
 
    /*Reads into 2d character array*/
    /*'\0'-> Empty String*/
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str1[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            str1[k][j]=str[i];
            j++;
        }
    }
    
    str1[k][j] ='\0';
 
    /*reverses each word of a given string calculating length*/
    for(i=0;i<=k;i++)
    {
        length=strlen(str1[i]);
        for(j=0,x=length-1;j<x;j++,x--)
        {
            temp=str1[i][j];
            str1[i][j]=str1[i][x];
            str1[i][x]=temp;
        }
    }
    for(i=0;i<=k;i++)
    {
        printf("%s ",str1[i]);/*Final printf function for printing the reversed strings with space*/
    }
}