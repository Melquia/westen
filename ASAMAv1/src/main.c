/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
 /**
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */
 #include "FreeRTOS.h"
 #include "task.h"
 #include "FreeRTOSConfig.h"
#include <asf.h>
///variables
xTaskHandle hdrTestTsk;
///Prototypes
void vTestTask( void * pvParemeters);
/*
*\brief This is the main function needed for the tool chain
*\param No parameter supported
*\returns It should not return anything
*/
int main (void)
{
	// Insert system clock initialization code here (sysclk_init()).

	board_init();
	// Insert application code here, after the board has been initialized.
	//create task, timers, queues, etc. 
	xTaskCreate(vTestTask,"TestTask",configMINIMAL_STACK_SIZE * 2,NULL,tskIDLE_PRIORITY,&hdrTestTsk);

	// Start the scheduler.
	vTaskStartScheduler();
}

/*
\brief This task is not defined yet, it is used for test purposes.
\param Parameters not defined yet.
*/
void vTestTask( void * pvParemeters)
{
	Assert(pvParemeters);
	//Here we can make some configurations needed previous to run the task.
	for (;;)
	{
		
	}
}
