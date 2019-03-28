#ifndef USB_LOG_H_
#define USB_LOG_H_

#include "log.h"
#include <stdarg.h>

LogResult_t usb_log_init(Log_t *log);
LogResult_t usb_log_write(Log_t * log, const char *string, uint8_t len);

void v_log_task(void *pvParameters);

#endif 