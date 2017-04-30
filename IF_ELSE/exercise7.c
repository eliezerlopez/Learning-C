/*
 * Eliezer Lopez Rodriguez
 * www.eliezerlopez.com
 * Twitter: @eliezerlopez
 * GitHub: /EliezerLopez
 *
 * Realiza un programa en C que dados dos numeros, diga cual es menor.
  */

#include <stdio.h>

int main() {

  int number1, number2;

  printf("Number 1: ");
  scanf("%d",&number1);

  printf("Number 2: ");
  scanf("%d",&number2);

  if (number1 < number2)
    printf("The smaller number is %d.\n", number1);
  else
    printf("The smaller number is %d.\n", number2);

  return 0;
}
