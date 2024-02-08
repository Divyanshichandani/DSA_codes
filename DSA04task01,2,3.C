/*Declare a structure for a company and declare its variable in main().
The structure should have one integer field, one float field and one character array (of size 10)*/

#include<stdio.h>

struct company
{
    int nOFemployees;
    float profitpercent;
    char nameOFcompany[10];
};

//task1-Write a function which accepts the variable of above structure and prints all its members
void printdetails(struct company printdetails)
{
    printf("Number of employees: %d\n",printdetails.nOFemployees);
    printf("Profit percentage: %.2f%%\n",printdetails.profitpercent);
    printf("nameOFcompany: %c\n",printdetails.nameOFcompany);
}

/*task2-Write a function to accept nothing and inputs the data for all the fields of 
the structure and returns the structure variable with those values*/

void inputdata(struct company data)
{
    printf("Number of employees: %d\n",data.nOFemployees);
    scanf("enter the number of employees %d",&data.nOFemployees);
    printf("Profit percentage: %.2f%%\n",data.profitpercent);
    scanf("enter profit %f",&data.profitpercent);
    printf("nameOFcompany: %c\n",data.nameOFcompany);
    scanf("enter name of company %c",&data.nameOFcompany);
}

/*task3-Write a function which accepts the structure variable and returns the 
structure variable after doubling all the integer and float members.*/

struct company doubleallfields(struct company doubleit)
{
    doubleit.nOFemployees*=2;
    doubleit.profitpercent*=2;
    printf("number of employees %d\n",doubleit.nOFemployees);
    printf("enter the profit %f",doubleit.profitpercent);
    return doubleit;  //returning the struct with all fields doubled
}

//calling all the functions
int main()
{
    struct company deets;
    deets.nOFemployees = 300;
    deets.profitpercent = 39.7;
    deets.nameOFcompany = 'newton';
    printdetails(deets);
    inputdata(deets);
    doubleallfields(deets);
    
    return 0;
}