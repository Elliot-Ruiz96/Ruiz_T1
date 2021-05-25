
#include <stdio.h>
#include "fsl_clock.h"
#include "fsl_gpio.h"
#include "fsl_port.h"
#include "fsl_common.h"

gpio_pin_config_t led_config = {
        kGPIO_DigitalOutput,
        1,
    };

#define PIN22        22u


int main(void) {

	 CLOCK_EnableClock(kCLOCK_PortB);

	 PORT_SetPinMux(PORTB, PIN22, kPORT_MuxAsGpio);

	 GPIO_PinInit(GPIOB, PIN22, &led_config);


    while(1) {

    	GPIO_PortClear(GPIOB, 1u << PIN22);

		printf("RED LED ON\n");


		GPIO_PortSet(GPIOB, 1u << PIN22);

		printf("RED LED OFF\n");


    }
    return 0 ;
}
