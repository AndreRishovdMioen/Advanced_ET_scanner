#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    int i = 0;
    while(i < 10) {
        printf("Scanning for aliens...\n");
        vTaskDelay(pdMS_TO_TICKS(5000));
        i++;
    }
    printf("No aliens found\n");
}
