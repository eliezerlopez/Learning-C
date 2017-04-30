/*
 * Eliezer Lopez Rodriguez
 * www.eliezerlopez.com
 * Twitter: @eliezerlopez
 * GitHub: /EliezerLopez
 *
 * Realiza un programa en C que nos diga si dos numeros son o no distintos.
  */

#include <stdio.h>

int main() {

  int number1, number2;

  printf("Number 1: ");
  scanf("%d",&number1);

  printf("Number 2: ");
  scanf("%d",&number2);

  if (number1 == number2)
    puts("The numbers are equal.");
  else
    puts("The numbers are different.");

  return 0;
}
