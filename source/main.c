#include <stdio.h>
#include <stdint.h>
#include "MK64F12.h"

int main(void) {

	/*SIM->SCGC5 = 0x400;
	PORTB->PCR[21] = 0x00000100;
	GPIOB->PDOR = 0x00200000;
	GPIOB->PDDR = 0x00200000;
	PORTB->PCR[22] = 0x00000100;
	GPIOB->PDOR = 0x00400000;
	GPIOB->PDDR = 0x00400000;*/
	SIM->SCGC5 = 0x2000;
	PORTE->PCR[26] = 0x00000100;
	GPIOE->PDOR = 0x004000000;
	GPIOE->PDDR = 0x004000000;

    while(1) {

		/*GPIOB->PDOR = 0;
		printf("RED LED ON\n");
		GPIOB->PDOR= 0x00400000;
		printf("RED LED OFF\n");
		GPIOB->PDOR = 0;
		printf("BLUE LED ON\n");
		GPIOB->PDOR= 0x00200000;
		printf("BLUE LED OFF\n");*/
    	GPIOE->PDOR = 0;
    	printf("GREEN LED ON\n");
    	GPIOE->PDOR= 0x04000000;
    	printf("GREEN LED OFF\n");

    }
    return 0 ;
}
