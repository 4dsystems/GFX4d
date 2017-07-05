/************************************
 * Graphics Demo                    *
 * This Demo show's some of the     *
 * graphics features of the IoD     *
 * This Demo needs to connect to    *
 * the internet to download needed  *
 * files.                           *
 * On the first run it will try     *
 * to download all files needed     *
 * from the 4D server. Some files   *
 * are quite large and can take     *
 * several minutes to download      *
 * Enter your SSID & PASSWORD below *
 ***********************************/


#include "4dIOD2Const.h"

#include <ESP8266WiFi.h>
#include "GFX4d.h"

const char* ssid = "********";
const char* password = "********";

GFX4d gfx = GFX4d();

byte type;
byte type1;
byte type2;
byte typec;
boolean Wconnected = false;



uint32_t invader1a[20] = {
18,18,
0x00000000, 0x00000780, 0x00000FC0,    
0x00001FE0, 0x00003FF0, 0x00007FF8,    
0x0000FFFC, 0x0001E79E, 0x0001E79E,    
0x0001FFFE, 0x0000FFFC, 0x00006798,     
0x0000C30C, 0x00018006, 0x00018006,    
0x0000C00C, 0x00006018, 0x00000000, 
};
uint32_t invader1b[20] = {
18,18,
0x00000000, 0x00000780, 0x00000FC0,     
0x00001FE0, 0x00003FF0, 0x00007FF8,    
0x0000FFFC, 0x0001E79E, 0x0001E79E,    
0x0001FFFE, 0x0000FFFC, 0x00001860,     
0x000037B0, 0x00006318, 0x00018006,    
0x0000F03C, 0x00018CC6, 0x00000000, 
};

uint32_t invader2a[20] = {
24,18,
0x00000000, 0x00060060, 0x000300C0,     
0x00618186, 0x0060C306, 0x0063FFC6,    
0x0067FFE6, 0x007E7E7E, 0x007E7E7E,    
0x007FFFFE, 0x003FFFFC, 0x003FFFFC,    
0x001FFFF8, 0x00060060, 0x000C0030,     
0x00180018, 0x0030000C, 0x00000000,  
};

uint32_t invader2b[20] = {
24,18,
0x00000000, 0x00060060, 0x000300C0,    
0x00018180, 0x0000C300, 0x0003FFC0,     
0x0007FFE0, 0x003E7E7C, 0x007E7E7E,    
0x007FFFFE, 0x007FFFFE, 0x007FFFFE,    
0x007FFFFE, 0x00660066, 0x006300C6,    
0x00018180, 0x0000E700, 0x00000000,  
};

uint32_t invader3a[20] = {
24,18,
0x00000000, 0x00007E00, 0x0000FF00,      
0x000FFFF0, 0x003FFFFC, 0x007FFFFE,    
0x007C3C3E, 0x007C3C3E, 0x007FFFFE,    
0x003FFFFC, 0x000FC3F0, 0x000FC3F0,    
0x00067E60, 0x000C0030, 0x00180018,   
0x000C0030, 0x00060060, 0x00000000,  
};

uint32_t invader3b[20] = {
24,18,
0x00000000, 0x00007E00, 0x0000FF00,      
0x000FFFF0, 0x003FFFFC, 0x007FFFFE,    
0x007C3C3E, 0x007C3C3E, 0x007FFFFE,    
0x003FFFFC, 0x000FC3F0, 0x000FC3F0,    
0x00037EC0, 0x00060060, 0x000C0030,     
0x00180018, 0x0030000C, 0x00000000,  
};

uint32_t ball[16] = {
14,14,
0x00000000, 0x00000000, 0x00000000, 
0x000001E0, 0x000003F0, 0x000007F8,       
0x000007F8, 0x000007F8, 0x000007F8,       
0x000003F0, 0x000001E0, 0x00000000, 
0x00000000, 0x00000000  
};

