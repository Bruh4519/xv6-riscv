// En user/test_priority.c
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void process_work(int i) {
  printf("Ejecutando proceso %d\n", i);
  sleep(5);  // Simula un trabajo de proceso
  exit(0);
}

int main(void) {
  int i;
  for(i = 0; i < 20; i++) {
    if(fork() == 0) {
      process_work(i);
    }
  }

  for(i = 0; i < 20; i++) {
    wait(0);  // Espera a que todos los procesos hijos terminen
  }

  exit(0);
}

