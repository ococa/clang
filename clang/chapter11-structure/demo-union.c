#include <stdio.h>

// 在union结构中，i和b存储在同一空间
union AnElt {
    int i;
    int b;
} elt1;


// 
struct anStruct
{
    int i;
    int b;
    /* data */
} ant1;



int main(int argc, char const *argvp[])
{

    printf("size of int elt1 is %d\n", sizeof(elt1));    
    printf("size of int ant1 is %d\n", sizeof(ant1));    

    return 0;
}