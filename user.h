/*============================================================================
 * Licencia:
 * Autor:
 * Fecha:
 *===========================================================================*/
/** @file
 * @brief	Contiene macros y definiciones de user
 * 
 * Aquí se definen macros, tipos de datos y se declaran las funciones y datos 
 * externos de user
 */
#ifndef USER_H
#define USER_H
/*==================[inclusiones]============================================*/
#include <stdint.h>     /* para las definiciones de uint8_t por ej.*/

/*==================[macros]=================================================*/
/* User Level #define Macros                                                 */
/* TODO: Los parámetros de user.c pueden ponerse aquí */
    
//Teclas
#define	TRIS_TEC1       TRISAbits.TRISA0
#define	PIN_TEC1        PORTAbits.RA0
#define	TRIS_TEC2       TRISAbits.TRISA1
#define	PIN_TEC2        PORTAbits.RA1
#define	TRIS_TEC3       TRISAbits.TRISA2
#define	PIN_TEC3        PORTAbits.RA2
#define	TRIS_TEC4       TRISAbits.TRISA3
#define	PIN_TEC4        PORTAbits.RA3
#define	TRIS_TEC5       TRISAbits.TRISA4
#define	PIN_TEC5        PORTAbits.RA4
#define	TRIS_TEC6       TRISAbits.TRISA5
#define	PIN_TEC6        PORTAbits.RA5

#define	TRIS_TEC7       TRISCbits.TRISC0
#define	PIN_TEC7        PORTCbits.RC0
#define	TRIS_TEC8       TRISCbits.TRISC1
#define	PIN_TEC8        PORTCbits.RC1
#define	TRIS_TEC9       TRISCbits.TRISC2
#define	PIN_TEC9        PORTCbits.RC2
#define	TRIS_TEC10       TRISCbits.TRISC3
#define	PIN_TEC10        PORTCbits.RC3

#define	TRIS_TEC11       TRISDbits.TRISD0
#define	PIN_TEC11        PORTDbits.RD0
#define	TRIS_TEC12       TRISDbits.TRISD1
#define	PIN_TEC12        PORTDbits.RD1

//Leds
#define	TRIS_LED1       TRISBbits.TRISB5
#define	PIN_LED1        PORTBbits.RB5
#define	TRIS_LED2       TRISBbits.TRISB4
#define	PIN_LED2        PORTBbits.RB4
#define	TRIS_LED3       TRISBbits.TRISB3
#define	PIN_LED3        PORTBbits.RB3
#define	TRIS_LED4       TRISBbits.TRISB2
#define	PIN_LED4        PORTBbits.RB2

#define	TRIS_LED5       TRISBbits.TRISB1
#define	PIN_LED5        PORTBbits.RB1
#define	TRIS_LED6       TRISBbits.TRISB0
#define	PIN_LED6        PORTBbits.RB0

#define	TRIS_LED7       TRISDbits.TRISD7
#define	PIN_LED7        PORTDbits.RD7
#define	TRIS_LED8       TRISDbits.TRISD6
#define	PIN_LED8        PORTDbits.RD6
#define	TRIS_LED9       TRISDbits.TRISD5
#define	PIN_LED9        PORTDbits.RD5
#define	TRIS_LED10       TRISDbits.TRISD4
#define	PIN_LED10        PORTDbits.RD4

#define	TRIS_LED11       TRISCbits.TRISC5
#define	PIN_LED11        PORTCbits.RC5
#define	TRIS_LED12       TRISCbits.TRISC4
#define	PIN_LED12        PORTCbits.RC4

//Alias de los Leds
#define	TRIS_LED_R      TRIS_LED1 
#define	PIN_LED_R       PIN_LED1
#define	TRIS_LED_AM     TRIS_LED2
#define	PIN_LED_AM      PIN_LED2 
#define	TRIS_LED_V      TRIS_LED3
#define PIN_LED_V       PIN_LED3 
#define	TRIS_LED_AZ     TRIS_LED4       
#define	PIN_LED_AZ      PIN_LED4

//Buzzer
#define	TRIS_SOUNDER    TRISCbits.TRISC0
#define	PIN_SOUNDER     PORTCbits.RC0

//Definición de notas
#define LA_4        1136
//...
#define Silencio    0

//Definición de Figuras
#define Semifusa    50
//...

/*==================[tipos de datos declarados por el usuario]===============*/

/*==================[declaraciones de datos externos]========================*/
//extern char datoUser; //Ejemplo

/*==================[declaraciones de funciones externas]====================*/
/* TODO: Los prototipos de User level (ej. InitApp) van aquí */
void appInit(void);     /* Inicializa las I/O y los periféricos */
void delayTMR0mSeg(uint16_t tmsegs); /* Demora una cantidad de mSegs basado en desbordes de TMR0 */

void temaNumero(uint8_t webiwabo);

void apretoTecla(uint8_t numerotecla);

void MaquinaTecla1(void);
void MaquinaTecla2(void);
void MaquinaTecla3(void);
void MaquinaTecla4(void);
void MaquinaTecla5(void);
void MaquinaTecla6(void);
void MaquinaTecla7(void);
void MaquinaTecla8(void);
void MaquinaTecla9(void);
void MaquinaTecla10(void);
void MaquinaTecla11(void);
void MaquinaTecla12(void);
/*==================[fin del archivo]========================================*/
#endif// USER_H
