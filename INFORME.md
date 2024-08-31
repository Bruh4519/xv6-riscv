Para realizar el proceso, es necesario abrir la powershell y después escribir wsl para meterte al ubuntu de tu PC
Luego de esto corres comandos para asegurar que tienes todo el día, los comandos serían:

sudo apt update
sudo apt upgrade
sudo apt install git build-essential qemu-system

Luego de asegurarnos que todo esté al día, ponemos el siguiente comando para poder clonar xv6:

git clone https://github.com/otrab/xv6-riscv.git

Luego debemos ingresar a la carpeta clonada con el siguiente comando:

cd xv6-riscv

Luego podemos compilar y empezar a utiliza xv6, esto lo hacemos utilizando el siguiente comando:

make qemu

Comprobamos que esta funciona usando comandos como

ls
echo Hola mundo

Para poder salir de xv6 tenemos que tocas las teclas Ctrl + A, soltamos Ctrl y mientras mantemos pulsada la A apretamos también X
Listo! Puedes instalar y correr xv6 correctamente
Se adjuntan imagenes en webc donde se muestra que el programa corre
