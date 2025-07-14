#include <stdio.h>
#include "esp_err.h"

esp_err_t division(float * result, float a, float b){

    if(b==0 || result == NULL){
        return ESP_ERR_INVALID_ARG; 
    }

    *result = a/b;
    return ESP_OK;
}

void app_main(void)
{
    printf("\n\n*** Testing Errors ***!\n\n");
    float division_result = 0;
    float a = 10.5;
    float b = 3.3;

    if(division(&division_result,a,b)==ESP_OK){
        printf("Working division: %f\n", division_result);
    }else{
        printf("Division Error!\n");
    }

    ESP_ERROR_CHECK(division(&division_result, a, b));

    b = 0;

    if(division(&division_result,a,b)==ESP_OK){
        printf("Working division: %f\n", division_result);
    }else{
        printf("Division Error!\n");
    }

    ESP_ERROR_CHECK_WITHOUT_ABORT(division(&division_result, a, b));

}


    // printf("\n\n*** Testing Errors ***!\n\n");
    // float division_result = 0;
    // float a = 10.5;
    // float b = 3.3;

    // ESP_ERROR_CHECK_WITHOUT_ABORT(division(&division_result, a, b));
    // printf("Working division: %f\n", division_result);

    // b = 0;

    // ESP_ERROR_CHECK_WITHOUT_ABORT(division(&division_result, a, b));

    // float * other_pointer = NULL;
    // b = 3.3;

    // ESP_ERROR_CHECK_WITHOUT_ABORT(division(other_pointer, a, b));