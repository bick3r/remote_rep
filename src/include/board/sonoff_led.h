/*
 Copyright (C) AC SOFTWARE SP. Z O.O.

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef P_SONOFF_H_
#define P_SONOFF_H_

#define ESP8285
#define ESP8266_SUPLA_PROTO_VERSION 12 // 7
#define LED_RED_PORT    13

#define BOARD_ON_CONNECT  // LED CFG zgaszona przy normalnej pracy
#define BOARD_CFG_HTML_TEMPLATE // nowy config z LED ON/OFF

//char *ICACHE_FLASH_ATTR supla_esp_board_cfg_html_template(
//char dev_name[25], const char mac[6], const char data_saved); // nowy config z LED ON/OFF
//void ICACHE_FLASH_ATTR supla_esp_board_on_connect(void); //LED CFG zgaszona podczas normalnej pracy
//void ICACHE_FLASH_ATTR supla_esp_board_send_channel_values_with_delay(void *srpc);
char *ICACHE_FLASH_ATTR supla_esp_board_cfg_html_template(
    char dev_name[25], const char mac[6], const char data_saved);
void ICACHE_FLASH_ATTR supla_esp_board_on_connect(void);
void ICACHE_FLASH_ATTR
supla_esp_board_send_channel_values_with_delay(void *srpc);
#endif