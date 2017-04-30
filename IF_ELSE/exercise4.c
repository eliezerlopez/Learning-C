/*
 * Eliezer Lopez Rodriguez
 * www.eliezerlopez.com
 * Twitter: @eliezerlopez
 * GitHub: /EliezerLopez
 *
 * Realiza un programa en C que nos diga si un numero esta comprendido entre 5 y 10 o entre 20 y 30.
  */

#include <stdio.h>

int main() {

  int number;

  printf("Give me a number: ");
  scanf("%d",&number);

  if ((number >= 5) && (number <= 10))
    puts("The number is between 5 and 10.");
  else if((number >= 20) && (number <= 30))
    puts("The number is between 20 and 30.");
  else
    puts("The number is not in any set range.");

  return 0;
}
