/*
 * Eliezer Lopez Rodriguez
 * www.eliezerlopez.com
 * Twitter: @eliezerlopez
 * GitHub: /EliezerLopez
 *
 * Realiza un programa en C que nos diga si un numero es multipli de 3 y de 5.
  */

#include <stdio.h>

int main() {

  int number;

  printf("Give me a number: ");
  scanf("%d",&number);

  if (((number%3)==0) && ((number%5)==0))
    puts("The number is a multiple of 3 and 5.");
  else
    puts("The number is not a multiple of 3 and 5.");

  return 0;
}
