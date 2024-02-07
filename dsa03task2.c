/*task-02 write a function which receives classroom variable & prints all its fields*/
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
    printf("%c\n",mydetails.name);
    printf("%d\n",mydetails.date);
}