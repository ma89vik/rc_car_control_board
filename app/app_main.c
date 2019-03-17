#include "app_main.h"

#include "FreeRTOS.h"
#include "task.h"

#include "gpio.h"

#include "serial_stm32_hal.h"
#include "car_control.h"
#include "observer.h"
#include "log.h"
#include "usb_log.h"

#define CAR_CONTROL_TASK_PRIORITY     ( tskIDLE_PRIORITY + 1 )



void app_main()
{

   LogConfig_t logConfig = {
       .init = usb_log_init,
   };

   
   log_init(&logConfig);


   // xTaskCreate( vCarControlTask, (signed char*)"Car Control", configMINIMAL_STACK_SIZE, NULL, CAR_CONTROL_TASK_PRIORITY , NULL );

    xTaskCreate( v_observer_task, (signed char*)"Observer", configMINIMAL_STACK_SIZE, NULL, CAR_CONTROL_TASK_PRIORITY , NULL );
    
}