#include <stdio.h>
 
union Movie_info
{ 
    int id;
    float net_val;
};
 
int main()
{
     union Movie_info* M;
     M = (union Movie_info*)  malloc(sizeof(union Movie_info)); 
     printf("Movie Information:\n");
     M->id = 01;
     printf("\n ID: %d", M->id);
     M->net_val = 125.45;
     printf("\n NET VALUE: %.1f", M->net_val);
     return 0;
}