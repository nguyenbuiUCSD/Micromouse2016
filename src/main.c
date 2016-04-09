//
// This file is part of the GNU ARM Eclipse distribution.
// Copyright (c) 2014 Liviu Ionescu.
//

// ----------------------------------------------------------------------------

#include "Timer.h"
#include "Led.h"

// Keep the LED on for 2/3 of a second.
#define BLINK_ON_TICKS  (TIMER_FREQUENCY_HZ * 3 / 4)
#define BLINK_OFF_TICKS (TIMER_FREQUENCY_HZ - BLINK_ON_TICKS)

// ----- main() ---------------------------------------------------------------
int
main()
{

	// Initialize LED
	led_init();

	// Declaration of local variable
	uint32_t seconds = 0;

	// Infinite loop
	while (1)
    {
		LED1_ON;
     	timer_sleep(seconds == 0 ? TIMER_FREQUENCY_HZ : BLINK_ON_TICKS);

      	LED1_OFF;
      	timer_sleep(BLINK_OFF_TICKS);

		LED2_ON;
     	timer_sleep(seconds == 0 ? TIMER_FREQUENCY_HZ : BLINK_ON_TICKS);

      	LED2_OFF;
      	timer_sleep(BLINK_OFF_TICKS);

		LED3_ON;
     	timer_sleep(seconds == 0 ? TIMER_FREQUENCY_HZ : BLINK_ON_TICKS);

      	LED3_OFF;
      	timer_sleep(BLINK_OFF_TICKS);

		LED4_ON;
     	timer_sleep(seconds == 0 ? TIMER_FREQUENCY_HZ : BLINK_ON_TICKS);

      	LED4_OFF;
      	timer_sleep(BLINK_OFF_TICKS);

		LED5_ON;
     	timer_sleep(seconds == 0 ? TIMER_FREQUENCY_HZ : BLINK_ON_TICKS);

      	LED5_OFF;
      	timer_sleep(BLINK_OFF_TICKS);

		LED6_ON;
     	timer_sleep(seconds == 0 ? TIMER_FREQUENCY_HZ : BLINK_ON_TICKS);

      	LED6_OFF;
      	timer_sleep(BLINK_OFF_TICKS);

		ALL_LED_ON;
     	timer_sleep(seconds == 0 ? TIMER_FREQUENCY_HZ : BLINK_ON_TICKS);

      	ALL_LED_OFF;
      	timer_sleep(BLINK_OFF_TICKS);

      ++seconds;
    }
  // Infinite loop, never return.
}



#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------
