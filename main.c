#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{int i,j,m;
 printf("********la table de multiplication de 2 jusqu'a 10 **********\n");
 for(i=2;i<=10;i++)
                   {      printf("***************************************************************************\n");
                          for (j=1;j<=10;j++)
                          {   m= i* j;
                              printf("%d * %d = %d \t ",i,j,m);}
                              } 
  system("PAUSE");	
  return 0;
}
