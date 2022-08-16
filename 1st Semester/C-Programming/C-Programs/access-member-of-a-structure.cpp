//Access Members of a Structure
//There are two types of operators used for accessing members of a structure.
//. - Member operator
//-> - Structure pointer operator (will be discussed in the next tutorial)
//Pointer to structure
#include<stdio.h>
struct Point
{
int x, y;
};
int main()
{
struct Point p1 = {1, 2};
// p2 is a pointer to structure p1
struct Point *p2 = &p1;
// Accessing structure members using structure pointer
printf("%d %d", p2->x, p2->y);
return 0;
}
