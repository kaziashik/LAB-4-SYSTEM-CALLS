#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, sum= 0, number;
    char *ptr;
    long int arr[argc];
    
    system("clear");
    
    for(i=0; i<argc; i++) {
    arr[i] = strtol(argv[i],&ptr,10);
    sum = sum + arr[i];
    

   }
   
   printf ("The number of parameter: %d\n", argc);
   printf ("array 0 is: %s\n", argv[0]);
   printf("array 1 is : %ld\n", arr[1]);
   printf("array 2 is: %ld\n", arr[2]);
    printf("array 3 is: %ld\n\n", arr[3]);
     printf("sum is: %d\n\n", sum);
     
     system (" cat message.txt");
     return 0;
     }
   
