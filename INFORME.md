Se asume que se siguieron todos los pasos de la tarea 0

Primero que todo tenemos que meternos a la carpeta y Kernel e irnos al archivo syscall y añadirle lo siguiente:

//
#define SYS_getppid 22
//

22 es el próximo número no utilizado por el archivo, reemplazar en por el siguiente no utlizado de ser necesario

Ahora en el archivo proc.h declaramos la función sys_getppid

Luego dentro del archivo proc.c debemos agregar la implementación de la función sys_getppid()

//
struct proc *p = myproc();

return p -> parent ? p -> parent -> pid : 0;
//

Esto obtiene el proceso actual, y si tiene un padre, devuelve su PID

Luego, dentro de syscall.c agregamos el prototipo de la función

Después creamos un archivo que será la envoltura y que hará el llamado al sistema

Creamos un archivo para poder testear

//
#include "kernel/types.h"
#include "user/user.h"

int
main(void)
{
    int ppid = getppid();
    printf("Parent PID: %d\n", ppid);
    exit(0);
}
//

Finalmente compilamos xv6 y podemos probar que funcione ejecutando el programa que invoca el getppid
