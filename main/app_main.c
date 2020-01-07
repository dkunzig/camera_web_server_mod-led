/* ESPRESSIF MIT License
 * 
 * Copyright (c) 2018 <ESPRESSIF SYSTEMS (SHANGHAI) PTE LTD>
 * 
 * Permission is hereby granted for use on all ESPRESSIF SYSTEMS products, in which case,
 * it is free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "app_camera.h"
#include "app_wifi.h"
#include "app_httpd.h"
#include "esp_system.h"
#include "driver/ledc.h"

#include "sdkconfig.h"
#include "esp_wifi.h"


void app_main()
{
//	gpio_set_direction(4, 2);
	
//	int8_t power = 0;
// configure channel

	/*ledc_channel_config_t ledc_channel = {
			.channel = LEDC_HS_CH0_CHANNEL,
			.duty =0,
			.gpio_num = LEDC_HS_CH0_GPIO,
			.speed_mode = LEDC_HS_MODE,
			.timer_sel = LEDC_HS_TIMER

	};
	ledc_channel_config(&ledc_channel);*/


	//int8_t *power=0;
	
	
	//while (1);
	

    app_wifi_main();
    app_camera_main();
    app_httpd_main();


	int8_t i, j, jSave = -128;

	
		esp_wifi_set_max_tx_power(40);
	//	printf("Wifi power set to %d.\n", i);

	

	
	//config.frame_size = FRAMESIZE_VGA;
	esp_wifi_get_max_tx_power(&j);
	printf("wifi power get is %d.\n\n", j);
	
	wifi_ap_record_t wifidata;
	if (esp_wifi_sta_get_ap_info(&wifidata) == 0) {
		printf("rssi:%d\r\n", wifidata.rssi);
	}



}
