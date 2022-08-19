//Just example to create , union variables, *car3 is a pointer variable
#include<stdio.h>
union car
{
char name[50];
int price;
};
int main()
{
union car car1, car2, *car3;
return 0;
}

