#include "lvgl.h"
#include "player.h"

void ui_main();

static void event_handler(lv_event_t *e);
static void event_handler1(lv_event_t *e);
bool read_lrc_from_SD(const char *filename);
void read_lrc_from_HTTP(String id);
void lrc_timer_task(void *pvParameters);
void ui_event_Button_Play(lv_event_t *e);
void lrc_timer(lv_timer_t *timer);
void ui_event_Color_led(lv_event_t *e);
void ui_event_Button_oc_led(lv_event_t *e);
void show_bl_img(void *pvParameters);
void ui_event_Button_list(lv_event_t *e);
void audio_data_init(void *pvParameters);
void audio_data_init_sd(void *pvParameters);
void load_play_info(int index);
void load_play_info_sd(int index);
void ui_event_play_pre(lv_event_t *e);
void ui_event_play_next(lv_event_t *e);
void ui_event_Slider2(lv_event_t *e);
void ui_event_play_list(lv_event_t *e);
void ui_event_play_mode(lv_event_t *e);
void ui_event_play_vol(lv_event_t *e);
void ui_event_play_vol_close(lv_event_t *e);
void ui_event_play_mode_close(lv_event_t *e);
void ui_event_play_vol_change(lv_event_t *e);
void ui_event_play_mode_change(lv_event_t *e);
void ui_event_open_net_pic(lv_event_t *e);
void ui5toui2(lv_event_t *e);
void ui4toui2(lv_event_t *e);
void change_light_screen(lv_event_t *e);
void do_main_ui_init(void);
void ui_event_Button1(lv_event_t *e);
void ui_event_Key_Ok(lv_event_t *e);
void serialprintln_task(void *pvParameter);
void blinker_isok(void *pv);
void listDirMusic(fs::FS &fs, const char * dirname, uint8_t levels);
typedef struct
{
    String id;
    String name;
    String singer;
    String bl;
    String lrc;
    String time;
    String imgurl;
    boolean isplaying;

} Mp3Info;

extern bool is_light_screen;

extern int play_mode;
extern int play_index;
extern int play_state;
extern boolean audio_data_init_flag;
extern lv_timer_t *lrc_timer_lrc;
extern int play_mode_select;
extern bool net_pic_is_open;
extern bool net_is_ok;
extern bool sd_is_ok;
extern int read_flag;
extern bool read_lrc_flag;
extern char *all_songs[99];
extern int is_have_music;
extern int light_brightness;
