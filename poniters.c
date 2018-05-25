#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} point;

typedef struct {
    char *name;
    int age;
} person;

 void addone(int *n) {
    (*n)++;
}

void birthday(person * p){
    (*p).age += 1;
}

int main()
{
    /* -----------POINTERS--------------------- */
    int a = 1;
    int *pointer_to_a = &a;
    
    //a += 1;
    *pointer_to_a += 1;
    
    printf("The value a is  %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);

    /* -----------STRUCTURES--------------------- */    
    person john;

    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.\n", john.name, john.age);
    
    /* -----------STRUCTURES  Pointers--------------- */
    int n = 3;
    printf("Before: %d\n", n);
    addone(&n);
    printf("After: %d\n", n);
    
    /* -----------STRUCTURES to function pointers
    --------------------- */
    //person john;
    //john.name = "John";
    //john.age = 27;

    printf("%s is %d years old.\n", john.name, john.age);
    birthday(&john);
    printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);
    
    point * mypoint;

    mypoint = malloc(sizeof(point));

    mypoint->x = 10;
    mypoint->y =5 ;
    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

    free(mypoint);
  
    return 0;
}
