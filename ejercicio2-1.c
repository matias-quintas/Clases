#include <stdio.h> 
#define p printf 
#define s scanf 

int main(){
    int edad, ingresos;
    p("ingrese su edad:");
    s("%d", &edad);
    p("¿De cuanto son sus ingresos?:");
    s("%d", &ingresos);

    if (edad<=21)
        p("Sos menor de edad, anda a estudiar.");
    else if (ingresos<80000)
        p("No tenes que pagar, sos pobre");
    else
        p("Sos pollo");

}