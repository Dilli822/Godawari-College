#include<stdio.h>

int main(){
  // pointer declaration
  // variable address
  int i, *p;
  i = 100;
  p = &i;
  printf("This is x address ---> %d \n", p);
  printf(" This is x variable value %d", *p);
  
  printf("\n Chain of pointer pointer to a pointer");
  int *p1, *p2, a;
  a = 120;
  p1 = &a;
  p2 = p1;
  printf("%d \n", p1);
  printf("%d this is not pointer 1 but pointer1 intger address ", p2);
  
  
  //pointers arithmetic 
  i++;
  p = &i;
  printf("This is x address increase by 4 bt ---> %d \n", p);
  int x,y; 
x=20; 
y=30; 

fncn(x,y); 
printf("\n Value of a and b after function call = %d %d",a,b); 
} 
fncn(p,q) 
int p,q; 
{ 
p=p+p; 
q=q+q
  return 0;
}

