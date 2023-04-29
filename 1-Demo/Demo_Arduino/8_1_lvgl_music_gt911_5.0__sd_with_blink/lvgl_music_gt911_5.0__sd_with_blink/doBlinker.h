#include <Arduino.h>
void blinker_init();
void blinker_task(void *pvParameters);
void button1_callback(const String & state);
void dataRead(const String & data);
void blinker_task(void *pvParameters);
extern void button1_callback(const String & state);
extern void rgb1_callback(uint8_t r_value, uint8_t g_value, uint8_t b_value, uint8_t bright_value);
extern void button_play_callback(const String & state);
extern void button_pre_callback(const String & state);
extern void button_next_callback(const String & state);
extern void button_light_callback(const String & state);
extern void slider_vol_callback(int32_t value);
extern void * text_song_name;
extern void * text_song_lrc;