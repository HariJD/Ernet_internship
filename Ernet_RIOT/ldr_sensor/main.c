#include <stdio.h>
#include <xtimer.h>
#include "periph/adc.h"

#ifndef BOARD_REMOTE_REVA
#error "This application is intended for Zolertia Remote Rev-A"
#endif

#define LDR_ADC_LINE      ADC_LINE(0)
#define ADC_RESOLUTION   ADC_RES_10BIT
#define READ_INTERVAL_US (1000000U)

int main(void)
{
    if (adc_init(LDR_ADC_LINE) < 0) {
        puts("Error: ADC initialization failed");
        return 1;
    }

    puts("LDR Sensor Reading Started");

    while (1) {
        int raw = adc_sample(LDR_ADC_LINE, ADC_RESOLUTION);

        if (raw < 0) {
            puts("Error: ADC read failed");
        }
        else {
            float voltage = (raw * 3.3f) / 1023.0f;
            printf("LDR Raw: %d | Voltage: %.2f V\n", raw, voltage);
        }

        xtimer_usleep(READ_INTERVAL_US);
    }

    return 0;
}
