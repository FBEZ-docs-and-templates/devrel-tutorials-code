#include <stdio.h>
#include "esp_log.h"

const char * TAG = "main";

void app_main(void)
{
    printf("*** Hello world! ***\n");
    ESP_LOGI(TAG,"This is an info\n");
    ESP_LOGW(TAG, "This is a warning\n");
    ESP_LOGE(TAG,"This is an error\n");
}