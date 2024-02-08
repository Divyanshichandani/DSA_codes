
/*write a function which accepts the structure variable 
and initializes all its members with some values*/
#include<stdio.h>
struct company
{
    int nOFemployees;
    float profitpercent;
    char nameOFcompany[10];
};

struct company initializecompany(struct company initialising)
{
    initialising.nOFemployees = 5;
    initialising.profitpercent= 37.5;
    initialising.nameOFcompany= "div";
    return initializecompany;
}
int main()
{
    struct company  myCompany;
    mycompany=initializecompany(myCompany);
    printf("Number of employees in the company is %d\n",myCompany.nOFemployees);
    printf("Profit percentage of the company is %.2f%%\n",myCompany.profitpercent);
    printf("name of company %c\n",mycompany.nameOFcompany);
    return 0;

}