/*
 * Eliezer Lopez Rodriguez
 * www.eliezerlopez.com
 * Twitter: @eliezerlopez
 * GitHub: /EliezerLopez
 *
 * C program that say if a number is positive or not.
  */

int main() {

  int number;

  printf("Write a number: ");
  scanf("%d",&number);

  if (number == 0)
    puts("The number is zero");
  else{
    if (number > 0) puts("The number is positive! :)");
    else puts("The number is negative :()");
  }
  
  return 0;
}
