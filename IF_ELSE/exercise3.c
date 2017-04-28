/*
 * Eliezer Lopez Rodriguez
 * www.eliezerlopez.com
 * Twitter: @eliezerlopez
 * GitHub: /EliezerLopez
 *
 * C program that say if a student passed the test or not.
  */

#include <stdio.h>

int main() {

  int number;

  printf("Write a result: ");
  scanf("%d",&number);

  if (number<5)
    puts("You didn't pass the exam... study!");
  else
    puts("You passed the exam, congratulations!");

  return 0;
}
