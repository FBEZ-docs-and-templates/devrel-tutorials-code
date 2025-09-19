#include <stdio.h>
#include "hal/cpu_hal.h"

// ============================================================
// Configuration
// ============================================================
#define ITERATIONS 10000

void app_main(void)
{
    // ============================================================
    // Double
    // ============================================================
    volatile double a_d = 987654321.0;
    volatile double b_d = 123456789.0;

    double sum_d = 0;
    double division_d = 0;

    uint32_t start_total_sum_d = esp_cpu_get_cycle_count();
    for (int i = 0; i < ITERATIONS; i++) {
        sum_d = a_d + b_d;
    }
    uint32_t end_total_sum_d = esp_cpu_get_cycle_count();

    uint32_t start_total_div_d = esp_cpu_get_cycle_count();
    for (int i = 0; i < ITERATIONS; i++) {
        division_d = a_d / b_d;
    }
    uint32_t end_total_div_d = esp_cpu_get_cycle_count();

    printf("\n=== DOUBLE ===\n");
    printf("Sum average: %lu cycles\n", (end_total_sum_d - start_total_sum_d) / ITERATIONS);
    printf("Division average: %lu cycles\n", (end_total_div_d - start_total_div_d) / ITERATIONS);
    printf("Sum: %f, Division: %f\n", sum_d, division_d);

    // ============================================================
    // Float
    // ============================================================
    volatile float a_f = 987654321.0f;
    volatile float b_f = 123456789.0f;

    float sum_f = 0;
    float division_f = 0;

    uint32_t start_total_sum_f = esp_cpu_get_cycle_count();
    for (int i = 0; i < ITERATIONS; i++) {
        sum_f = a_f + b_f;
    }
    uint32_t end_total_sum_f = esp_cpu_get_cycle_count();

    uint32_t start_total_div_f = esp_cpu_get_cycle_count();
    for (int i = 0; i < ITERATIONS; i++) {
        division_f = a_f / b_f;
    }
    uint32_t end_total_div_f = esp_cpu_get_cycle_count();

    printf("\n=== FLOAT ===\n");
    printf("Sum average: %lu cycles\n", (end_total_sum_f - start_total_sum_f) / ITERATIONS);
    printf("Division average: %lu cycles\n", (end_total_div_f - start_total_div_f) / ITERATIONS);
    printf("Sum: %f, Division: %f\n", sum_f, division_f);

    // ============================================================
    // Int
    // ============================================================
    volatile int a_i = 987654321;
    volatile int b_i = 123456789;

    int sum_i = 0;
    int division_i = 0;

    uint32_t start_total_sum_i = esp_cpu_get_cycle_count();
    for (int i = 0; i < ITERATIONS; i++) {
        sum_i = a_i + b_i;
    }
    uint32_t end_total_sum_i = esp_cpu_get_cycle_count();

    uint32_t start_total_div_i = esp_cpu_get_cycle_count();
    for (int i = 0; i < ITERATIONS; i++) {
        division_i = a_i / b_i;
    }
    uint32_t end_total_div_i = esp_cpu_get_cycle_count();

    printf("\n=== INT ===\n");
    printf("Sum average: %lu cycles\n", (end_total_sum_i - start_total_sum_i) / ITERATIONS);
    printf("Division average: %lu cycles\n", (end_total_div_i - start_total_div_i) / ITERATIONS);
    printf("Sum: %d, Division: %d\n", sum_i, division_i);
}
