/*task-03 write a function which receives the data as per the fields of your 
structure and returns the structure variable having those data*/

#include<stdio.h>
 struct classroom
 {
    int date;
    char name;
 };


struct classroom getclassroom(int,char);  //getclassroom is prototype.struct classroom is return type.

int main()
 {
    struct classroom mydeets;
    mydeets.date=7;
    mydeets.name='d';
    mydeets=getclassroom(7,'d');
 }

struct classroom getclassroom(int a,char b)
{
    struct classroom tmp;
    tmp.date = a;
    tmp.name = b;
    return tmp;
}