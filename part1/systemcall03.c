#include <stdio.h> 
#include <stdlib.h> 
 
int main (int argc, char *argv[]) 
{ 
    int status; 
 
    printf("Initiating system call...\n"); 
 
    // this can be any Linux command:     
    status = system("ls  -lS"); 
 
    printf("Exiting system. Status = %d\n", status); 
 	 
    return 0; 
} 

