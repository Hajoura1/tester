// Online C compiler to run C program online
#include <stdio.h>

int main() {
  char nom [20];
  char prenom [10];
  int age;
  char sexe [3];
  char email[30];
  printf("mon nom est : ");
  scanf("%13s[^/n]", nom);
  printf("mon prenom est : ");
  scanf("%5s[^/n]", prenom );
  printf("mon sexe est : ");
  scanf("%1s[^/n]", sexe );
  printf("mon email est : ");
  scanf("%28s[^/n]", email );
   printf("mon age est : ");
  scanf("%d\n", &age );
      return 0;
}
