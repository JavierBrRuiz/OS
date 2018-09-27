#include <stdio.h>
#include "dynamic_mem.h"


void hello(void);
void strings(void);
int three(void);
int factorial(int);


int triple (int x){
    printf ("Function triple(): %p\n"
    "\tValue of x: %d\n"
    "\tAddress of x: %p",
    &triple, x, &x);

    return 3 * x;
}

int a = 34;
int b;
int c = -5;

float d;
int D;

int main(int argc, char *argv[]){
    
    int x = 3, y;

    hello();

    printf ("Function printf(): %p\n", &printf);
    printf ("\nFunction main(): %p\n", &main);

    printf("\n\tGlobal variables (addr., name, value:\n)"); 
    printf("\t\t%p   a   %d\n", &a, a); 
    printf("\t\t%p   b   %d\n", &b, b); 
    printf("\t\t%p   c   %d\n", &c, c); 
    printf("\t\t%p   d   %d\n", &d, d); 
    printf("\t\t%p   D   %d\n", &D, D); 
    printf("\t\t%p   k   %d\n", &k, k); 
     
    printf("\n\tLocal variables (addr., name, value):\n"); 
    printf("\t\t%p   x   %d\n", &x, x);      
    printf("\t\t%p   y   %d\n", &y, y); 

    printf ("\n\tComputing 3! ...\n");
    x = factorial (three());
    printf ("\t3! == %d\n", x);

    dynamic_mem();

    strings();

    return 0;
}


void hello (void) {
    printf("Hello world!\n");
}

int three (void){
    return 3;
}

int factorial (int n){
    int f;

   printf("\tFunction factorial(%d): %p\n", &factorial); 
   printf("\t\tParameter n (addr., value): %p  %d\n", &n, n); 
   printf("\t\tVariable f (addr., value): %p  %d\n", &f, f);


   f = n < 2 ? 1 : n * factorial(n-1);

   printf ("\t\tfactorial(%d) returning %d\n", n, f);

   return f;
     
}

void strings (){
    char a[] = "hello";
    char b[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    char *c = "see you later";

    printf ("\n\tFunction strings(): %p\n", &strings);
    printf("\t\ta:  %p   \"%s\"\n", a, a); 

    printf("\t\tb:  %p  \"%s\"\n", b, b);  
    printf("\t\tc:  %p  \"%s\"\n", c, c); 
    printf("\t\t&c:  %p\n", &c);

    printf("\t\tPlaying a bit with c...\n");

    c = a;
    *c = 'H';

    printf("\t\ta:  %p  \"%s\"\n", a, a); 
    printf("\t\tb:  %p  \"%s\"\n", b, b); 
    printf("\t\tc:  %p  \"%s\"\n", c, c); 
    printf("\t\t&c:  %p  \n", &c); 
}



/*
6: Yes the Only read memory positions are near to functions memory positions

7: Yes it is near

8: The only parameter used in the program is n in 
factorial(int n)
*/
