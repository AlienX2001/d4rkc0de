#include <stdio.h>
#include <stdlib.h>
void get_flag()
{ 
    FILE* fptr; 
    fptr = fopen("flag.txt", "r"); 
    if (fptr == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
    char c;
    c = fgetc(fptr);
    fflush(stdin);
 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        fflush(stdout);

        c = fgetc(fptr); 
        fflush(stdin);

    } 
  
    fclose(fptr);
}
int main( int argc, char** argv )
{  
    char input[10];
    printf("%s\n","Enter something :" );
    fflush(stdout);

    gets(input);
    fflush(stdin);
    return 0;
}
