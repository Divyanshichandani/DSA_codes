/*/waf which prints below pattern.call the methos from main().
pattern - print your sap id in combination of * as for sapid in combination of * as for sap id 50001272.
o/p:
5
*0
**0
***0
****1
*****2
******7
*******2/*/

//method 1
#include<stdio.h>
void pattern();
int main() {
printf("The Pattern is:\n");
pattern();
}

void pattern()
{
    int rows =7 , SAP[8] = {5,0,0,0,1,2,7,2};
    printf("5\n");
    // for printing rows
    for (int i = 0,x = 1; i < rows; i++) {
    // for printing star
        for (int j = 0; j <= i; j++) {
            printf("*\t");
        }
        printf("%d",SAP[x]);
        x++;
        printf("\n");
    }
}

//method 2 if number is stored in a variable.
#include<stdio.h>
int pattern(int);
int main()
{
    int num1;
    printf("enter your sap id-->");
    scanf("%d",&num1);
   
    pattern(num1);
    return 0;
}

int pattern(int aa)
{
    int y=8,a,b[y],c=0;

    while(y>=0)
    {
        a=aa%10;
        aa=aa/10;
        b[y]=a;
        y--;
        
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==j)
            {
                printf("%d",b[i]);
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}