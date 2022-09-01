// una aplicacion para tomar notas
// ahora usando funciones

#include <stdio.h>
#include <stdlib.h>

void print_menu() {
  system("clear");
  printf("1) Agregar nota\n");
  printf("2) Ver notas\n");
  printf("3) Borrar todas las notas\n");
  printf("4) Salir\n");
}

void save_note() {
  FILE *fp;
  fp = fopen("notas.txt", "a");
  printf("Ingrese su nota: ");
  char note[100];
  fgets(note, 100, stdin);
  fprintf(fp, "%s\n", note);
  fclose(fp);
  return;
}
void read_notes(){
  FILE *fp;
  int c;
  fp = fopen("notas.txt", "r");
  while((c = fgetc(fp)) != EOF) {
    putchar(c);
  }
  printf("Presione cualquier tecla para continuar\n");
  getchar();
  fclose(fp);
  return;
}
void delete_notes(){
  FILE *fp;
  fp = fopen("notas.txt", "w");
  fclose(fp);
  printf("Notas borradas!\n");
  printf("Presione cualquier tecla para continuar\n");
  getchar();
  return;
}

int main(void){
  int choice;
  while (1) {
    print_menu();
    scanf("%d", &choice);
    getchar();
    switch (choice){
      case 1:
      save_note();
      break;
      case 2:
      read_notes();
      break;
      case 3:
      delete_notes();
      break;
      case 4:
      exit(0);
      break;
      default:
      printf("Opcion Invalida\n");
      break;

    }
  }
  return 0;
}
