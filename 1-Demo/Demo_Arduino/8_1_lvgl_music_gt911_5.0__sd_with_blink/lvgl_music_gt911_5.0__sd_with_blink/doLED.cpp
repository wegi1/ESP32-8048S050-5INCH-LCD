#include "doLED.h"
#include "Arduino.h"

int led_color[3]=
{
   255,
    0,
    0
};

int led_state=0;

void led_init()
{
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_BLUE, OUTPUT);
    led_off();
}

void led_green()
{
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_RED, HIGH);
    digitalWrite(LED_BLUE, HIGH);
}

void led_red()
{
    digitalWrite(LED_GREEN, HIGH);
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_BLUE, HIGH);
}

void led_blue()
{
    digitalWrite(LED_GREEN, HIGH);
    digitalWrite(LED_RED, HIGH);
    digitalWrite(LED_BLUE, LOW);
}

void led_off()
{
    digitalWrite(LED_GREEN, HIGH);
    digitalWrite(LED_RED, HIGH);
    digitalWrite(LED_BLUE, HIGH);
}

void led_blink(int led, int time)
{
    digitalWrite(led, HIGH);
    delay(time);
    digitalWrite(led, LOW);
    delay(time);
}

void led_blink(int led, int time, int count)
{
    for (int i = 0; i < count; i++)
    {
        digitalWrite(led, HIGH);
        delay(time);
        digitalWrite(led, LOW);
        delay(time);
    }
}

void led_blink(int led, int time, int count, int delay_time)
{
    for (int i = 0; i < count; i++)
    {
        digitalWrite(led, HIGH);
        delay(time);
        digitalWrite(led, LOW);
        delay(delay_time);
    }
}

void led_ledc_init()
{
    ledcSetup(1, 600, 8);
    ledcAttachPin(LED_GREEN, 1);
    ledcWrite(1, 150);
    ledcSetup(2, 600, 8);
    ledcAttachPin(LED_RED, 2);
    ledcWrite(2, 150);
    ledcSetup(3, 600, 8);
    ledcAttachPin(LED_BLUE, 3);
    ledcWrite(3, 150);
}

void led_ledc_set(int r, int g, int b)
{
    r=255-r;
    g=255-g;
    b=255-b;
    ledcWrite(1, g);
    ledcWrite(2, r);
    ledcWrite(3, b);
}