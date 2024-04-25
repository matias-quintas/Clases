# include <stdio.h> 
#define p printf 
#define s scanf 

int main (void){ 

int anio ; 
p("engresa un  &anio:"); 
s("%d", &anio); 
anio%= 4;

if(anio ==0) //como  calculo que el año sea biciesto o no
{
  p("el anio %d ; ingresado es bisiesto");
} else {
p("el anio %d ; no es bisissto");
}


 
 
}