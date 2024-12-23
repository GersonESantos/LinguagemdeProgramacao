#include <stdio.h>
 
struct Movie_info
{ 
    char *name; 
    char *ACC; 
};
 
int main()
{
     struct Movie_info* M;
     M = (struct Movie_info*) malloc(sizeof(struct Movie_info)); 
     
     
     M->name = "Python with JournalDev";
     M->ACC="A";
 
     printf("Movie Information:");
     printf("\nName: %s", M->name);
     printf("\nACC: %s", M->ACC);
     return 0;
}