/*
 * Eliezer Lopez Rodriguez
 * www.eliezerlopez.com
 * Twitter: @eliezerlopez
 * GitHub: /EliezerLopez
 *
 * Realiza un programa en C que dada la temperatura del agua,
 * nos diga si esta se encuentra en estado solido, liquido o gaseoso.
 */

#include <stdio.h>

int main() {

  float temp;

  printf("Temperatura del agua: ");
  scanf("%f",&temp);

  if (temp <= 0)
    puts("Estado: solido.");
  else if (temp < 100)
    puts("Estado: liquido.");
  else
    puts("Estado: gas.");

  return 0;
}
