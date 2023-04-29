#include "doWifi.h"

String transEncryptionType(wifi_auth_mode_t encryptionType)
{ //对比出该wifi网络加密类型并返回相应的String值
  switch (encryptionType)
  {
  case (WIFI_AUTH_OPEN):
    return "Open";
  case (WIFI_AUTH_WEP):
    return "WEP";
  case (WIFI_AUTH_WPA_PSK):
    return "WPA_PSK";
  case (WIFI_AUTH_WPA2_PSK):
    return "WPA2_PSK";
  case (WIFI_AUTH_WPA_WPA2_PSK):
    return "WPA_WPA2_PSK";
  case (WIFI_AUTH_WPA2_ENTERPRISE):
    return "WPA2_ENTERPRISE";
  default:
    return ("Unkonwn EncryptionType");
  }
}

int scanNetworks()
{ //扫描周边wifi网络，并显示wifi数量，打印它们的属性（ssid，信号强度，加密方式，mac地址）
  int numberOfNetworks = WiFi.scanNetworks();
  //   Serial.print("The number of networks found is:");
  //   Serial.println(numberOfNetworks);
  //   for(int i=0;i<numberOfNetworks;i++){
  //     Serial.print("Networkname: ");
  //     Serial.println(WiFi.SSID(i));
  //     Serial.print("Signalstrength: ");
  //     Serial.println(WiFi.RSSI(i));
  //     Serial.print("MACaddress: ");
  //     Serial.println(WiFi.BSSIDstr(i));
  //     Serial.print("Encryptiontype: ");
  //     String encryptionTypeDescription = transEncryptionType(WiFi.encryptionType(i));
  //     Serial.println(encryptionTypeDescription);
  //     Serial.println("-----------------------");
  //   }
  return numberOfNetworks;
}

boolean connect(const char *id, const char *psw)
{ //连接到指定wifi
  WiFi.begin(id, psw);
  //  while (WiFi.status()!= WL_CONNECTED) {
  //   delay(100);
  //   Serial.println("正在尝试连接该wifi...");
  // }
  // Serial.println("wifi连接成功");
  return true;
}



void closeWifi(void){
  WiFi.mode(WIFI_OFF);
  Serial.println("已关闭WiFi!");
}