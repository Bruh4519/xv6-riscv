#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
    char *addr = sbrk(4096);  

    for (int i = 0; i < 4096; i++) {
        addr[i] = 'A';  
    }
    if (mprotect(addr, 4096) == -1) {
        printf("mprotect falló\n");
        return 1;
    }

    addr[0] = 'B';  
    printf("Intento de escribir en la dirección protegida: %c\n", addr[0]);

    if (munprotect(addr, 4096) == -1) {
        printf("munprotect falló\n");
        return 1;
    }

    addr[0] = 'B';  
    printf("Valor después de restaurar los permisos de escritura: %c\n", addr[0]);

    return 0;
}
