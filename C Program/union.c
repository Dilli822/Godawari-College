

// Union 
// it is a data structure.
// It is used to store different data types at a same memory location
// union is same as struct but only one member can be used to access at a same time
// syntax is 
// union UnionName {
//    dataType1 memeber1;
//.   dataType2 member2;
// }

// union Data{
//.   int number;
//    float age;
//.   double discount;
//.  }

/* However, please note that when you store a value in one member of the 
union, the memory space is shared among all the members. So, accessing a 
different member after storing a value may yield unexpected results or 
garbage values if the types don't match. It's the programmer's responsibility 
to keep track of which member is currently valid.

Unions can be useful in various scenarios, such as when you want to 
save memory by sharing memory space or when you have a data structure 
that can take on different forms or interpretations. However, it's 
important to use unions carefully and ensure proper handling to avoid 
type-related issues.

*/

#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 3.14;
    printf("data.f: %f\n", data.f);

    strcpy(data.str, "Hello");
    printf("data.str: %s\n", data.str);

    return 0;
}
