
#include "Audio.h"
#include <Ticker.h>


extern Audio audio;
// extern Ticker ticker;


#define I2S_DOUT      17
#define I2S_BCLK      0
#define I2S_LRC       18

void CreateQueues();

void audioTask(void *parameter);

void audioInit();


void audioSetVolume(uint8_t vol);

uint8_t audioGetVolume();

bool audioConnecttohost(const char* host);

bool audioConnecttoSD(const char* filename);

void pause_play();


//log

void audio_info(const char *info);
void audio_id3data(const char *info);
void audio_eof_mp3(const char *info);
void audio_showstation(const char *info);
void audio_showstreamtitle(const char *info);
void audio_bitrate(const char *info);
void audio_commercial(const char *info);
void audio_icyurl(const char *info);
void audio_lasthost(const char *info);