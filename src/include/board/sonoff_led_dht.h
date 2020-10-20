
#ifndef P_SONOFF_H_
#define P_SONOFF_H_

#define ESP8285
#define ESP8266_SUPLA_PROTO_VERSION 12 // 7
#define DHTSENSOR
#define TEMPERATURE_HUMIDITY_CHANNEL 1
#define W1_GPIO14
#define LED_RED_PORT    13

#define BOARD_ON_CONNECT  // LED CFG zgaszona przy normalnej pracy
#define BOARD_CFG_HTML_TEMPLATE // nowy config z LED ON/OFF

char *ICACHE_FLASH_ATTR supla_esp_board_cfg_html_template(
char dev_name[25], const char mac[6], const char data_saved); // nowy config z LED ON/OFF
void ICACHE_FLASH_ATTR supla_esp_board_on_connect(void); //LED CFG zgaszona podczas normalnej pracy
void ICACHE_FLASH_ATTR supla_esp_board_send_channel_values_with_delay(void *srpc);

#endif