uint16_t nn =294;
uint8_t yy = 212;
int nnd = -3;
int yyd = -3;
uint16_t n;
uint8_t y;
uint16_t tx;
uint16_t ty;
int nd = 3;
int yd = 3;
File dataFile;

void setup() {

  Serial.begin(115200);
  gfx.begin();
  gfx.Cls();
  gfx.ScrollEnable(true);
  gfx.BacklightOn(true);
  gfx.Orientation(PORTRAIT);
  gfx.SmoothScrollSpeed(1);
  gfx.TextColor(WHITE); gfx.Font(1);  gfx.TextSize(1);
  gfx.touch_Set(TOUCH_ENABLE);
  gfx.FillScreen(BLACK);
  p4dlogo(20,30);
  delay(1000);
  gfx.TextColor(WHITE);gfx.Font(2);  gfx.TextSize(1);
  gfx.println(" ");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println(" "); 
  gfx.println("       4D Systems");
  delay(1000);
  gfx.println("    Turning Technology");
  gfx.println("        into Art"); 
  gfx.println(" ");
  gfx.println();
  gfx.print("connecting to ");
  gfx.println(ssid);
  WiFi.begin(ssid, password);
  int retries = 0;
  while ((WiFi.status() != WL_CONNECTED) && (retries < 22)) {
  retries++;
  delay(1000);
  gfx.println("Connecting");
  
  }
  gfx.println("");
  if(WiFi.status() == WL_CONNECTED){
  Wconnected = true;
  gfx.println("WiFi connected");

  gfx.print("IP address: ");
  String ip;
  ip = ipToString(WiFi.localIP());
  gfx.println(ip);
  } else {
  Wconnected = false;
  gfx.println("Connection Failure ");
  }
  if(Wconnected){
  if(gfx.CheckSD() == true){
  gfx.PrintImageWifi("http://www.4dsystems.com.au/downloads/RAW/conectd.gci");
  gfx.MoveTo(10, 233);
  gfx.print("Downloading Demo Files.");
  gfx.MoveTo(2, 252);
  gfx.print(" 4d1.gci ");
  if (!SD.exists("4d1.gci")) {
  gfx.DownloadFile("http://www.4dsystems.com.au/downloads/RAW/4d1.gci","4d1.gci");
  }
  gfx.print("4d2.gci ");
  if (!SD.exists("4d2.gci")) {
  gfx.DownloadFile("http://www.4dsystems.com.au/downloads/RAW/4d2.gci","4d2.gci");
  }
  gfx.println("4d3.gci");
  if (!SD.exists("4d3.gci")) {
  gfx.DownloadFile("http://www.4dsystems.com.au/downloads/RAW/4d3.gci","4d3.gci");
  }
  gfx.MoveTo(2, 268);
  gfx.print(" 4d4.gci ");
  if (!SD.exists("4d4.gci")) {
  gfx.DownloadFile("http://www.4dsystems.com.au/downloads/RAW/4d4.gci","4d4.gci");
  }
  gfx.println("4d5.gci");
  if (!SD.exists("4d5.gci")) {
  gfx.DownloadFile("http://www.4dsystems.com.au/downloads/RAW/4d5.gci","4d5.gci");
  }
  gfx.MoveTo(2, 284);
  gfx.print(" 4dIOD.gci ");
  if (!SD.exists("4dIOD.gci")) {
  gfx.DownloadFile("http://www.4dsystems.com.au/downloads/RAW/4dIOD.gci","4dIOD.gci");
  }
   gfx.print(" 4dIOD.dat ");
  if (!SD.exists("4dIOD.dat")) {
  gfx.DownloadFile("http://www.4dsystems.com.au/downloads/RAW/4dIOD.dat","4dIOD.dat");
  }
  gfx.MoveTo(2, 300);
  gfx.println(" space.gci");
  if (!SD.exists("space.gci")) {
  gfx.DownloadFile("http://www.4dsystems.com.au/downloads/RAW/space.gci","space.gci");
  }
  
  gfx.println("Demo files Download Ok");
  delay(2000);
  }
  }
}

