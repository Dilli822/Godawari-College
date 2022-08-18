//Union Practice Programs
//A union is a special data type available in C that allows
//to store different data types in the same memory
//location. You can define a union with many members,
//but only one member can contain a value at any given time.
//Unions provide an efficient way of using the same memory
//location for multiple-purpose.
//Syntax:
//union union_name {
//member definition;
//member definition;
//...
//member definition;
//} [one or more union variables];
//Example:
union car
{
char name[50];
int price;
};

