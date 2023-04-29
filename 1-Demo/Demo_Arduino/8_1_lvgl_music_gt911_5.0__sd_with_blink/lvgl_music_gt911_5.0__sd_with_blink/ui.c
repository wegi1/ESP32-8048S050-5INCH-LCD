

#include "ui.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_Label2;
void ui_event_Button2(lv_event_t *e);
lv_obj_t *ui_Button2;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Keyboard2;
lv_obj_t *ui_Panel1;
lv_obj_t *ui_Dropdown2;
lv_obj_t *ui_Button1;
lv_obj_t *ui_Label4;
lv_obj_t *ui_TextArea2;
lv_obj_t *ui_Keyboard1;
lv_obj_t *ui_Screen2;
lv_obj_t *ui_Panel3;
lv_obj_t *ui_Label3;
void ui_event_Button3(lv_event_t *e);
lv_obj_t *ui_Button3;
lv_obj_t *ui_Label5;
lv_obj_t *ui_Keyboard3;
lv_obj_t *ui_Label7;
lv_obj_t *ui_Panel8;
void ui_event_Button4(lv_event_t *e);
lv_obj_t *ui_Button4;
lv_obj_t *ui_Image1;
lv_obj_t *ui_Label6;
void ui_event_Button5(lv_event_t *e);
lv_obj_t *ui_Button5;
lv_obj_t *ui_Image2;
lv_obj_t *ui_Label8;
void ui_event_Button9(lv_event_t *e);
lv_obj_t *ui_Button9;
lv_obj_t *ui_Image3;
lv_obj_t *ui_Label17;
lv_obj_t *ui_Screen3;
lv_obj_t *ui_Panel4;
lv_obj_t *ui_Label9;
void ui_event_Button6(lv_event_t *e);
lv_obj_t *ui_Button6;
lv_obj_t *ui_Label10;
lv_obj_t *ui_Keyboard4;
lv_obj_t *ui_Colorwheel2;
lv_obj_t *ui_ImgButton2;
lv_obj_t *ui_Screen4;
lv_obj_t *ui_Panel5;
lv_obj_t *ui_Label11;
void ui_event_Button7(lv_event_t *e);
lv_obj_t *ui_Button7;
lv_obj_t *ui_Label12;
void ui_event_Button15(lv_event_t *e);
lv_obj_t *ui_Button15;
lv_obj_t *ui_Label19;
lv_obj_t *ui_Keyboard5;
lv_obj_t *ui_Label14;
lv_obj_t * ui_Image10;
lv_obj_t *ui_Label20;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Label18;
lv_obj_t *ui_Slider2;
lv_obj_t *ui_Button11;
lv_obj_t *ui_Image6;
lv_obj_t *ui_Button12;
lv_obj_t *ui_Button10;
lv_obj_t *ui_Label21;
lv_obj_t *ui_Image7;
lv_obj_t *ui_Button13;
lv_obj_t *ui_Button14;
lv_obj_t *ui_Roller2;
lv_obj_t *ui_Panel9;
lv_obj_t *ui_Panel11;
lv_obj_t *ui_Label23;
lv_obj_t *ui_Panel13;
lv_obj_t *ui_Panel15;
lv_obj_t *ui_Slider3;
lv_obj_t *ui_Label32;
lv_obj_t *ui_Button18;
lv_obj_t *ui_Label33;
lv_obj_t *ui_Panel16;
lv_obj_t *ui_Label34;
lv_obj_t *ui_Button19;
lv_obj_t *ui_Label35;
lv_obj_t *ui_Roller1;
// lv_obj_t * ui_Panel10;
// lv_obj_t * ui_Label24;
// lv_obj_t * ui_Label25;
// lv_obj_t * ui_Label22;
// lv_obj_t * ui_Image8;
lv_obj_t *ui_Button17;
lv_obj_t *ui_Label28;
lv_obj_t *ui_Panel12;
lv_obj_t *ui_Label27;
lv_obj_t *ui_Spinner2;
lv_obj_t *ui_Screen5;
lv_obj_t *ui_Panel6;
lv_obj_t *ui_Label13;
void ui_event_Button8(lv_event_t *e);
lv_obj_t *ui_Button8;
lv_obj_t *ui_Label15;
lv_obj_t *ui_Label16;

