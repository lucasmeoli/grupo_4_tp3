/*
 * ao_led.h
 *
 *  Created on: Jun 30, 2024
 *      Author: lpmeoli
 */

#ifndef AO_LED_H_
#define AO_LED_H_

/********************** CPP guard ********************************************/
#ifdef __cplusplus
extern "C" {
#endif

/********************** inclusions *******************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include "priority_queue.h"
#include "main.h"
#include "cmsis_os.h"

/********************** macros ***********************************************/

/********************** typedef **********************************************/

typedef enum {
	AO_LED_MESSAGE_RED_LED_ON,
	AO_LED_MESSAGE_GREEN_LED_ON,
	AO_LED_MESSAGE_BLUE_LED_ON,
	AO_LED_MESSAGE__N,
} ao_led_message_t;

typedef struct {
	priority_queue_handle_t * hqueue;
} ao_led_handle_t;

/********************** external data declaration ****************************/

/********************** external functions declaration ***********************/

bool ao_led_send(ao_led_handle_t* hao, item_t item);

bool ao_led_init(ao_led_handle_t* hao);

/********************** End of CPP guard *************************************/
#ifdef __cplusplus
}
#endif

#endif /* AO_LED_H_ */
/********************** end of file ******************************************/

