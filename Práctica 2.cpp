#include<stdio.h>
int main () {
int x; char rep ; float t = 0, y, z;
do {
printf ( " Opci�n de Digite: \n 1 = Suma \n 2 = Resta \n 3 = Multiplicaci�n \n 4 = Divisi�n \n " ); scanf ( " % d " , & x);
printf ( " dato 1: \ n " ); scanf ( " % f " , &y);
printf ( " dato 2: \ n " ); scanf ( " % f " , &z);

switch (x) {
    case 1 : t = y + z; printf ( " r: % f " , t); break;
    case 2 : t = y-z; printf ( " r: % f " , t); break;
    case 3 : t = y * z; printf ( " respuesta: % f " , t); break ;
    case 4 : while (z == 0 ) {
printf ( " la cantidad 2 debe ser diferente de 0. \n Intente de nuevo \n " ); printf ( " dato 2: \n " ); scanf ( " % f " , &z); } t = y / z; printf ( " r: % f " , t); break ;
default : printf ( " opc invalida \n " ); } printf ( "� Desea hacer otra operaci�n? S N \n " );
rep=getch();}

while ((rep == ' S ' ) || (rep == ' s ' )); return 0 ; }
