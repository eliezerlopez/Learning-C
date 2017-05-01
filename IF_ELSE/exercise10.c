/*
 * Eliezer Lopez Rodriguez
 * www.eliezerlopez.com
 * Twitter: @eliezerlopez
 * GitHub: /EliezerLopez
 *
 * Un equipo de baloncesto esta seleccionando jugadores.
 * Solo seleccionaran a un jugador si su edad esta comprendida entre 18 y 22 annos,
 * mide mas de 190cm y su peso esta entre 90 y 110kg.
 * Escribe un programa en C que lea la edad, la altura y el peso de un jugador
 * e indique si dicho jugador sera seleccionado.
 */

#include <stdio.h>

int main() {

  int annos;
  float altura, peso;

  printf("Que edad tienes?: ");
  scanf("%d",&annos);

  printf("Cuanto mides? (en cm): ");
  scanf("%f",&altura);

  printf("Cuanto pesas? (en kg): ");
  scanf("%f",&peso);

  if ((annos >= 18 && annos <= 22) && (altura>190) && (peso>=90 && peso <=110))
    puts("Jugador seleccionado! :D");
  else
    puts("Jugador no seleccionado.");

  return 0;
}