void loop() {
  if(gfx.CheckSD() == true){
  gfx.Orientation(LANDSCAPE);
  gfx.Cls(0);
  gfx.println(" ");
  gfx.println("           4D systems IOD");
  gfx.println(" ");
  gfx.println("         GFX4d Library Demo");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println("        Landscape Slide Show");
  delay(3000);
  dataFile.close();
  gfx.Cls(0);
  gfx.PrintImageFile("4d1.gci");
  dataFile.close();
  delay(5000);
  gfx.MoveTo(0,0);
  gfx.PrintImageFile("4d2.gci");
  dataFile.close();
  delay(5000);
  gfx.MoveTo(0,0);
  gfx.PrintImageFile("4d3.gci");
  dataFile.close();
  delay(5000);
  gfx.MoveTo(0,0);
  gfx.PrintImageFile("4d4.gci");
  dataFile.close();
  delay(5000);
  gfx.MoveTo(0,0);
  gfx.PrintImageFile("4d5.gci");
  dataFile.close();
  delay(5000);
  gfx.Cls(0);
  gfx.println(" ");
  gfx.println("           4D systems IOD");
  gfx.println(" ");
  gfx.println("         GFX4d Library Demo");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println("            User Images");
  delay(3000);
  gfx.Cls(0);
  userimage();
  delay(3000);
  }
  gfx.Orientation(LANDSCAPE);
  gfx.Cls(0);
  gfx.println(" ");
  gfx.println("          4D systems IOD");
  gfx.println(" ");
  gfx.println("        GFX4d Library Demo");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println("    40 User defined Characters");
  delay(3000);
  gfx.Cls(0);
  n=0;
  y=0;
  invaders();
  if(gfx.CheckSD() == true){
  gfx.Cls(0);
  gfx.println(" ");
  gfx.println("          4D systems IOD");
  gfx.println(" ");
  gfx.println("        GFX4d Library Demo");
  gfx.println(" ");
  gfx.println(" ");
  gfx.println("     2 User defined Characters");
  gfx.println("       Over Background image");
  delay(3000);
  gfx.Orientation(1);
  gfx.Cls(0);
  BouncingBall(700);
  }
}

void sigStrength(uint16_t xpos, uint16_t ypos, uint16_t color, int sig) {
  for (int x = 0; x < 5; x++) {
  if (sig > ((6 - x) * -20)) {
  gfx.RectangleFilled(xpos + (x * 4), ypos + (12 - x * 3), 2, 15 - (12 - x * 3), GREEN);
  } else {
  gfx.RectangleFilled(xpos + (x * 4), ypos + (12 - x * 3), 2, 15 - (12 - x * 3), DARKGRAY);
  }
  }
}

void lock(uint16_t xpos, uint16_t ypos, uint16_t color) {
  gfx.RoundRectFilled(xpos, ypos + 8, 8, 8, 2, LIGHTGREY);
  gfx.Circle(xpos + 4, ypos + 8, 3, LIGHTGREY);
  gfx.CircleFilled(xpos + 4, ypos + 10, 1, BLACK);
  gfx.TriangleFilled(xpos + 4, ypos + 10, xpos + 3, ypos + 13, xpos + 5, ypos + 13, BLACK);
}

void moveinvadera(){
  if(typec == 0 || typec == 1){
  type = 1;
  } else {
  type = 0;
  }
  for(int i = 0; i < 8; i++){
  if(type == 0){
  gfx.UserCharacter(invader1a,20,8 + (i * 26) + n,10 + y,MAGENTA,BLACK);
  } else {
  gfx.UserCharacter(invader1b,20,8 + (i * 26) + n,10 + y,MAGENTA,BLACK);
  }
  }
}

