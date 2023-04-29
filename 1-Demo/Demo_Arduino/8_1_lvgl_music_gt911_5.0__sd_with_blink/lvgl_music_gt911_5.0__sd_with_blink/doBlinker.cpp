//兼容性处理


// #define BLINKER_WIFI
// #include "doLED.h"

// #include <Blinker.h>
// #include <doBlinker.h>

// char auth[] = "19af96a6da29";
// char ssid[] = "ASUS";
// char pswd[] = "ynlflixin";

// // 新建组件对象
// BlinkerButton Button1("btn-mnl");
// BlinkerButton Button_play("btn-znr");
// BlinkerButton Button_pre("btn-10q");
// BlinkerButton Button_next("btn-hfb");

// BlinkerText Text_song_name("text-hxj");
// BlinkerText Text_song_lrc("text-kbl");

// void * text_song_name = &Text_song_name;
// void * text_song_lrc = &Text_song_lrc;


// BlinkerRGB RGB1("col-o2g");

// int counter = 0;

// // 按下按键即会执行该函数
// // void button1_callback(const String & state)
// // {
// //     BLINKER_LOG("get button state: ", state);
// //     if (led_state == 1)
// //     {
// //         led_state = 0;
// //         led_ledc_set(0, 0, 0);
// //         led_off();
// //     }
// //     else
// //     {
// //         led_state = 1;
// //         led_color[0] = 255;
// //         led_color[1] = 0;
// //         led_color[2] = 0;
// //         led_ledc_set(led_color[0], led_color[1], led_color[2]);
// //     }

// // }

// // void rgb1_callback(uint8_t r_value, uint8_t g_value, uint8_t b_value, uint8_t bright_value)
// // {

// //     BLINKER_LOG("R value: ", r_value);
// //     BLINKER_LOG("G value: ", g_value);
// //     BLINKER_LOG("B value: ", b_value);
// //     BLINKER_LOG("Rrightness value: ", bright_value);

// //     led_ledc_set(r_value, g_value, b_value);

// // }

// // 如果未绑定的组件被触发，则会执行其中内容
// void dataRead(const String &data)
// {
//     BLINKER_LOG("Blinker readString: ", data);
//     counter++;
// }

// void blinker_init()
// {

//     BLINKER_DEBUG.stream(Serial);
//     BLINKER_DEBUG.debugAll();

//     // 初始化有LED的IO
//     pinMode(LED_BUILTIN, OUTPUT);
//     digitalWrite(LED_BUILTIN, HIGH);
//     // 初始化blinker
//     Blinker.begin(auth, ssid, pswd);
//     Blinker.attachData(dataRead);

//     Button1.attach(button1_callback);
//     Button_play.attach(button_play_callback);
//     Button_pre.attach(button_pre_callback);
//     Button_next.attach(button_next_callback);

//     RGB1.attach(rgb1_callback);

//     xTaskCreatePinnedToCore(
//         blinker_task,   /* Task function. */
//         "blinker_task", /* name of task. */
//         5000,           /* Stack size of task */
//         NULL,           /* parameter of the task */
//         1,              /* priority of the task */
//         NULL,           /* Task handle to keep track of created task */
//         0);             /* pin task to core 1 */
// }

// void blinker_task(void *pvParameters)
// {
//     while (1)
//     {
//         Blinker.run();
//         vTaskDelay(100 / portTICK_PERIOD_MS);
//     }
// }
