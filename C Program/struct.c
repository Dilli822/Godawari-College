

// structure
// structure is used to group a similar or related members
// each member has unique allocated memory space 
// it can acccess multiple members at a time

#include<stdio.h>
#include<string.h>

struct Person{
    char name[50];
    float height;
    double weight;
};

int main(){
    struct Person person1;

    // use strcpy function to assign strings to struct string members
    strcpy(person1.name, "dilli");

    person1.height = 166.66;
    person1.weight = 65.55;

    printf("Person1 name is %s ", person1.name);
    printf("person1 weight is %lf ", person1.weight);
    printf("person1 height is %f", person1.height);

    return 0;
}