
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
int i;
int N=5;
int fact=1 ;
for(i=1;i<=N;i++){
    fact*=i;
    printf("%d\n",i);

}
printf("the factoriel of %d is : %d",N,fact);








   return 0;
}
