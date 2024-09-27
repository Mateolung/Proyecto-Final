/*============================================================================
 * Licencia:
 * Autor:
 * Fecha:
 *===========================================================================*/
/** @file
 * @brief	Contiene las definiciones de user
 * 
 * Aquí se encuentra la implementación de users, los defines, macros, 
 * datos internos y externos, declaraciones y definiciones de funciones
 * internas y definiciones de funciones externas.
 */

/*==================[inlcusiones]============================================*/
#include <xc.h>         /* Archivo de Encabezados General XC8 */
#include <stdint.h>     /* para las definiciones de uint8_t por ej.*/

#include "system.h"     /* Funciones/Parametros System, como conf de osc/perif */
#include "user.h"       /* Funciones/Parametros User, como InitApp */
#include "uart.h"       /* Funciones/Parametros Uart */
#include "display.h"    /* Funciones/Parametros Display */
#include "tick.h"       /* Funciones/Parametros Tick */

/*==================[definiciones y macros]==================================*/

/*==================[definiciones de datos internos]=========================*/

/*==================[definiciones de datos externos]=========================*/
//char datoUser; //Ejemplo

/*==================[declaraciones de funciones internas]====================*/
//static void funcUser(void); //Ejemplo

/*==================[definiciones de funciones internas]=====================*/
//static void funcUser(void){ //Ejemplo
//}; 

void apretoTecla(uint8_t tecla){
    switch (tecla){
        case 1:
            if(PIN_TEC1 == 0){
                uartWriteByte(1);
            }
        break;
        case 2:
            if(PIN_TEC2 == 0){
                uartWriteByte(2);
            }
        break;
        case 3:
            if(PIN_TEC3 == 0){
                uartWriteByte(3);
            }
        break;
        case 4:
            if(PIN_TEC4 == 0){
                uartWriteByte(4);
            }
        break;
        case 5:
            if(PIN_TEC5 == 0){
                uartWriteByte(5);
            }
        break;
        case 6:
            if(PIN_TEC6 == 0){
                uartWriteByte(6);
            }
        break;
        case 7:
            if(PIN_TEC7 == 0){
                uartWriteByte(7);
            }
        break;
        case 8:
            if(PIN_TEC8 == 0){
                uartWriteByte(8);
            }
        break;
        case 9:
            if(PIN_TEC9 == 0){
                uartWriteByte(9);
            }
        break;
        case 10:
            if(PIN_TEC10 == 0){
                uartWriteByte(10);
            }
        break;
        case 11:
            if(PIN_TEC11 == 0){
                uartWriteByte(11);
            }
        break;
        case 12:
            if(PIN_TEC12 == 0){
                uartWriteByte(12);
            }
        break;
        default:
            displayWrite(0b01111000); 
        break;
    }
}



/*==================[definiciones de funciones externas]=====================*/
/**
 * @brief	Inicializa Ports, Periféricos e Interrupciones
 * @return	Nada
 */
void appInit(void) {
    /* TODO: Inicializar Ports/Periféricos/Interrupciones */

    /* Configura funciones analógicas y dirección de los Ports de I/O */
    ANSEL = 0;
    ANSELH = 0;
    
    TRIS_TEC1  = 1;
    TRIS_TEC2  = 1;
    TRIS_TEC3  = 1;
    TRIS_TEC4  = 1;
    TRIS_TEC5  = 1;
    TRIS_TEC6  = 1;
    TRIS_TEC7  = 1;
    TRIS_TEC8  = 1;
    TRIS_TEC9  = 1;
    TRIS_TEC10  = 1;
    TRIS_TEC11  = 1;
    TRIS_TEC12  = 1;


    TRIS_LED1    =0;
    TRIS_LED2    =0;
    TRIS_LED3    =0;
    TRIS_LED4    =0;
    TRIS_LED5    =0;
    TRIS_LED6    =0;
    TRIS_LED7    =0;
    TRIS_LED8    =0;
    TRIS_LED9    =0;
    TRIS_LED10   =0;
    TRIS_LED11   =0;
    TRIS_LED12   =0;
    
    
    tickInit();
    uartInit();
    displaytInit();
    __delay_ms(100); //Espera que se estabilice la fuente
    
    /* TODO: Habilita Interrupciones si es necesario*/
    //PEIE = 1;
    GIE = 1;
    
    
}

/*==================[fin del archivo]========================================*/
