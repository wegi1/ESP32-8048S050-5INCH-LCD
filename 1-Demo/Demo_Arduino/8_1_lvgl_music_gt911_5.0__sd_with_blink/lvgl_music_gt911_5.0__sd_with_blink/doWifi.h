#include<WiFi.h>


String transEncryptionType(wifi_auth_mode_t encryptionType);
int scanNetworks();
boolean connect(const char *id ,const char *psw);
void closeWifi(void);