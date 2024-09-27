/*============================================================================
 * Licencia:
 * Autor:
 * Fecha:
 *===========================================================================*/
/** @file
 * @brief	Contiene la función principal
 * 
 * Aquí se encuentra la implementación de la función principal
 */
/*==================[inlcusiones]============================================*/
#include <xc.h>         /* Archivo de Encabezados General XC8 */
#include <stdint.h>     /* Para las definiciones de uint8_t por ej.*/
#include "system.h"     /* Funciones/Parametros System, como osc/peripheral config */
#include "user.h"       /* Funciones/Parametros User, como InitApp */
#include "uart.h"       /* Funciones/Parametros Uart */
#include "display.h"    /* Funciones/Parametros Display */
#include "tick.h"       /* Funciones/Parametros Tick */
#include <stdio.h>      /* Archivo de Encabezados StdIO */

/*==================[definiciones y macros]==================================*/

/*==================[definiciones de datos internos]=========================*/
typedef enum{Tecla1, Apretada1, Suelta1} estadoMEF_t;
estadoMEF_t EstadoAct1;
typedef enum{Tecla2, Apretada2, Suelta2} estadoMEF_t;
estadoMEF_t EstadoAct2;
typedef enum{Tecla3, Apretada3, Suelta3} estadoMEF_t;
estadoMEF_t EstadoAct3;
typedef enum{Tecla4, Apretada4, Suelta4} estadoMEF_t;
estadoMEF_t EstadoAct4;
typedef enum{Tecla5, Apretada5, Suelta5} estadoMEF_t;
estadoMEF_t EstadoAct5;
typedef enum{Tecla6, Apretada6, Suelta6} estadoMEF_t;
estadoMEF_t EstadoAct6;
typedef enum{Tecla7, Apretada7, Suelta7} estadoMEF_t;
estadoMEF_t EstadoAct7;
typedef enum{Tecla8, Apretada8, Suelta8} estadoMEF_t;
estadoMEF_t EstadoAct8;
typedef enum{Tecla9, Apretada9, Suelta9} estadoMEF_t;
estadoMEF_t EstadoAct9;
typedef enum{Tecla10, Apretada10, Suelta10} estadoMEF_t;
estadoMEF_t EstadoAct10;
typedef enum{Tecla11, Apretada11, Suelta11} estadoMEF_t;
estadoMEF_t EstadoAct11;
typedef enum{Tecla12, Apretada12, Suelta12} estadoMEF_t;
estadoMEF_t EstadoAct12;
tick_t tInicio; 
/*==================[definiciones de datos externos]=========================*/
uint8_t llegadaPuerto;
uint8_t llegadaOtravez;
uint8_t boya1, boya2, numeroTecla, numero;

/*==================[declaraciones de funciones internas]====================*/


/*
 *NUMERO DE TECLA Y EVENTO
 * EVENTO: 0 SUELTA
 *         1 APRETADA
 */

