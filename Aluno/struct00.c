#include <stdio.h>

struct rgPonto {
  int x;
  int y;
};

int main() {
  struct rgPonto a;

  printf("x: ");
  scanf("%d", &a.x);

  printf("y: ");
  scanf("%d", &a.y);

  printf("\n");

  if ((a.x > 0) && (a.y > 0))
     printf("Q1\n");
  else if ((a.x < 0) && (a.y > 0))
          printf("Q2\n");
       else if ((a.x < 0) && (a.y < 0))
               printf("Q3\n");
            else if ((a.x > 0) && (a.y < 0))
                    printf("Q4\n");
                 else if ((a.x != 0) && (a.y == 0))
                         printf("Eixo X\n");
                      else if ((a.x == 0) && (a.y != 0))
                              printf("Eixo Y\n");
                           else printf("Origem\n");

  return(0);
}