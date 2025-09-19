#include <stdio.h>
#include "esp_timer.h"

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

    int64_t start_total_sum_d = esp_timer_get_time();
    for (int i = 0; i < ITERATIONS; i++) {
        sum_d = a_d + b_d;
    }
    int64_t end_total_sum_d = esp_timer_get_time();

    int64_t start_total_div_d = esp_timer_get_time();
    for (int i = 0; i < ITERATIONS; i++) {
        division_d = a_d / b_d;
    }
    int64_t end_total_div_d = esp_timer_get_time();

    printf("\n=== DOUBLE ===\n");
    printf("Sum average: %.2f usec\n", (double)(end_total_sum_d - start_total_sum_d) / ITERATIONS);
    printf("Division average: %.2f usec\n", (double)(end_total_div_d - start_total_div_d) / ITERATIONS);
    printf("Sum: %f, Division: %f\n", sum_d, division_d);

    // ============================================================
    // Float
    // ============================================================
    volatile float a_f = 987654321.0f;
    volatile float b_f = 123456789.0f;

    float sum_f = 0;
    float division_f = 0;

    int64_t start_total_sum_f = esp_timer_get_time();
    for (int i = 0; i < ITERATIONS; i++) {
        sum_f = a_f + b_f;
    }
    int64_t end_total_sum_f = esp_timer_get_time();

    int64_t start_total_div_f = esp_timer_get_time();
    for (int i = 0; i < ITERATIONS; i++) {
        division_f = a_f / b_f;
    }
    int64_t end_total_div_f = esp_timer_get_time();

    printf("\n=== FLOAT ===\n");
    printf("Sum average: %.2f usec\n", (double)(end_total_sum_f - start_total_sum_f) / ITERATIONS);
    printf("Division average: %.2f usec\n", (double)(end_total_div_f - start_total_div_f) / ITERATIONS);
    printf("Sum: %f, Division: %f\n", sum_f, division_f);

    // ============================================================
    // Int
    // ============================================================
    volatile int a_i = 987654321;
    volatile int b_i = 123456789;

    int sum_i = 0;
    int division_i = 0;

    int64_t start_total_sum_i = esp_timer_get_time();
    for (int i = 0; i < ITERATIONS; i++) {
        sum_i = a_i + b_i;
    }
    int64_t end_total_sum_i = esp_timer_get_time();

    int64_t start_total_div_i = esp_timer_get_time();
    for (int i = 0; i < ITERATIONS; i++) {
        division_i = a_i / b_i;
    }
    int64_t end_total_div_i = esp_timer_get_time();

    printf("\n=== INT ===\n");
    printf("Sum average: %.2f usec\n", (double)(end_total_sum_i - start_total_sum_i) / ITERATIONS);
    printf("Division average: %.2f usec\n", (double)(end_total_div_i - start_total_div_i) / ITERATIONS);
    printf("Sum: %d, Division: %d\n", sum_i, division_i);
}
