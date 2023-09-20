#include <stdio.h>
#include <string.h>

int main() {
   char vetor[5][51];
   int i;
   unsigned long total = 0;

   for (i=0; i < 5; i++){
       printf("Digite um string: \n");
       scanf("%s", vetor[i]);
       total += strlen(vetor[i]);
   }
    printf("%d", (int)total);
}
