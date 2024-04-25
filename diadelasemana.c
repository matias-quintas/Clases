#include <stdio.h> 
#define p printf 
#define s scanf 

int main(void)
{
    int dia;
    p("Ingrese un dia:");
    s("%d", &dia);

    switch (dia)
    {
        case 1: p("Lunes");break;
        case 2: p("Martes");break;
        case 3: p("Miercoles");break;
        case 4: p("Jueves");break;
        case 5: p("Viernes");break;
        case 6: p("Sabado");break;
        case 7: p("Domingo");break;
        default:  p("No registrado");break;
    }

    return 0;  
}