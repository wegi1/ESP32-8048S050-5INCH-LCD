#define LED_GREEN     16
#define LED_BLUE       17
#define LED_RED      4

extern int led_color[3];
extern int led_state;

void led_init();
void led_green();
void led_red();
void led_blue();
void led_off();
void led_blink(int led, int time);
void led_blink(int led, int time, int count);


void led_ledc_init();
void led_ledc_set(int r, int g, int b);