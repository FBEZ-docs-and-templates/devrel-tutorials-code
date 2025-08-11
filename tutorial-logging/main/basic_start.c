#include <stdio.h>
#include "sdkconfig.h"
#include "esp_log.h"

static const char * TAG = "APP_MAIN";

void app_main(void)
{
    printf("\n\n\n*** STARTING LOGS ***\n\n");
    ESP_LOGE(TAG, "Log ERROR!");
    ESP_LOGW(TAG, "Log WARNING!");
    ESP_LOGI(TAG, "Log INFO!");
    ESP_LOGD(TAG, "Log DEBUG!");
    ESP_LOGV(TAG, "Log VERBOSE!");
    printf("\n\n\n*** ENDING LOGS ***\n\n\n");
}