lv_obj_t *ui_Panel14;
lv_obj_t *ui_Label31;
lv_obj_t *ui_Button16;
lv_obj_t *ui_Label36;
lv_obj_t *ui_Panel17;
lv_obj_t *ui_Label15;
lv_obj_t *ui_Label16;
lv_obj_t *ui_Switch2;
lv_obj_t *ui_Label37;
lv_obj_t *ui_Panel6;
lv_obj_t *ui_Label13;
lv_obj_t *ui_Slider1;
lv_obj_t *ui_Panel18;
lv_obj_t *ui_Label38;
lv_obj_t *ui_Spinner1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 0
#error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
// void ui_event_Button2(lv_event_t * e)
// {
//     lv_event_code_t event_code = lv_event_get_code(e);
//     lv_obj_t * target = lv_event_get_target(e);
//     if(event_code == LV_EVENT_CLICKED) {
//         _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
//     }
// }
// void ui_event_Button3(lv_event_t * e)
// {
//     lv_event_code_t event_code = lv_event_get_code(e);
//     lv_obj_t * target = lv_event_get_target(e);
//     if(event_code == LV_EVENT_CLICKED) {
//         _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
//     }
// }
// void ui_event_Button4(lv_event_t * e)
// {
//     lv_event_code_t event_code = lv_event_get_code(e);
//     lv_obj_t * target = lv_event_get_target(e);
//     if(event_code == LV_EVENT_CLICKED) {
//         _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
//     }
// }
// void ui_event_Button5(lv_event_t * e)
// {
//     lv_event_code_t event_code = lv_event_get_code(e);
//     lv_obj_t * target = lv_event_get_target(e);
//     if(event_code == LV_EVENT_CLICKED) {
//         _ui_screen_change(ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
//     }
// }
// void ui_event_Button9(lv_event_t * e)
// {
//     lv_event_code_t event_code = lv_event_get_code(e);
//     lv_obj_t * target = lv_event_get_target(e);
//     if(event_code == LV_EVENT_CLICKED) {
//         _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
//     }
// }
// void ui_event_Button6(lv_event_t * e)
// {
//     lv_event_code_t event_code = lv_event_get_code(e);
//     lv_obj_t * target = lv_event_get_target(e);
//     if(event_code == LV_EVENT_CLICKED) {
//         _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
//     }
// }
// void ui_event_Button7(lv_event_t * e)
// {
//     lv_event_code_t event_code = lv_event_get_code(e);
//     lv_obj_t * target = lv_event_get_target(e);
//     if(event_code == LV_EVENT_CLICKED) {
//         _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
//     }
// }
// void ui_event_Button15(lv_event_t * e)
// {
//     lv_event_code_t event_code = lv_event_get_code(e);
//     lv_obj_t * target = lv_event_get_target(e);
//     if(event_code == LV_EVENT_CLICKED) {
//         _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
//     }
// }
// void ui_event_Button8(lv_event_t * e)
// {
//     lv_event_code_t event_code = lv_event_get_code(e);
//     lv_obj_t * target = lv_event_get_target(e);
//     if(event_code == LV_EVENT_CLICKED) {
//         _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
//     }
// }

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Panel2 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel2, 809);
    lv_obj_set_height(ui_Panel2, 47);
    lv_obj_set_x(ui_Panel2, -2);
    lv_obj_set_y(ui_Panel2, -219);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label2 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label2, 3);
    lv_obj_set_y(ui_Label2, 2);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "Wi-Fi Config");
    lv_obj_set_style_text_font(ui_Label2, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_Panel2);
    lv_obj_set_width(ui_Button2, 47);
    lv_obj_set_height(ui_Button2, 30);
    lv_obj_set_x(ui_Button2, 368);
    lv_obj_set_y(ui_Button2, 2);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    ui_Label1 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "Skip");
    lv_obj_set_style_text_font(ui_Label1, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, 804);
    lv_obj_set_height(ui_Panel1, 422);
    lv_obj_set_x(ui_Panel1, -2);
    lv_obj_set_y(ui_Panel1, 22);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_CHAIN); /// Flags
    lv_obj_set_scroll_dir(ui_Panel1, LV_DIR_VER);
    lv_obj_set_style_radius(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Dropdown2 = lv_dropdown_create(ui_Panel1);
    lv_dropdown_set_options(ui_Dropdown2, "Please refresh...");
    lv_obj_set_width(ui_Dropdown2, 389);
    lv_obj_set_height(ui_Dropdown2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Dropdown2, -47);
    lv_obj_set_y(ui_Dropdown2, -164);
    lv_obj_set_align(ui_Dropdown2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Dropdown2, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_set_style_text_font(ui_Dropdown2, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_Dropdown2, &lv_font_montserrat_16, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_Panel1);
    lv_obj_set_width(ui_Button1, 64);
    lv_obj_set_height(ui_Button1, 34);
    lv_obj_set_x(ui_Button1, 202);
    lv_obj_set_y(ui_Button1, -163);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    ui_Label4 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Refresh");
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextArea2 = lv_textarea_create(ui_Panel1);
    lv_obj_set_width(ui_TextArea2, 468);
    lv_obj_set_height(ui_TextArea2, LV_SIZE_CONTENT); /// 36
    lv_obj_set_x(ui_TextArea2, -6);
    lv_obj_set_y(ui_TextArea2, -102);
    lv_obj_set_align(ui_TextArea2, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_TextArea2, "Please input a password");
    lv_textarea_set_one_line(ui_TextArea2, true);
    lv_obj_set_style_text_font(ui_TextArea2, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Keyboard1 = lv_keyboard_create(ui_Panel1);
    lv_obj_set_width(ui_Keyboard1, 793);
    lv_obj_set_height(ui_Keyboard1, 244);
    lv_obj_set_x(ui_Keyboard1, 1);
    lv_obj_set_y(ui_Keyboard1, 94);
    lv_obj_set_align(ui_Keyboard1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Keyboard1, LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM); /// Flags

    lv_keyboard_set_textarea(ui_Keyboard1, ui_TextArea2);

    ui_Panel18 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel18, 786);
    lv_obj_set_height(ui_Panel18, 415);
    lv_obj_set_x(ui_Panel18, 1);
    lv_obj_set_y(ui_Panel18, 22);
    lv_obj_set_align(ui_Panel18, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel18, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_Panel18, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_Panel18, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel18, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label38 = lv_label_create(ui_Panel18);
    lv_obj_set_width(ui_Label38, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label38, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label38, -6);
    lv_obj_set_y(ui_Label38, 77);
    lv_obj_set_align(ui_Label38, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label38, "Config Wi-Fi...");
    lv_obj_set_style_text_font(ui_Label38, &ui_font_Font1YHall20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Spinner1 = lv_spinner_create(ui_Panel18, 1000, 90);
    lv_obj_set_width(ui_Spinner1, 189);
    lv_obj_set_height(ui_Spinner1, 119);
    lv_obj_set_x(ui_Spinner1, 25);
    lv_obj_set_y(ui_Spinner1, -24);
    lv_obj_set_align(ui_Spinner1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner1, LV_OBJ_FLAG_CLICKABLE); /// Flags

    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Panel3 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel3, 817);
    lv_obj_set_height(ui_Panel3, 47);
    lv_obj_set_x(ui_Panel3, 1);
    lv_obj_set_y(ui_Panel3, -217);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label3 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label3, 3);
    lv_obj_set_y(ui_Label3, 2);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "IOT Meun");
    lv_obj_set_style_text_font(ui_Label3, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button3 = lv_btn_create(ui_Panel3);
    lv_obj_set_width(ui_Button3, 47);
    lv_obj_set_height(ui_Button3, 30);
    lv_obj_set_x(ui_Button3, -367);
    lv_obj_set_y(ui_Button3, 0);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_text_font(ui_Button3, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Button3);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "Back");

    ui_Keyboard3 = lv_keyboard_create(ui_Screen2);
    lv_obj_set_width(ui_Keyboard3, 300);
    lv_obj_set_height(ui_Keyboard3, 120);
    lv_obj_set_x(ui_Keyboard3, 2);
    lv_obj_set_y(ui_Keyboard3, 54);
    lv_obj_set_align(ui_Keyboard3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Keyboard3, LV_OBJ_FLAG_HIDDEN); /// Flags
    lv_obj_clear_flag(ui_Keyboard3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK |
                                        LV_OBJ_FLAG_CLICK_FOCUSABLE); /// Flags

    ui_Label7 = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label7, -7);
    lv_obj_set_y(ui_Label7, 203);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "You have not configured WIFI and cannot experience remote control");
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel8 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel8, 693);
    lv_obj_set_height(ui_Panel8, 264);
    lv_obj_set_x(ui_Panel8, 7);
    lv_obj_set_y(ui_Panel8, 1);
    lv_obj_set_align(ui_Panel8, LV_ALIGN_CENTER);

    ui_Button4 = lv_btn_create(ui_Panel8);
    lv_obj_set_width(ui_Button4, 150);
    lv_obj_set_height(ui_Button4, 100);
    lv_obj_set_x(ui_Button4,0);
    lv_obj_set_y(ui_Button4, 0);
    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    ui_Image1 = lv_img_create(ui_Button4);
    lv_img_set_src(ui_Image1, &ui_img_music_icon_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image1, 0);
    lv_obj_set_y(ui_Image1, -11);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label6 = lv_label_create(ui_Button4);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label6, 0);
    lv_obj_set_y(ui_Label6, 29);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "Music");
    lv_obj_set_style_text_font(ui_Label6, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button5 = lv_btn_create(ui_Panel8);
    lv_obj_set_width(ui_Button5, 150);
    lv_obj_set_height(ui_Button5, 100);
    lv_obj_set_x(ui_Button5, -200);
    lv_obj_set_y(ui_Button5, 0);
    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button5, LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    ui_Image2 = lv_img_create(ui_Button5);
    lv_img_set_src(ui_Image2, &ui_img_light_icon_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image2, 0);
    lv_obj_set_y(ui_Image2, -12);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label8 = lv_label_create(ui_Button5);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label8, 0);
    lv_obj_set_y(ui_Label8, 29);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "Light");
    lv_obj_set_style_text_font(ui_Label8, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button9 = lv_btn_create(ui_Panel8);
    lv_obj_set_width(ui_Button9, 150);
    lv_obj_set_height(ui_Button9, 100);
    lv_obj_set_x(ui_Button9, 200);
    lv_obj_set_y(ui_Button9, 0);
    lv_obj_set_align(ui_Button9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button9, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button9, LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    ui_Image3 = lv_img_create(ui_Button9);
    lv_img_set_src(ui_Image3, &ui_img_setting_icon_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image3, 0);
    lv_obj_set_y(ui_Image3, -11);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label17 = lv_label_create(ui_Button9);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label17, 0);
    lv_obj_set_y(ui_Label17, 29);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "Setting");
    lv_obj_set_style_text_font(ui_Label17, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button5, ui_event_Button5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button9, ui_event_Button9, LV_EVENT_ALL, NULL);
}
void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Panel4 = lv_obj_create(ui_Screen3);
    lv_obj_set_width(ui_Panel4, 840);
    lv_obj_set_height(ui_Panel4, 47);
    lv_obj_set_x(ui_Panel4, 2);
    lv_obj_set_y(ui_Panel4, -219);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label9 = lv_label_create(ui_Panel4);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label9, 3);
    lv_obj_set_y(ui_Label9, 2);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "Light Control");
    lv_obj_set_style_text_font(ui_Label9, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button6 = lv_btn_create(ui_Panel4);
    lv_obj_set_width(ui_Button6, 47);
    lv_obj_set_height(ui_Button6, 30);
    lv_obj_set_x(ui_Button6, -366);
    lv_obj_set_y(ui_Button6, 2);
    lv_obj_set_align(ui_Button6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button6, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_text_font(ui_Button6, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_Button6);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "Back");

    ui_Keyboard4 = lv_keyboard_create(ui_Screen3);
    lv_obj_set_width(ui_Keyboard4, 300);
    lv_obj_set_height(ui_Keyboard4, 120);
    lv_obj_set_x(ui_Keyboard4, 2);
    lv_obj_set_y(ui_Keyboard4, 54);
    lv_obj_set_align(ui_Keyboard4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Keyboard4, LV_OBJ_FLAG_HIDDEN); /// Flags
    lv_obj_clear_flag(ui_Keyboard4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK |
                                        LV_OBJ_FLAG_CLICK_FOCUSABLE); /// Flags

    ui_Colorwheel2 = lv_colorwheel_create(ui_Screen3, true);
    lv_obj_set_width(ui_Colorwheel2, 300);
    lv_obj_set_height(ui_Colorwheel2, 300);
    lv_obj_set_x(ui_Colorwheel2, 0);
    lv_obj_set_y(ui_Colorwheel2, 20);
    lv_obj_set_align(ui_Colorwheel2, LV_ALIGN_CENTER);
    lv_obj_set_style_arc_width(ui_Colorwheel2, 15, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImgButton2 = lv_imgbtn_create(ui_Screen3);
    lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_light_icon_png, NULL);
    lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_light_icon_dark_png, NULL);
    lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_light_icon_png, NULL);
    lv_imgbtn_set_src(ui_ImgButton2, LV_IMGBTN_STATE_CHECKED_DISABLED, NULL, &ui_img_light_icon_dark_png, NULL);
    lv_obj_set_height(ui_ImgButton2, 48);
    lv_obj_set_width(ui_ImgButton2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_ImgButton2, 0);
    lv_obj_set_y(ui_ImgButton2, 18);
    lv_obj_set_align(ui_ImgButton2, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_ImgButton2, LV_STATE_CHECKED); /// States

    lv_obj_add_event_cb(ui_Button6, ui_event_Button6, LV_EVENT_ALL, NULL);
}
void ui_Screen4_screen_init(void)
{
    ui_Screen4 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen4, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Panel5 = lv_obj_create(ui_Screen4);
    lv_obj_set_width(ui_Panel5, 823);
    lv_obj_set_height(ui_Panel5, 47);
    lv_obj_set_x(ui_Panel5, 0);
    lv_obj_set_y(ui_Panel5, -217);
    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label11 = lv_label_create(ui_Panel5);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label11, 3);
    lv_obj_set_y(ui_Label11, 2);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "Music Player");
    lv_obj_set_style_text_font(ui_Label11, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button7 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Button7, 47);
    lv_obj_set_height(ui_Button7, 30);
    lv_obj_set_x(ui_Button7, -361);
    lv_obj_set_y(ui_Button7, -1);
    lv_obj_set_align(ui_Button7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button7, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_text_font(ui_Button7, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_Button7);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "Back");

    ui_Button15 = lv_btn_create(ui_Panel5);
    lv_obj_set_width(ui_Button15, 47);
    lv_obj_set_height(ui_Button15, 30);
    lv_obj_set_x(ui_Button15, 370);
    lv_obj_set_y(ui_Button15, 0);
    lv_obj_set_align(ui_Button15, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button15, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button15, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_text_font(ui_Button15, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label19 = lv_label_create(ui_Button15);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label19, "List");

    ui_Image10 = lv_img_create(ui_Panel5);
    lv_img_set_src(ui_Image10, &ui_img_sdcard_icon_png);
    lv_obj_set_width(ui_Image10, LV_SIZE_CONTENT);  /// 32
    lv_obj_set_height(ui_Image10, LV_SIZE_CONTENT); /// 32
    lv_obj_set_x(ui_Image10, 70);
    lv_obj_set_y(ui_Image10, 2);
    lv_obj_set_align(ui_Image10, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image10, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image10, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_angle(ui_Image10, 2700);

    ui_Keyboard5 = lv_keyboard_create(ui_Screen4);
    lv_obj_set_width(ui_Keyboard5, 300);
    lv_obj_set_height(ui_Keyboard5, 120);
    lv_obj_set_x(ui_Keyboard5, 2);
    lv_obj_set_y(ui_Keyboard5, 54);
    lv_obj_set_align(ui_Keyboard5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Keyboard5, LV_OBJ_FLAG_HIDDEN); /// Flags
    lv_obj_clear_flag(ui_Keyboard5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK |
                                        LV_OBJ_FLAG_CLICK_FOCUSABLE); /// Flags

    ui_Label14 = lv_label_create(ui_Screen4);
    lv_obj_set_width(ui_Label14, 200);              /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label14, -222);
    lv_obj_set_y(ui_Label14, -115);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "乌梅子酱");
    lv_obj_set_style_text_align(ui_Label14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_long_mode(ui_Label14, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_set_style_text_font(ui_Label14, &ui_font_Font1YHall24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label20 = lv_label_create(ui_Screen4);
    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label20, -225);
    lv_obj_set_y(ui_Label20, -77);
    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label20, "歌手：李荣浩");
    lv_obj_set_style_text_font(ui_Label20, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image5 = lv_img_create(ui_Screen4);
    lv_img_set_src(ui_Image5, &ui_img_music_b_icon_png);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image5, -221);
    lv_obj_set_y(ui_Image5, 15);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label18 = lv_label_create(ui_Screen4);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label18, -226);
    lv_obj_set_y(ui_Label18, -47);
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "专辑：纵横四海");
    lv_obj_set_style_text_font(ui_Label18, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Slider2 = lv_slider_create(ui_Screen4);
    lv_obj_set_width(ui_Slider2, 642);
    lv_obj_set_height(ui_Slider2, 10);
    lv_obj_set_x(ui_Slider2, 12);
    lv_obj_set_y(ui_Slider2, 107);
    lv_obj_set_align(ui_Slider2, LV_ALIGN_CENTER);

    ui_Button11 = lv_btn_create(ui_Screen4);
    lv_obj_set_width(ui_Button11, 80);
    lv_obj_set_height(ui_Button11, 80);
    lv_obj_set_x(ui_Button11, 4);
    lv_obj_set_y(ui_Button11, 174);
    lv_obj_set_align(ui_Button11, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button11, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button11, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_radius(ui_Button11, 60, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image6 = lv_img_create(ui_Screen4);
    lv_img_set_src(ui_Image6, &ui_img_play_icon_png);
    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);  /// 64
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT); /// 64
    lv_obj_set_x(ui_Image6, 8);
    lv_obj_set_y(ui_Image6, 173);
    lv_obj_set_align(ui_Image6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Button12 = lv_btn_create(ui_Screen4);
    lv_obj_set_width(ui_Button12, 100);
    lv_obj_set_height(ui_Button12, 77);
    lv_obj_set_x(ui_Button12, -134);
    lv_obj_set_y(ui_Button12, 174);
    lv_obj_set_align(ui_Button12, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button12, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button12, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_Button12, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button12, &ui_img_pre_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button10 = lv_btn_create(ui_Screen4);
    lv_obj_set_width(ui_Button10, 100);
    lv_obj_set_height(ui_Button10, 77);
    lv_obj_set_x(ui_Button10, 140);
    lv_obj_set_y(ui_Button10, 175);
    lv_obj_set_align(ui_Button10, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button10, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button10, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_Button10, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button10, &ui_img_next_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label21 = lv_label_create(ui_Screen4);
    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label21, -277);
    lv_obj_set_y(ui_Label21, 132);
    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label21, "00:00/03:00");

    ui_Image7 = lv_img_create(ui_Screen4);
    lv_img_set_src(ui_Image7, &ui_img_pause_icon_png);
    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);  /// 64
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT); /// 64
    lv_obj_set_x(ui_Image7, 3);
    lv_obj_set_y(ui_Image7, 174);
    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);                     /// Flags

    ui_Button13 = lv_btn_create(ui_Screen4);
    lv_obj_set_width(ui_Button13, 100);
    lv_obj_set_height(ui_Button13, 60);
    lv_obj_set_x(ui_Button13, -253);
    lv_obj_set_y(ui_Button13, 175);
    lv_obj_set_align(ui_Button13, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button13, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button13, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_Button13, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button13, &ui_img_normal_play_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button14 = lv_btn_create(ui_Screen4);
    lv_obj_set_width(ui_Button14, 100);
    lv_obj_set_height(ui_Button14, 77);
    lv_obj_set_x(ui_Button14, 259);
    lv_obj_set_y(ui_Button14, 175);
    lv_obj_set_align(ui_Button14, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button14, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button14, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_Button14, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button14, &ui_img_vol_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Roller2 = lv_roller_create(ui_Screen4);
    lv_roller_set_options(ui_Roller2, "...\n...\n...", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_Roller2, 400);
    lv_obj_set_height(ui_Roller2, 179);
    lv_obj_set_x(ui_Roller2, 99);
    lv_obj_set_y(ui_Roller2, -35);
    lv_obj_set_align(ui_Roller2, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Roller2, lv_color_hex(0x7A7A7A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Roller2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Roller2, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Roller2, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Roller2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_Roller2, &ui_font_Font1YHall20, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Roller2, lv_color_hex(0x101418), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller2, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Roller2, 0, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_Panel9 = lv_obj_create(ui_Screen4);
    lv_obj_set_width(ui_Panel9, 546);
    lv_obj_set_height(ui_Panel9, 323);
    lv_obj_set_x(ui_Panel9, 1);
    lv_obj_set_y(ui_Panel9, 19);
    lv_obj_set_align(ui_Panel9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel9, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_Panel9, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_scrollbar_mode(ui_Panel9, LV_SCROLLBAR_MODE_ACTIVE);

    ui_Panel11 = lv_obj_create(ui_Panel9);
    lv_obj_set_width(ui_Panel11, 529);
    lv_obj_set_height(ui_Panel11, 32);
    lv_obj_set_x(ui_Panel11, 0);
    lv_obj_set_y(ui_Panel11, -130);
    lv_obj_set_align(ui_Panel11, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel11, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_border_width(ui_Panel11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label23 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label23, 0);
    lv_obj_set_y(ui_Label23, -3);
    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label23, "Music List");
    lv_obj_set_style_text_font(ui_Label23, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel13 = lv_obj_create(ui_Panel9);
    lv_obj_set_width(ui_Panel13, 532);
    lv_obj_set_height(ui_Panel13, 266);
    lv_obj_set_x(ui_Panel13, 0);
    lv_obj_set_y(ui_Panel13, 23);
    lv_obj_set_align(ui_Panel13, LV_ALIGN_CENTER);
    lv_obj_set_scrollbar_mode(ui_Panel13, LV_SCROLLBAR_MODE_ACTIVE);
    lv_obj_set_style_border_width(ui_Panel13, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel10 = lv_obj_create(ui_Panel13);
    // lv_obj_set_width(ui_Panel10, 509);
    // lv_obj_set_height(ui_Panel10, 87);
    // lv_obj_set_x(ui_Panel10, -2);
    // lv_obj_set_y(ui_Panel10, -84);
    // lv_obj_set_align(ui_Panel10, LV_ALIGN_CENTER);
    // lv_obj_clear_flag(ui_Panel10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    // lv_obj_set_style_bg_color(ui_Panel10, lv_color_hex(0x171717), LV_PART_MAIN | LV_STATE_DEFAULT);
    // lv_obj_set_style_bg_opa(ui_Panel10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label24 = lv_label_create(ui_Panel10);
    // lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);   /// 1
    // lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);    /// 1
    // lv_obj_set_x(ui_Label24, -145);
    // lv_obj_set_y(ui_Label24, -12);
    // lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);
    // lv_label_set_text(ui_Label24, "乌梅子酱");
    // lv_obj_set_style_text_font(ui_Label24, &ui_font_Font1YHall20, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label25 = lv_label_create(ui_Panel10);
    // lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);   /// 1
    // lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);    /// 1
    // lv_obj_set_x(ui_Label25, -160);
    // lv_obj_set_y(ui_Label25, 17);
    // lv_obj_set_align(ui_Label25, LV_ALIGN_CENTER);
    // lv_label_set_text(ui_Label25, "李荣浩");
    // lv_obj_set_style_text_font(ui_Label25, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label22 = lv_label_create(ui_Panel10);
    // lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);   /// 1
    // lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);    /// 1
    // lv_obj_set_x(ui_Label22, -90);
    // lv_obj_set_y(ui_Label22, 18);
    // lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);
    // lv_label_set_text(ui_Label22, "纵横四海");
    // lv_obj_set_style_text_font(ui_Label22, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image8 = lv_img_create(ui_Panel10);
    // lv_img_set_src(ui_Image8, &ui_img_list_play_icon_png);
    // lv_obj_set_width(ui_Image8, LV_SIZE_CONTENT);   /// 48
    // lv_obj_set_height(ui_Image8, LV_SIZE_CONTENT);    /// 48
    // lv_obj_set_x(ui_Image8, -215);
    // lv_obj_set_y(ui_Image8, 0);
    // lv_obj_set_align(ui_Image8, LV_ALIGN_CENTER);
    // lv_obj_add_flag(ui_Image8, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    // lv_obj_clear_flag(ui_Image8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button17 = lv_btn_create(ui_Panel9);
    lv_obj_set_width(ui_Button17, 70);
    lv_obj_set_height(ui_Button17, 40);
    lv_obj_set_x(ui_Button17, 230);
    lv_obj_set_y(ui_Button17, -134);
    lv_obj_set_align(ui_Button17, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button17, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button17, LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    ui_Label28 = lv_label_create(ui_Button17);
    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label28, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label28, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label28, "Close");
    lv_obj_set_style_text_font(ui_Label28, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel12 = lv_obj_create(ui_Screen4);
    lv_obj_set_width(ui_Panel12, 687);
    lv_obj_set_height(ui_Panel12, 386);
    lv_obj_set_x(ui_Panel12, 6);
    lv_obj_set_y(ui_Panel12, 22);
    lv_obj_set_align(ui_Panel12, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel12, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_Panel12, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_Panel12, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel12, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label27 = lv_label_create(ui_Panel12);
    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label27, -6);
    lv_obj_set_y(ui_Label27, 77);
    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label27, "Load hot music list...");
    lv_obj_set_style_text_font(ui_Label27, &ui_font_Font1YHall20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Spinner2 = lv_spinner_create(ui_Panel12, 1000, 90);
    lv_obj_set_width(ui_Spinner2, 189);
    lv_obj_set_height(ui_Spinner2, 119);
    lv_obj_set_x(ui_Spinner2, 25);
    lv_obj_set_y(ui_Spinner2, -24);
    lv_obj_set_align(ui_Spinner2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner2, LV_OBJ_FLAG_CLICKABLE); /// Flags

    ui_Panel15 = lv_obj_create(ui_Screen4);
    lv_obj_set_width(ui_Panel15, 499);
    lv_obj_set_height(ui_Panel15, 132);
    lv_obj_set_x(ui_Panel15, 4);
    lv_obj_set_y(ui_Panel15, -2);
    lv_obj_set_align(ui_Panel15, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel15, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_Panel15, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Slider3 = lv_slider_create(ui_Panel15);
    lv_slider_set_range(ui_Slider3, 0, 21);
    lv_slider_set_value(ui_Slider3, 21, LV_ANIM_OFF);
    if (lv_slider_get_mode(ui_Slider3) == LV_SLIDER_MODE_RANGE)
        lv_slider_set_left_value(ui_Slider3, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider3, 405);
    lv_obj_set_height(ui_Slider3, 10);
    lv_obj_set_x(ui_Slider3, 1);
    lv_obj_set_y(ui_Slider3, 10);
    lv_obj_set_align(ui_Slider3, LV_ALIGN_CENTER);

    ui_Label32 = lv_label_create(ui_Panel15);
    lv_obj_set_width(ui_Label32, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label32, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label32, -7);
    lv_obj_set_y(ui_Label32, -40);
    lv_obj_set_align(ui_Label32, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label32, "Setup Volume");
    lv_obj_set_style_text_font(ui_Label32, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button18 = lv_btn_create(ui_Panel15);
    lv_obj_set_width(ui_Button18, 65);
    lv_obj_set_height(ui_Button18, 40);
    lv_obj_set_x(ui_Button18, 208);
    lv_obj_set_y(ui_Button18, -41);
    lv_obj_set_align(ui_Button18, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button18, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button18, LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    ui_Label33 = lv_label_create(ui_Button18);
    lv_obj_set_width(ui_Label33, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label33, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label33, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label33, "Close");

    ui_Panel16 = lv_obj_create(ui_Screen4);
    lv_obj_set_width(ui_Panel16, 227);
    lv_obj_set_height(ui_Panel16, 180);
    lv_obj_set_x(ui_Panel16, -255);
    lv_obj_set_y(ui_Panel16, 50);
    lv_obj_set_align(ui_Panel16, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel16, LV_OBJ_FLAG_HIDDEN);       /// Flags
    lv_obj_clear_flag(ui_Panel16, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label34 = lv_label_create(ui_Panel16);
    lv_obj_set_width(ui_Label34, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label34, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label34, -11);
    lv_obj_set_y(ui_Label34, -64);
    lv_obj_set_align(ui_Label34, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label34, "Play mode");

    ui_Button19 = lv_btn_create(ui_Panel16);
    lv_obj_set_width(ui_Button19, 63);
    lv_obj_set_height(ui_Button19, 41);
    lv_obj_set_x(ui_Button19, 77);
    lv_obj_set_y(ui_Button19, -65);
    lv_obj_set_align(ui_Button19, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button19, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button19, LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    ui_Label35 = lv_label_create(ui_Button19);
    lv_obj_set_width(ui_Label35, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label35, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label35, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label35, "Close");

    ui_Roller1 = lv_roller_create(ui_Panel16);
    lv_roller_set_options(ui_Roller1, "Sequential Play\nRandom Play\nSingle song loop", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_Roller1, 215);
    lv_obj_set_height(ui_Roller1, 117);
    lv_obj_set_x(ui_Roller1, 0);
    lv_obj_set_y(ui_Roller1, 23);
    lv_obj_set_align(ui_Roller1, LV_ALIGN_CENTER);
    lv_obj_set_style_border_width(ui_Roller1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button7, ui_event_Button7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button15, ui_event_Button15, LV_EVENT_ALL, NULL);
}
void ui_Screen5_screen_init(void)
{
    ui_Screen5 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen5, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Panel14 = lv_obj_create(ui_Screen5);
    lv_obj_set_width(ui_Panel14, 823);
    lv_obj_set_height(ui_Panel14, 47);
    lv_obj_set_x(ui_Panel14, -7);
    lv_obj_set_y(ui_Panel14, -217);
    lv_obj_set_align(ui_Panel14, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel14, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label31 = lv_label_create(ui_Panel14);
    lv_obj_set_width(ui_Label31, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label31, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label31, 3);
    lv_obj_set_y(ui_Label31, 2);
    lv_obj_set_align(ui_Label31, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label31, "Settings");
    lv_obj_set_style_text_font(ui_Label31, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button16 = lv_btn_create(ui_Panel14);
    lv_obj_set_width(ui_Button16, 47);
    lv_obj_set_height(ui_Button16, 30);
    lv_obj_set_x(ui_Button16, -361);
    lv_obj_set_y(ui_Button16, -1);
    lv_obj_set_align(ui_Button16, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button16, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button16, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_text_font(ui_Button16, &ui_font_Font1YHall16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label36 = lv_label_create(ui_Button16);
    lv_obj_set_width(ui_Label36, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label36, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Label36, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label36, "Back");

    ui_Panel17 = lv_obj_create(ui_Screen5);
    lv_obj_set_width(ui_Panel17, 765);
    lv_obj_set_height(ui_Panel17, 72);
    lv_obj_set_x(ui_Panel17, 0);
    lv_obj_set_y(ui_Panel17, -135);
    lv_obj_set_align(ui_Panel17, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel17, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label15 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label15, -126);
    lv_obj_set_y(ui_Label15, -11);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "Music player network album picture display function");
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label16 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label16, -141);
    lv_obj_set_y(ui_Label16, 14);
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, " (experimental function, may cause restart, memory overflow)");

    ui_Switch2 = lv_switch_create(ui_Panel17);
    lv_obj_set_width(ui_Switch2, 74);
    lv_obj_set_height(ui_Switch2, 38);
    lv_obj_set_x(ui_Switch2, 317);
    lv_obj_set_y(ui_Switch2, 1);
    lv_obj_set_align(ui_Switch2, LV_ALIGN_CENTER);

    ui_Label37 = lv_label_create(ui_Screen5);
    lv_obj_set_width(ui_Label37, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label37, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label37, 0);
    lv_obj_set_y(ui_Label37, 217);
    lv_obj_set_align(ui_Label37, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label37, "Version number: v2.0.5 \nbuild in: 2023-02-27");

    ui_Panel6 = lv_obj_create(ui_Screen5);
    lv_obj_set_width(ui_Panel6, 765);
    lv_obj_set_height(ui_Panel6, 119);
    lv_obj_set_x(ui_Panel6, 0);
    lv_obj_set_y(ui_Panel6, -22);
    lv_obj_set_align(ui_Panel6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel6, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Label13 = lv_label_create(ui_Panel6);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label13, -263);
    lv_obj_set_y(ui_Label13, -36);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "Set screen brightness");
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Slider1 = lv_slider_create(ui_Panel6);
    lv_slider_set_value(ui_Slider1, 100, LV_ANIM_OFF);
    if (lv_slider_get_mode(ui_Slider1) == LV_SLIDER_MODE_RANGE)
        lv_slider_set_left_value(ui_Slider1, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider1, 678);
    lv_obj_set_height(ui_Slider1, 19);
    lv_obj_set_x(ui_Slider1, -21);
    lv_obj_set_y(ui_Slider1, 20);
    lv_obj_set_align(ui_Slider1, LV_ALIGN_CENTER);
}

void ui_init(void)
{
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                              true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    // ui_Screen2_screen_init();
    // ui_Screen3_screen_init();
    // ui_Screen4_screen_init();
    // ui_Screen5_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
