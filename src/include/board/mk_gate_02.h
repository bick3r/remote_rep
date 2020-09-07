
#ifndef MK_GATE_02_H_
#define MK_GATE_02_H_

#define SUPLA_ESP_SOFTVER "2.7.16.2"

#define ESP8266_SUPLA_PROTO_VERSION 7

#if defined(__BOARD_mk_gate_02_dht22)
#define DHTSENSOR
#define TEMPERATURE_HUMIDITY_CHANNEL 4
#else
#define DS18B20
#define TEMPERATURE_CHANNEL 4
#endif

#define W1_GPIO14
#define LED_RED_PORT 2
#define BOARD_ON_CONNECT
#define BOARD_ON_CFG_SAVED

void ICACHE_FLASH_ATTR supla_esp_board_on_cfg_saved(void);
void ICACHE_FLASH_ATTR supla_esp_board_on_connect(void);
void ICACHE_FLASH_ATTR supla_esp_board_send_channel_values_with_delay(void *srpc);

#endif
