#include <stdio.h>
#include "esp_log.h"

const char * TAG = "main";


void app_main(void)
{
    printf("\n\n\n*** STARTING LOGS ***\n\n");
    ESP_LOGE(TAG, "Log ERROR!");
    ESP_LOGW(TAG, "Log WARNING!");
    ESP_LOGI(TAG, "Log INFO!");
    ESP_LOGD(TAG, "Log DEBUG!");
    ESP_LOGV(TAG, "Log VERBOSE!");

    esp_log_level_set("main", ESP_LOG_WARN); 
    
    ESP_LOGE(TAG, "Log ERROR after set level");
    ESP_LOGW(TAG, "Log WARNING set level");
    ESP_LOGI(TAG, "Log INFO set level");
    ESP_LOGD(TAG, "Log DEBUG!");
    ESP_LOGV(TAG, "Log VERBOSE!");
    printf("\n\n\n*** ENDING LOGS ***\n\n\n");
}
