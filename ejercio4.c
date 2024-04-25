#include <stdio.h> 
#define p printf 
#define s scanf 

int main(){
    int num, cms, mts, kms;
    s("%d", &num);

    if (num>=0)
    {
       kms=num/100000;
       mts= (num-(kms*100000))/100;
       cms= num-(kms*100000)-(mts*100);
       if (mts>99)
       {
        kms
       }
       
       p("%d kms, %d mts y %d cms", kms, mts, cms);
    } else {
        p("numero no valido");
    }
    
}