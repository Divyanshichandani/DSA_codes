/*task-01 declare a structure for "classroom" having two fields(both different data types)
declare a variable of above structure in main()
initialize the variable with suitable values(hard coded)*/
#include<stdio.h>


struct classroom
{ 
    char name;
    int date;
};


int main()
{ 
    struct classroom mydetails;
    mydetails.name = 'd';
    mydetails.date = 7;
}

/*task-02 write a function which receives classroom variable & prints all its fields*/

struct classroom
{ 
    char name;
    int date;
};


int main()
{ 
    struct classroom mydetails;
    mydetails.name = 'd';
    mydetails.sdate = 7;
    printf("%c",mydetails.name);
    printf("%d",mydetails.date);
}

/