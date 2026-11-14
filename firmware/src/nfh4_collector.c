#include "collector.h"
#include "droplet.h"

/* Rev 4 controller: dual droplet probes and an integrated mesh bias supply. */
void collector_init(void) {
    droplet_sensor_init(2);
    mesh_bias_supply_enable();
}

uint32_t collector_yield_ml(void) {
    return droplet_count_take() * DROPLET_UL_REV4 / 1000U;
}
