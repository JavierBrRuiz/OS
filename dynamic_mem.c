#include <stdio.h>
#include <stdlib.h>

#include "dynamic_mem.h"

int k; 

void dynamic_mem (void){
    int *p;

    char *q, *r, *s;

    printf("\n\tFunction dynamic_mem(): %p\n", &dynamic_mem);
    printf("\n\t%p   p   %p\n", &p, p); 
    printf("\n\t%p   q   %p\n", &q, q);     
    printf("\n\t%p   r   %p\n", &r, r);
    printf("\n\t%p   s   %p\n", &s, s);
    

    p = (int *) malloc (7 * sizeof(int));
    q = (char*) malloc (35 * sizeof(char));
    r = (char*) malloc (5 * sizeof(char));
    s = (char*) malloc (sizeof(char));     

    if (p == NULL || q == NULL || r == NULL || s == NULL){
        if (p!= NULL) free(p);
        if (q!= NULL) free(q);  
        if (r!= NULL) free(r);
        if (s!= NULL) free(s);

        return;


    }
    
    printf ("\n\tMemory blocks reserved: \n");   
    printf ("\t\tp (7 integers): %p\n", p); 
    printf ("\t\tq (37 integers): %p\n", q); 
    printf ("\t\tr (5 char): %p\n", r); 
    printf ("\t\ts (1 char): %p\n", s);   
    
    printf ("\n\tPointer arithmetics: \n");  
    printf ("\t\tp  = %p \tp+1  = %p\n", p, p+1); 
    printf ("\t\tq  = %p \tq+1  = %p\n", q, q+1); 
    
    *r = 'H';
    r[1] = 'o';
    r[2] = 'w';
    r[3] = '\0';

    printf ("\n\t%s, paleface!\n", r);
    
    printf ("\n\tDuality character/number of type char: \n");
    printf ("\t\t*r is a char, and its value is %d\n", *r);
    printf("\t\tbut this value is also %c\n", *r);

    free (p);  
    free (q); 
    free (r); 
    free (s); 
     
}
