#include<stdio.h>
#include<string.h>
//The structure can be nested in the following ways.
//1)By separate structure
struct Date
{
int dd;
int mm;
int yyyy;
};
struct Employee
{
int id;
char name[20];
struct Date doj;
}emp1;
