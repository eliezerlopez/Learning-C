/*
 * Eliezer Lopez Rodriguez
 * www.eliezerlopez.com
 * Twitter: @eliezerlopez
 * GitHub: /EliezerLopez
 *
 * Realiza un programa en C que lea dos numeros (n1 y n2) y los ordene de menor a mayor, por lo que en n1 debera estar el menor de los dos y en n2 el mayor. Al final muestra por pantalla los valores de n1 y n2.
 */

#include <stdio.h>

int main() {

  int n1, n2, aux;

  printf("Number 1: ");
  scanf("%d",&n1);

  printf("Number 2: ");
  scanf("%d",&n2);

  if (n1 <= n2)
    printf("n1 = %d\nn2 = %d\n",n1,n2);
  else{
    
    aux = n1;
    n1 = n2;
    n2 = aux;

    printf("n1 = %d\nn2 = %d\n",n1,n2);
  }
  return 0;
}
