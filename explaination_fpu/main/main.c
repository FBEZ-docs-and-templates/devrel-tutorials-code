#include <stdio.h>
#include "hal/cpu_hal.h"

void app_main(void)
{
    // ============================================================
    // Double
    // ============================================================
    volatile double a_d = 987654321.0;
    volatile double b_d = 123456789.0;

    double sum_d = 0;
    double division_d = 0;

    uint32_t start_sum_d = esp_cpu_get_cycle_count();
    sum_d = a_d + b_d;
    uint32_t end_sum_d = esp_cpu_get_cycle_count();

    uint32_t start_division_d = esp_cpu_get_cycle_count();
    division_d = a_d / b_d;
    uint32_t end_division_d = esp_cpu_get_cycle_count();

    printf("\n=== DOUBLE ===\n");
    printf("Sum took %lu cycles\n", (end_sum_d - start_sum_d));
    printf("Division took %lu cycles\n", (end_division_d - start_division_d));

    printf("*** Values ***\n");
    printf("a: %f\nb: %f\n", a_d, b_d);

    printf("*** Results ***\n");
    printf("Sum: %f\nDivision: %f\n", sum_d, division_d);


    // ============================================================
    // Float
    // ============================================================
    volatile float a_f = 987654321.0f;
    volatile float b_f = 123456789.0f;

    float sum_f = 0;
    float division_f = 0;

    uint32_t start_sum_f = esp_cpu_get_cycle_count();
    sum_f = a_f + b_f;
    uint32_t end_sum_f = esp_cpu_get_cycle_count();

    uint32_t start_division_f = esp_cpu_get_cycle_count();
    division_f = a_f / b_f;
    uint32_t end_division_f = esp_cpu_get_cycle_count();

    printf("\n=== FLOAT ===\n");
    printf("Sum took %lu cycles\n", (end_sum_f - start_sum_f));
    printf("Division took %lu cycles\n", (end_division_f - start_division_f));

    printf("*** Values ***\n");
    printf("a: %f\nb: %f\n", a_f, b_f);

    printf("*** Results ***\n");
    printf("Sum: %f\nDivision: %f\n", sum_f, division_f);


    // ============================================================
    // Int
    // ============================================================
    volatile int a_i = 987654321;
    volatile int b_i = 123456789;

    int sum_i = 0;
    int division_i = 0;

    uint32_t start_sum_i = esp_cpu_get_cycle_count();
    sum_i = a_i + b_i;
    uint32_t end_sum_i = esp_cpu_get_cycle_count();

    uint32_t start_division_i = esp_cpu_get_cycle_count();
    division_i = a_i / b_i;
    uint32_t end_division_i = esp_cpu_get_cycle_count();

    printf("\n=== INT ===\n");
    printf("Sum took %lu cycles\n", (end_sum_i - start_sum_i));
    printf("Division took %lu cycles\n", (end_division_i - start_division_i));

    printf("*** Values ***\n");
    printf("a: %d\nb: %d\n", a_i, b_i);

    printf("*** Results ***\n");
    printf("Sum: %d\nDivision: %d\n", sum_i, division_i);
}