void moveinvaderc(){
  for(int i = 0; i < 8; i++){
  if(type == 0){
  gfx.UserCharacter(invader2a,20,5 + (i * 26) + n,31 + y,PURPLE,BLACK);
  } else {
  gfx.UserCharacter(invader2b,20,5 + (i * 26) + n,31 + y,PURPLE,BLACK);
  }
  }
}
void moveinvaderb(){
  for(int i = 0; i < 8; i++){
  if(type == 0){
  gfx.UserCharacter(invader2a,20,5 + (i * 26) + n,52 + y,LIGHTBLUE,BLACK);
  } else {
  gfx.UserCharacter(invader2b,20,5 + (i * 26) + n,52 + y,LIGHTBLUE,BLACK);
  }
  }
}

void moveinvaderd(){
  for(int i = 0; i < 8; i++){
  if(type == 0){
  gfx.UserCharacter(invader3a,20,5 + (i * 26) + n,73 + y,GREEN,BLACK);
  } else {
  gfx.UserCharacter(invader3b,20,5 + (i * 26) + n,73 + y,GREEN,BLACK);
  }
  }
}
void moveinvadere(){

  for(int i = 0; i < 8; i++){
  if(type == 0){
  gfx.UserCharacter(invader3a,20,5 + (i * 26) + n,94 + y,YELLOW,BLACK);
  } else {
  gfx.UserCharacter(invader3b,20,5 + (i * 26) + n,94 + y,YELLOW,BLACK);
  }
  }
}

void BouncingBall(uint16_t c){
  gfx.PrintImageFile("/space.gci");
  for( uint16_t x = 0; x < c; x++){
  n = n + nd;
  if(n > 304){
  nd = -3;
  }
  nn = nn + nnd;
  if(nn > 304){
  nnd = -3;
  }
  if(n < 3){
  nd = 3;
  }
  if(nn < 3){
  nnd = 3;
  }
  y = y+ yd;
  if(y > 222){
  yd = -3;
  }
  yy = yy + yyd;
  if(yy > 222){
  yyd = -3;
  }
  if(y < 3){
  yd = 3;
  }
  if(yy < 3){
  yyd = 3;
  }
  gfx.UserCharacterBG(ball,16, n,y,WHITE,true,0);
  gfx.UserCharacterBG(ball,16,nn,yy,WHITE,true,0);
  }
}

void invaders(){
  for(int t=0;t<4;t++){
  for(int x=0;x<100;x++){
  n=n+1;
  moveinvadera();
  yield();
  delayMicroseconds(800);
  moveinvaderb();
  yield();
  delayMicroseconds(800);
  moveinvaderc();
  yield();
  delayMicroseconds(800);
  moveinvaderd();
  yield();
  delayMicroseconds(800);
  moveinvadere();
  typec = typec + 1;
  if(typec > 3){
  typec = 0;
  }
  y=y+24;
//movechr();
  y=y-24;
  }
  for(int m=0;m<5;m++){
  y=y+1;
  moveinvadera();
  yield();
  delayMicroseconds(800);
  moveinvaderb();  
  yield();
  delayMicroseconds(800);
  moveinvaderc();
  yield();
  delayMicroseconds(800);
  moveinvaderd();
  yield();
  delayMicroseconds(800);
  moveinvadere();
  y=y+24;
//movechr();
  y=y-24;
  }
  for(int x=0;x<100;x++){
  n=n-1;
  moveinvadera();
  yield();
  delayMicroseconds(800);
  moveinvaderb();
  yield();
  delayMicroseconds(800);
  moveinvaderc();
  yield();
  delayMicroseconds(800);
  moveinvaderd();
  yield();
  delayMicroseconds(800);
  moveinvadere();
  typec = typec + 1;
  if(typec > 3){
  typec = 0;
  }
  y=y+24;
  //movechr();
  y=y-24;
  }
  for(int m=0;m<5;m++){
  y=y+1;
  moveinvadera();
  yield();
  delayMicroseconds(800);
  moveinvaderb();  
  yield();
  delayMicroseconds(800);
  moveinvaderc();
  yield();
  delayMicroseconds(800);
  moveinvaderd();
  yield();
  delayMicroseconds(800);
  moveinvadere();
  y=y+24;
  //movechr();
  y=y-24;
  }
  yield();
//gfx.UserCharacterBG(invader1a,20,10 + n,10 + y,GFX4d_WHITE,false,0);
  if(y > 205){
  y= 10;
  } 
  }
}

