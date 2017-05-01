/*
 * Eliezer Lopez Rodriguez
 * www.eliezerlopez.com
 * Twitter: @eliezerlopez
 * GitHub: /EliezerLopez
 *
 * Si un empleado ha realizado horas extra, su sueldo se incrementa en 250 euros.
 * Realiza un programa en C que visualice el nuevo sueldo de unempleado, preguntandole previsamente cual es su sueldo y si ha hecho horas extras.
 */

#include <stdio.h>

int main() {

  float sueldo;
  int horasExtra = 0; // 1 true, 0 false

  printf("Sueldo: ");
  scanf("%f",&sueldo);

  printf("Has realizado horas extra?\n1: si\n0: no\n");
  scanf("%d",&horasExtra);

  if (horasExtra == 1)
    sueldo += 250;

  printf("Sueldo final: %.2f euros.\n",sueldo);

  return 0;
}