/*==================[funcion principal]======================================*/
void main(void) {
    /* TODO: Agregar el Cod1iogo de la Aplicación aquí */
    uint8_t numero = 0;
    
    appInit();          /* Inicializa I/O y Periféricos de la aplicación */
    displaytInit();
    displayWrite(numero);       //Muestra un 0

    PIN_LED_V = 0;              //Prende led
    PIN_LED_R = 0;              //Apaga led    
    PIN_LED_AM = 0;             //Apaga led    
    PIN_LED_AZ = 0;             //Apaga led    
    
    EstadoAct1 = Suelta1;
    EstadoAct2 = Suelta2;
    EstadoAct3 = Suelta3;
    EstadoAct4 = Suelta4;
    EstadoAct5 = Suelta5;
    EstadoAct6 = Suelta6;
    EstadoAct7 = Suelta7;
    EstadoAct8 = Suelta8;
    EstadoAct9 = Suelta9;
    EstadoAct10 = Suelta10;
    EstadoAct11 = Suelta11;
    EstadoAct12 = Suelta12;
    char Tecla;
    while (1) {
        
        llegadasPuerto();
        
        for(Tecla=0;Tecla<12;++)
            
        switch(Tecla){
            
            case 1:
                MaquinaTecla1();
            break;
                
            case 2:
                MaquinaTecla2();
            break;
                
            case 3:
                MaquinaTecla3();
            break; 
                
            case 4:
                MaquinaTecla4();
            break;
                
            case 5:
                MaquinaTecla5();
            break;
                
            case 6:
                MaquinaTecla6();
            break;
                
            case 7:
                MaquinaTecla7();
            break;
                
            case 8:
                MaquinaTecla8();
            break;
                
            case 9:
                MaquinaTecla9();
            break;
                
            case 10:
                MaquinaTecla10();
            break;
                
            case 11:
                MaquinaTecla11();
            break;
            
            case 12:
                MaquinaTecla12();
            break;
            
        }
        
        
        if(uartReadByte(numero))
        {
            switch(numero)
            {
                case 1:
                    PIN_LED1 = !PIN_LED1;
                    break;
                case 2:
                    PIN_LED2 = !PIN_LED2;
                    break;
                case 3:
                    PIN_LED3 = !PIN_LED3;
                    break;
                case 4:
                    PIN_LED4 = !PIN_LED4;
                    break;
                case 5:
                    PIN_LED5 = !PIN_LED5;
                    break;
                case 6:
                    PIN_LED6 = !PIN_LED6;
                    break;
                case 7:
                    PIN_LED7 = !PIN_LED7;
                    break;
                case 8:
                    PIN_LED8 = !PIN_LED8;
                    break;
                case 9:
                    PIN_LED9 = !PIN_LED9;
                    break;
                case 10:
                    PIN_LED10 = !PIN_LED10;
                    break;
                case 11:
                    PIN_LED11 = !PIN_LED11;
                    break;
                case 12:
                    PIN_LED12 = !PIN_LED12;
                    break;
                default:
                    displayWrite(0b01010101); 
                    break;
            }
        }
        //MonitorTeclado();
        
    }

}


void MaquinaTecla1(void){
    switch (boya2){
            case 0:
                
                
                break;
                
            case 1:
                numero = 1;
                break;
    
    }
}
void MaquinaTecla2(void){
    
}
void MaquinaTecla3(void){
    
}
void MaquinaTecla4(void){
    
}
void MaquinaTecla5(void){
    
}
void MaquinaTecla6(void){
    
}
void MaquinaTecla7(void){
    
}
void MaquinaTecla8(void){
    
}
void MaquinaTecla9(void){
    
}
void MaquinaTecla10(void){
    
}
void MaquinaTecla11(void){
    
}
void MaquinaTecla12(void){
    
}



void llegadasPuerto(void){
    
    while(uartReadByte(llegadaPuerto)==1){
        
        boya1 = uartReadByte(llegadaPuerto);
        numeroTecla = llegadaPuerto;
        
        
        
        if (uartReadByte(llegadaPuerto)==1){
            boya2 = llegadaPuerto;
        }
    }
    
}


/*
 
 * MAQUINA DE ESTADOS PARA LAS TECLAS
 AÑADIR UN SWITCH PARA QUE SELECCIONE EL ESTADO(MAQUINA DE ESTADOS) EN EL QUE SE ENCUENTRA.
 EL ESTADO VA A INDICAR CUANDO LE VIENE O NO UN NUMERO EN ESPECIFICO POR PUERTO SERIE.
 ESE NUMERO SERA EL DE LA TECLA APRETADA Y SU ESTADO PROPIO.
 DE ESA MANERA ESPERA AL CAMBIO DE ESTADO PARA ENVIAR POR PUERTO SERIE A QUE SE PRENDAN LOS LEDS.
 

 
 
 */

/*==================[definiciones de funciones internas]=====================*/

/*==================[definiciones de funciones externas]=====================*/

/*==================[fin del archivo]========================================*/