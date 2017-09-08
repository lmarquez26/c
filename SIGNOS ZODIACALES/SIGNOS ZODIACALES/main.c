//
//  main.c
//  SIGNOS ZODIACALES
//
//  Created by Luis Márquez on 07/09/17.
//  Copyright © 2017 Luis Márquez. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[])
{
    // insert code here...
    int dia=0;
    int mes=0;
    printf("Escribe tu dia de nacimiento\n: ");
    scanf("%d",&dia);
    printf("Escribe tu mes de nacimiento: ");
    scanf("%d",&mes);
    printf("dia %d del mes %d\n",dia,mes);
    
    
    if( mes>=1 && mes<=12 ){
        
        if (mes==1) {
            printf("ENERO\n");
            if( dia>=1 && dia<=31){
                if (dia>=20)
                    printf("ACUARIO\n");
                else
                    printf("CAPRICORNIO\n");
            }
            else
                printf("Dia invalido\n");
        }
        else if (mes==2){
            printf("FEBRERO\n");
            if( dia>=1 && dia<=28){
                if (dia>=20 )
                    printf("PICIS\n");
                else
                    printf("ACUARIO\n");
            }
            else
                printf("Dia invalido\n");
            
            
        }
        else if (mes==3){
            printf("MARZO\n");
            if( dia>=1 && dia<=31){
                if (dia>=20)
                    printf("ARIES\n");
                else
                    printf("PICIS\n");
            }
            else
                printf("Dia invalido\n");
            
            
            
        }
        else if(mes==4){
            printf("ABRIL\n");
            if( dia>=1 && dia<=30){
                if (dia>=20)
                    printf("TAURO\n");
                else
                    printf("ARIES\n");
            }
            else
                printf("Dia invalido\n");
            
        }
        else if(mes==5){
            printf("MAYO\n");
            if( dia>=1 && dia<=31){
                if (dia>=20)
                    printf("GEMINIS\n");
                else
                    printf("TAURO\n");
            }
            else
                printf("Dia invalido\n");
            
        }
        else if(mes==6){
            printf("JUNIO\n");
            if( dia>=1 && dia<=30){
                if (dia>=20)
                    printf("CANCER\n");
                else
                    printf("GEMINIS\n");
            }
            else
                printf("Dia invalido\n");
            
        }
        else if(mes==7){
            printf("JULIO\n");
            if( dia>=1 && dia<=31){
                if (dia>=20)
                    printf("LEO\n");
                else
                    printf("GEMINIS\n");
            }
            else
                printf("Dia invalido\n");
            
        }
        else if(mes==8){
            printf("AGOSTO\n");
            if( dia>=1 && dia<=31){
                if (dia>=20)
                    printf("VIRGO\n");
                else
                    printf("LEO\n");
            }
            else
                printf("Dia invalido\n");
            
        }
        else if (mes==9){
            printf("SEPTIEMBRE\n");
            if( dia>=1 && dia<=30){
                if (dia>=20)
                    printf("LIBRA\n");
                else
                    printf("VIRGO\n");
            }
            else
                printf("Dia invalido\n");
            
        }
        else if (mes==10){
            printf("OCTUBRE\n");
            if( dia>=1 && dia<=31){
                if (dia>=20)
                    printf("SCORPIO\n");
                else
                    printf("LIBRA\n");
            }
            else
                printf("Dia invalido\n");
            
        }
        else if(mes==11){
            printf("NOVIEMBRE\n");
            if( dia>=1 && dia<=30){
                if (dia>=20)
                    printf("SAGITARIO\n");
                else
                    printf("SCORPIO\n");
            }
            else
                printf("Dia invalido\n");
            
        }
        else{// if (mes==12){
            printf("DICIEMBRE\n");
            if( dia>=1 && dia<=31){
                if (dia>=20)
                    printf("ACUARIO\n");
                else
                    printf("SAGITARIO\n");
            }
            else
                printf("Dia invalido\n");
            
        }
        
    }
    else{
        printf("mes invalido\n");
    }
    
    
    
    
    
    return 0;
}
