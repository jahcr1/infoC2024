#include <stdio.h>

struct location {
  char calle[30];
  int altura;
};

struct persona {
  int edad;
  struct location lugar_donde_vive;
};

struct perrro {
  int edad;
  char nombre[20];
  float altura;
  struct location lugar_donde_vive;
};

int main(void) {

  struct perrro bobi1 = {20, "luke"};
  struct perrro bobi2 = {20, "leia"};

  printf("%s\n", bobi1.nombre);
  printf("%s\n", bobi2.nombre);


  return 0;
}
