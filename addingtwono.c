#include<stdio.h>
#define MAXSIZE 10


int main()
{
   FILE *input1,*output1;
   int a[MAXSIZE];
   int i=0,j,res=0;

        input1=fopen("input1.txt","r");
        output1=fopen("output1.txt","w");

        if(input1==NULL)
        {
            perror("\nError:\n");
            return 1;

        }

        while(!feof(input1))
        {
            fscanf(input1,"%d",&a[i]);
            i++;

        }

        for(j=0;j<i;j++)
        {
            printf("\n%d",a[j]);
              res=res+a[j];

        }

         fprintf (output1,"%d",res);
         printf("=%d\n",res);
         fclose (output1);
         return 0;


}