void userimage(){
  gfx.Open4dGFX("4dIOD");
  for(int y = 0; y < 3; y++){
  for(int x = 0; x < 100; x++){
  if(y == 0){
  gfx.UserImages(iCoolgauge1, x);
  yield();
  }
  if(y == 1){
  gfx.UserImages(iGauge1, x);
  yield();
  }
  if(y == 2){
  gfx.UserImages(iMeter1, x);
  yield();
  }
  yield();
  }
  if(y > -1 && y < 2){
  gfx.UserImages(i4Dbutton1, y);

  gfx.UserImages(i4Dbutton3, y);
  gfx.UserImages(i4Dbutton4, y);
  gfx.UserImages(i4Dbutton5, y);
  }
  }
}

void p4dlogo(int16_t xloc, int16_t yloc){
  gfx.Cls(BLACK);
  gfx.CircleFilled(xloc + 141, yloc + 60, 60, WHITE);
  gfx.CircleFilled(xloc + 141, yloc + 60, 35, BLACK);
  gfx.CircleFilled(xloc + 141, yloc + 60, 18, RED);
  gfx.RectangleFilled(xloc + 61, yloc, xloc + 61 + 54, yloc + 120, BLACK);
  gfx.RectangleFilled(xloc + 121, yloc + 42, xloc + 121 + 20, yloc + 42 + 37, RED);
  gfx.RectangleFilled(xloc + 115, yloc, xloc + 115 + 26, yloc + 25, WHITE);
  gfx.RectangleFilled(xloc + 115, yloc + 96, xloc + 115 + 26, yloc + 96 + 25, WHITE);
  gfx.RectangleFilled(xloc + 115, yloc + 25, xloc + 115 + 26, yloc + 25 + 17, BLACK);
  gfx.RectangleFilled(xloc + 115, yloc + 79, xloc + 115 + 26, yloc + 79 + 17, BLACK);
  gfx.TriangleFilled(xloc + 121, yloc + 42, xloc + 85, yloc + 78, xloc + 129, yloc + 78, RED);
  gfx.TriangleFilled(xloc + 95, yloc, xloc + 55, yloc + 40, xloc + 95, yloc + 40, WHITE);
  gfx.TriangleFilled(xloc + 94, yloc + 41, xloc + 54, yloc + 41, xloc + 54, yloc + 80, WHITE);
  gfx.TriangleFilled(xloc + 53, yloc + 42, xloc + 13, yloc + 82, xloc + 53, yloc + 82, WHITE);
  gfx.TriangleFilled(xloc + 52, yloc + 83, xloc + 12, yloc + 83, xloc + 12, yloc + 123, WHITE);
  gfx.TriangleFilled(xloc + 11, yloc + 84, xloc - 1, yloc + 96, xloc + 11, yloc + 96, WHITE);
  gfx.RectangleFilled(xloc, yloc + 96, xloc + 95, yloc + 96 + 25, WHITE);
  gfx.RectangleFilled(xloc, yloc + 121, xloc + 40, yloc + 121 + 25, BLACK);
  gfx.RectangleFilled(xloc + 64, yloc + 121, xloc + 64 + 31, yloc + 121 + 35, WHITE);
}

String ipToString(IPAddress ip){
  String s="";
  for (int i=0; i<4; i++)
  s += i  ? "." + String(ip[i]) : String(ip[i]);
  return s;
}
void printcoord(){
  int a = gfx.getScrollOffset();
  int b = gfx.getY();
  Serial.print(a);Serial.print("  ");Serial.println(b);
}
