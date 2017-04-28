/*
 * Eliezer Lopez Rodriguez
 * www.eliezerlopez.com
 * Twitter: @eliezerlopez
 * GitHub: /EliezerLopez
 *
 * C program that say if a number is pair or not.
  */

#include <stdio.h>

int main() {

  int number;

  printf("Write a number: ");
  scanf("%d",&number);

  if ((number%2)==0)
    puts("The number is pair");
  else
    puts("The number is odd");

  return 0;
}
