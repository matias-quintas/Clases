#include <stdio.h> 
#define p printf 
#define s scanf 

int main(){
    int rentaMensual, impuesto;
    p("ingrese renta:");s("%d", rentaMensual);

    if (rentaMensual>=0 && rentaMensual<10000){
        impuesto = rentaMensual * 0.05;
        p("Impuesto: %d + 5%c = ", rentaMensual, 37);
    } else if (rentaMensual<35000){
        impuesto = rentaMensual * 0.15;
        p("Impuesto: %d + 15%c = ", rentaMensual, 37);
    } else if (rentaMensual<70000){
        impuesto = rentaMensual * 0.20;
        p("Impuesto: %d + 20%c = ", rentaMensual, 37);
    } else if (rentaMensual<1000000){
        impuesto = rentaMensual * 0.30;
        p("Impuesto: %d + 30%c = ", rentaMensual, 37);
    } else {
        impuesto = rentaMensual * 0.45;
        p("Impuesto: %d + 45%c = ", rentaMensual, 37);
    }

return 0;  
}