#include <stdio.h>
#include <stdint.h>
#include "MK64F12.h"

#define DELAY 1000000

void delay(uint32_t delay);

int main(void) {

 	SIM->SCGC5 = 0x400;
	SIM->SCGC5 |= 0x2000;
	PORTB->PCR[21] = 0x00000100;
	PORTB->PCR[22] = 0x00000100;
	PORTE->PCR[26] = 0x00000100;
	GPIOB->PDOR = 0x00200000;
	GPIOB->PDDR = 0x00200000;
	GPIOB->PDOR |= 0x00400000;
	GPIOB->PDDR |= 0x00400000;
	GPIOE->PDOR = 0x04000000;
	GPIOE->PDDR = 0x04000000;

    while(1) {

    	GPIOB->PDOR = 0;
    	GPIOB->PDOR = 0x00400000;
    	printf("BLUE LED ON\n");
    	delay(DELAY);
    	GPIOB->PDOR = 0x00600000;
     	printf("BLUE LED OFF\n");

    	delay(DELAY);

    	GPIOB->PDOR = 0;
    	GPIOB->PDOR = 0x00200000;
		printf("RED LED ON\n");
		delay(DELAY);
		GPIOB->PDOR = 0x00600000;
		printf("RED LED OFF\n");

		delay(DELAY);

    	GPIOE->PDOR = 0;
    	printf("GREEN LED ON\n");
    	delay(DELAY);
    	GPIOE->PDOR= 0x04000000;
    	printf("GREEN LED OFF\n");

    	delay(DELAY);

    }
    return 0 ;
}

void delay (uint32_t delay){

	volatile uint32_t i;
	for (i = 0; i < DELAY; ++i)
	{

	}

}
