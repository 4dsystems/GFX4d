/***************************************************************************
*                                                                          *
*  4D Systems _4Dos  Pre-release version                                   *
*                                                                          *
*  Date:        11 July 2017                                               *
*                                                                          *
*  Description: An operating system and Basic Interpreter                  *
*               for 4D Systems Gen4 IoD range of intelligent displays.     *
*                                                                          *
*                   GNU LESSER GENERAL PUBLIC LICENSE                      *
*                       Version 3, 29 June 2007                            *
*                                                                          *
* Copyright (C) 2007 Free Software Foundation, Inc. <http://fsf.org/>      *
* Everyone is permitted to copy and distribute verbatim copies             *
* of this license document, but changing it is not allowed.                *
*                                                                          *
*                                                                          *
* This version of the GNU Lesser General Public License incorporates       *
* the terms and conditions of version 3 of the GNU General Public          *
* License, supplemented by the additional permissions listed below.        *
*                                                                          *
*  0. Additional Definitions.                                              *
*                                                                          *
*   As used herein, "this License" refers to version 3 of the GNU Lesser   *
* General Public License, and the "GNU GPL" refers to version 3 of the GNU *
* General Public License.                                                  *
*                                                                          *
*   "The Library" refers to a covered work governed by this License,       *
* other than an Application or a Combined Work as defined below.           *
*                                                                          *
*   An "Application" is any work that makes use of an interface provided   *
* by the Library, but which is not otherwise based on the Library.         *
* Defining a subclass of a class defined by the Library is deemed a mode   *
* of using an interface provided by the Library.                           *
*                                                                          *
*   A "Combined Work" is a work produced by combining or linking an        *
* Application with the Library.  The particular version of the Library     *
* with which the Combined Work was made is also called the "Linked         *
* Version".                                                                *
*                                                                          *
*   The "Minimal Corresponding Source" for a Combined Work means the       *
* Corresponding Source for the Combined Work, excluding any source code    *
* for portions of the Combined Work that, considered in isolation, are     *
* based on the Application, and not on the Linked Version.                 *
*                                                                          *
*   The "Corresponding Application Code" for a Combined Work means the     *
* object code and/or source code for the Application, including any data   *
* and utility programs needed for reproducing the Combined Work from the   *
* Application, but excluding the System Libraries of the Combined Work.    *
*                                                                          *
*  1. Exception to Section 3 of the GNU GPL.                               *
*                                                                          *
*   You may convey a covered work under sections 3 and 4 of this License   *
* without being bound by section 3 of the GNU GPL.                         *
*                                                                          *
*  2. Conveying Modified Versions.                                         *
*                                                                          *
*   If you modify a copy of the Library, and, in your modifications, a     *
* facility refers to a function or data to be supplied by an Application   *
* that uses the facility (other than as an argument passed when the        *
* facility is invoked), then you may convey a copy of the modified         *
* version:                                                                 *
*                                                                          *
*   a) under this License, provided that you make a good faith effort to   *
*   ensure that, in the event an Application does not supply the           *
*   function or data, the facility still operates, and performs            *
*   whatever part of its purpose remains meaningful, or                    *
*                                                                          *
*   b) under the GNU GPL, with none of the additional permissions of       *
*   this License applicable to that copy.                                  *
*                                                                          *
*  3. Object Code Incorporating Material from Library Header Files.        *
*                                                                          *
*   The object code form of an Application may incorporate material from   *
* a header file that is part of the Library.  You may convey such object   *
* code under terms of your choice, provided that, if the incorporated      *
* material is not limited to numerical parameters, data structure          *
* layouts and accessors, or small macros, inline functions and templates   *
* (ten or fewer lines in length), you do both of the following:            *
*                                                                          *
*   a) Give prominent notice with each copy of the object code that the    *
*   Library is used in it and that the Library and its use are             *
*   covered by this License.                                               *
*                                                                          *
*   b) Accompany the object code with a copy of the GNU GPL and this       *
*   license document.                                                      *
*                                                                          *
*  4. Combined Works.                                                      *
*                                                                          *
*   You may convey a Combined Work under terms of your choice that,        *
* taken together, effectively do not restrict modification of the          *
* portions of the Library contained in the Combined Work and reverse       *
* engineering for debugging such modifications, if you also do each of     *
* the following:                                                           *
*                                                                          *
*   a) Give prominent notice with each copy of the Combined Work that      *
*   the Library is used in it and that the Library and its use are         *
*   covered by this License.                                               *
*                                                                          *
*   b) Accompany the Combined Work with a copy of the GNU GPL and this     * 
*   license document.                                                      *
*                                                                          *
*   c) For a Combined Work that displays copyright notices during          *
*   execution, include the copyright notice for the Library among          *
*   these notices, as well as a reference directing the user to the        *
*   copies of the GNU GPL and this license document.                       *
*                                                                          *
*   d) Do one of the following:                                            *
*                                                                          *
*       0) Convey the Minimal Corresponding Source under the terms of this *
*       License, and the Corresponding Application Code in a form          *
*       suitable for, and under terms that permit, the user to             *
*       recombine or relink the Application with a modified version of     *
*       the Linked Version to produce a modified Combined Work, in the     *
*       manner specified by section 6 of the GNU GPL for conveying         *
*       Corresponding Source.                                              *
*                                                                          *
*       1) Use a suitable shared library mechanism for linking with the    *
*       Library.  A suitable mechanism is one that (a) uses at run time    *
*       a copy of the Library already present on the user's computer       *
*       system, and (b) will operate properly with a modified version      *
*       of the Library that is interface-compatible with the Linked        *
*       Version.                                                           *
*                                                                          *
*   e) Provide Installation Information, but only if you would otherwise   *
*   be required to provide such information under section 6 of the         *
*   GNU GPL, and only to the extent that such information is               *
*   necessary to install and execute a modified version of the             *
*   Combined Work produced by recombining or relinking the                 *
*   Application with a modified version of the Linked Version. (If         *
*   you use option 4d0, the Installation Information must accompany        *
*   the Minimal Corresponding Source and Corresponding Application         *
*   Code. If you use option 4d1, you must provide the Installation         *
*   Information in the manner specified by section 6 of the GNU GPL        *
*   for conveying Corresponding Source.)                                   *
*                                                                          *
*  5. Combined Libraries.                                                  *
*                                                                          *
*   You may place library facilities that are a work based on the          *
* Library side by side in a single library together with other library     *
* facilities that are not Applications and are not covered by this         *
* License, and convey such a combined library under terms of your          *
* choice, if you do both of the following:                                 *
*                                                                          *
*   a) Accompany the combined library with a copy of the same work based   *
*   on the Library, uncombined with any other library facilities,          *
*   conveyed under the terms of this License.                              *
*                                                                          *
*   b) Give prominent notice with the combined library that part of it     *
*   is a work based on the Library, and explaining where to find the       *
*   accompanying uncombined form of the same work.                         *
*                                                                          *
*  6. Revised Versions of the GNU Lesser General Public License.           *
*                                                                          *
*   The Free Software Foundation may publish revised and/or new versions   *
* of the GNU Lesser General Public License from time to time. Such new     *
* versions will be similar in spirit to the present version, but may       *
* differ in detail to address new problems or concerns.                    *
*                                                                          *
*   Each version is given a distinguishing version number. If the          *
* Library as you received it specifies that a certain numbered version     *
* of the GNU Lesser General Public License "or any later version"          *
* applies to it, you have the option of following the terms and            *
* conditions either of that published version or of any later version      *
* published by the Free Software Foundation. If the Library as you         *
* received it does not specify a version number of the GNU Lesser          *
* General Public License, you may choose any version of the GNU Lesser     *
* General Public License ever published by the Free Software Foundation.   *
*                                                                          *
*   If the Library as you received it specifies that a proxy can decide    *
* whether future versions of the GNU Lesser General Public License shall   *
* apply, that proxy's public statement of acceptance of any version is     *
* permanent authorization for you to choose that version for the           *
* Library.                                                                 *
*                                                                          *
***************************************************************************/

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <WiFiUdp.h>
#include "GFX4d.h"

GFX4d gfx = GFX4d();
File dataFile;

WiFiUDP Udp;
char incomingPacket[256];  // buffer for incoming packets
char xpacket[41];

static const char commands[] = 
     ":PINMODE,#:DIGITALWRITE,$:DIGITALREAD,%:PANEL,&:"
     "PANELRECESSED,':USERIMAGESDR,(,c:IP,):OPEN4DGFX,*:DELETEBUTTON,+:"
     "PALETTE,`:FOR,-:LINE,.:CIRCLEFILLED,/:"
     "CIRCLE,0:RECTANGLEFILLED,1:RECTANGLE,2:"
     "TRIANGLEFILLED,3:TRIANGLE,4:"
     "LET,5:IF,6:ENDIF,9:ELSE,;:"
     "NEXT,<:BUTTON,=:SCROLL,>:GOTO,?:LIST,@:HELP,A:"
     "DIR,B:FREE,C:WIFIDISCONNECT,D:CLS,E:DELETE,F:SERIALTX,G:"
     "RESET,H:SERIALMODE,I:PRINT,J:PRINTLN,K:SERIAL,L:"
     "DEL,M:FONT,N:YIELD,O:MOVETO,P:PRINTIMAGE,Q:"
     "PRINTIMAGEWIFI,R:USERIMAGES,S:USERIMAGE,T:GFX,U:"
     "SAVE,V:DELAY,W:COLOR,X:ORIENTATION,Y:CD,Z:NEW,[:"
     "MKDIR,]:RMDIR,^:RUN,_:TYPE,a:LOAD,b:WIFISCAN,c:"
     "WIFICONNECT,d:RENAME,e:COPY,f:DOWNLOAD,g:"
     "DATA,h:RUNSTOP,i:END,j:RESUME,k:TELNETTX,l:UDP,m:"
     "POINT,n:GOSUB,o:RETURN,p:TELNETMODE,q:TELNETCONNECT,r:"
     "UDPTX,s:UDPTARGET,t:INPUT,u:AND,v:OR,w:WIFIMODE,x:"
     "REMOTEIP,y:WIFIPASSWORD,z:APNAME,{:LEDDIGITS,|:"
     "UDPCLONE,}:IMAGETOUCHENABLE,7:SIMSEND,8:";

const byte k1p[] = {81, 0, 0, 24, 24, 2, 87, 24, 0, 24, 24, 2, 
                    69, 48, 0, 24, 24, 2, 82, 72, 0, 24, 24, 2, 
                    84, 96, 0, 24, 24, 2, 89, 120, 0, 24, 24, 2, 
                    85, 144, 0, 24, 24, 2, 73, 168, 0, 24, 24, 2, 
                    79, 192, 0, 24, 24, 2, 80, 216, 0, 24, 24, 2, 
                    65, 0, 24, 24, 24, 2, 83, 24, 24, 24, 24, 2, 
                    68, 48, 24, 24, 24, 2, 70, 72, 24, 24, 24, 2, 
                    71, 96, 24, 24, 24, 2, 72, 120, 24, 24, 24, 2, 
                    74, 144, 24, 24, 24, 2, 75, 168, 24, 24, 24, 2, 
                    76, 192, 24, 24, 24, 2, 8, 216, 24, 24, 24, 1, 
                    90, 0, 48, 24, 24, 2, 88, 24, 48, 24, 24, 2, 
                    67, 48, 48, 24, 24, 2, 86, 72, 48, 24, 24, 2, 
                    66, 96, 48, 24, 24, 2, 78, 120, 48, 24, 24, 2, 
                    77, 144, 48, 24, 24, 2, 13, 168, 48, 72, 24, 1, 
                    1, 0, 72, 48, 24, 1, 44, 48, 72, 24, 24, 2, 
                    32, 72, 72, 96, 24, 1, 46, 168, 72, 24, 24, 2, 
                    3, 192, 72, 48, 24, 1};
                                
const byte k2p[] = {49, 0, 0, 24, 24, 2, 50, 24, 0, 24, 24, 2, 
                    51, 48, 0, 24, 24, 2, 52, 72, 0, 24, 24, 2, 
                    53, 96, 0, 24, 24, 2, 54, 120, 0, 24, 24, 2, 
                    55, 144, 0, 24, 24, 2, 56, 168, 0, 24, 24, 2, 
                    57, 192, 0, 24, 24, 2, 48, 216, 0, 24, 24, 2, 
                    33, 0, 24, 24, 24, 2, 34, 24, 24, 24, 24, 2, 
                    35, 48, 24, 24, 24, 2, 36, 72, 24, 24, 24, 2, 
                    37, 96, 24, 24, 24, 2, 38, 120, 24, 24, 24, 2, 
                    39, 144, 24, 24, 24, 2, 40, 168, 24, 24, 24, 2, 
                    41, 192, 24, 24, 24, 2, 8, 216, 24, 24, 24, 1, 
                    42, 0, 48, 24, 24, 2, 43, 24, 48, 24, 24, 2, 
                    45, 48, 48, 24, 24, 2, 47, 72, 48, 24, 24, 2, 
                    58, 96, 48, 24, 24, 2, 59, 120, 48, 24, 24, 2, 
                    61, 144, 48, 24, 24, 2, 13, 168, 48, 72, 24, 1, 
                    2, 0, 72, 48, 24, 1, 60, 48, 72, 24, 24, 2, 
                    32, 72, 72, 96, 24, 1, 62, 168, 72, 24, 24, 2, 
                    95, 192, 72, 24, 24, 1, 64, 216, 72, 24, 24, 2};

uint16_t color[24] = {0x0000,0xFFFF,0x7BEF,0xC618,0x000F,0x001F,
                      0x061F,0xFC10,0x03E0,0x07E0,0x03EF,0x07FF,
                      0x780F,0x7BE0,0xFD20,0x7800,0xF81F,0xF800,
                      0xFFE0,0xAFE5,0xA145,0xF81F,0xBDD7,0xD69A};
/*
const char PROGMEM b64_alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                    "abcdefghijklmnopqrstuvwxyz"
                                    "0123456789+/";

*/

const char messages[] = "|Directory of SD|Ok|Directory not found|Empty "
                        "|Dir|Scanning ...|Finished Scan|no networks found"
                        "| Networks found|: |Connecting to |Connecting"
                        "|WiFi connected |IP address: |Connection Failure "
                        "|File :| deleted...|Ready|Telnet Client Stop"
                        "|New Telnet client|4Dos 1.0 4D Systems|Out of Range"
                        "|Syntax Error at line:|Break at line:"
                        "|Running Boot Program ...|Output | bytes"
                        "|WiFi disconnected|Serial not connected"
                        "|Prefences Saved|File Error|Downloading "
                        "|No WiFi connection |Syntax Error"
                        "|File not found |No AP name saved."
                        "|Access point not started|WiFi access point "
                        "|No UDP Port set.|Download failed.|";

const char function[] = ":RND:SIN:COS:TAN:DIGITALREAD:ANALOGREAD:ORIENTATION:TOUCHX"
                        ":TOUCHY:TOUCHP:TEMPERATURE:UDPRX:TOUCHD:TOUCHED:UDPPACKET"
                        ":SIMDATA:SIMTYPE:INT:CHECKBUTTONS:PULSEIN:";

char WiFiAPPSK[8];
char prog[7001];
uint16_t progpos[1000];
byte proglen[1000];
byte progkword[1000];
byte vcount = 0;
int lln;
int llnold;
int progend = 1;
int curlinenum;
byte ifcount;
float dallastemp;
boolean fixsyntax;
boolean ift[100];
boolean pu = false;
boolean xp = false;
boolean susperr = false;
boolean udprx = false;
boolean multit = false;
boolean udpclone = false;
boolean accesspoint = false;
boolean endrun = false;
boolean inpf = false;
boolean pdelf = false;
boolean delf = false;
boolean dels = false;
boolean udp = false;
boolean rprog = false;
boolean eflag = false;
boolean tncmdmode = false;
boolean runnin = false;
boolean gfxon1 = false;
boolean rsume = false;
boolean rstop = false;
boolean func = false;
boolean mtask = false;
boolean tclient = false;
boolean exec = true;
boolean serror = false;
boolean imagedisp = false;
boolean Wconnected = false;
boolean boot = false;
boolean tserv = false;
boolean serialm = true;  
String tempvarname;
String iinputString;
String mint;
String comma = ",";
String kt;
String pline;
String wps;
String apn;
String udptargetip;
String tncmd;
String test1;
String wdir = "/";
String dirtree[10];
String user;
String epass;
String smtp;
String userwebip;
String rcpt;
String pmode[37];
String pins;
long delstart;
long dellength;
int uprt;
int rpl;
int prt;
int fnln;
byte drawnbut[128];
byte kword;
byte orient1;
byte oldorient;
byte gfont;
byte fieldnum;
byte opm;
byte sfont;
byte dirtrn;
uint16_t twcol;
byte twfont;
int fncount;
int chkrp;
int touchx;
int touchy;
int touchp;
float cd[10];
int fnloop[100];
int orient;
uint16_t udptargetport;
boolean telnt = false;
boolean notprog = false;
boolean serialon = false;
boolean progrun = false;
boolean gfxon;
String field[30];
String ssids;
String passwords;
int fnf;
int fnt[100];
int flen[30];
int but;
int buttw;
int lastbut;
int chrp;
int chrg;
boolean skipchk;
uint16_t bcolor;
int modedelay;
int numTabs = 0;
int butcount;
char ivar[400];
byte vtot;
byte vindex;
byte ipindex;

WiFiClient client;
WiFiServer telnetServer(9965);
WiFiClient serverClient;
WiFiServer server(80);

static bool hasSD = false;
File uploadFile;

void setup() {
Serial.begin(115200);
  ift[0] = true;
  apn.reserve(10);
  wps.reserve(10);
  opm = 1;
  telnetServer.begin();
  telnetServer.setNoDelay(true);
  dirtree[0] = "/";
  gfx.begin();
  gfx.Cls();
  gfx.ScrollEnable(true);
  gfx.BacklightOn(true);
  gfx.Orientation(LANDSCAPE);
  gfx.SmoothScrollSpeed(0);
  twcol = PALEGREEN;
  sfont = 2;
  gfx.TextColor(twcol); gfx.Font(sfont);  gfx.TextSize(1);
  bcolor = LIGHTGREY;
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
  if(gfx.Orientation() == 2 || gfx.Orientation() == 3){
  gfx.TextWindow(0, 0, 240, 223, twcol, BLACK, LIGHTGREY);
  }
  if(gfx.Orientation() == 0 || gfx.Orientation() == 1){
  gfx.TextWindow(0, 0, 320, 112, twcol, BLACK, LIGHTGREY);
  }
  key1();
  String p = "PREFS.4DS";
  if(SD.exists((char*)p.c_str())) {
  runscript("PREFS.4DS");
  }
  gfx.TWtextcolor(twcol);
  dispmsg(20, true, true);
  //gfx.TWtextcolor(LIMEGREEN);
  dispmsg(17, true, true);
  String b = "BOOT.BAS";
  if(SD.exists((char*)b.c_str())) {
  dispmsg(24, true, true);
  load("BOOT.BAS");
  boot = true;
  }
  orient = gfx.Orientation();
  oldorient = orient;
}

void loop() {
  opm = 1;
 
  WiFiClient client = server.available();
 
  getudp();
  checktelnet();
  buttw = gfx.CheckButtons();
  if(buttw != lastbut && buttw > 0){
  but = buttw;
  }
  getserial();
 
  gettelnet();
  if(modedelay > 0){
  modedelay = modedelay -1;
  }
  skipchk = false;
  if(modedelay > 0 && but == 64){
  skipchk = true;
  }
  if(modedelay > 0 && but == 95){
  skipchk = true;
  }
  if(modedelay > 0 && but == 1){
  skipchk = true;
  }
  if(modedelay > 0 && but == 2){
  skipchk = true;
  }
  if(skipchk == false){
  if(but > 31 && but < 127){
  //if(gfxon == false){
  gfx.TWwrite(but);
  //}
  }
  if(boot){
  boot = false;
  command("RUN");
  but = 13;
  }
  if(but == 13){
  gfx.TWwrite(but);
  if(serialon){
  Serial.println("");
  }
  gfx.ButtonUp(13);
  String test = gfx.GetCommand();
  if(test.indexOf("Error") < 1){
  command(test);
  if(rprog){
  rprog = false;
  field[1].trim();
  String fullpath = wdir + field[1];
  if(fullpath.length() > 1){
  runscript(fullpath);
  } else {
  progrun = true;
  chrp = 0;
  rsume = false;
  rstop = false;
  runprog();
  progrun = false;
  }
  }
  }
  }
  if(but == 8 || but == 127){
  gfx.TWwrite(8);
  }
  if(but == 1){
  key2();
 
  but = 2;
  skipchk = true;
  modedelay = 30;
  }
  if(but == 2 && skipchk == false){
  key1();

  but = 1;
  skipchk = true;
  modedelay = 30;
  }
  if(but == 3 && skipchk == false){
  key3();

  modedelay = 30;
  }
  }
  delay(3);
  yield();
  lastbut = buttw;
  but = 0;
}

void command(String cmdstr){
  boolean gotln = false;
  boolean noerror = false;
  for(int n = 0; n < 30; n++){
  field[n] = "";
  }
  yield();
  int fl = 0;
  char fb = 32;
  char fc = 44;
  char chk;
  boolean chkskip = false;
  cmdstr = cmdstr + char(32);
  uint8_t len;
  uint8_t f = 0;
  String build;
  len = cmdstr.length();
  for(int t = 0; t < len; t++){
  chk = cmdstr.charAt(t);
  fl = fl + 1;
  if(chk == 34){
  if(chkskip == false){
  chkskip = true;
  } else {
  chkskip = false;
  }
  }
  if(chk != fb && chk != fc || chkskip == true){
  build = build + chk;
  } else {
  build.trim();
  yield();
  field[f] = build;
  flen[f] = fl;
  fl = 0;
  build ="";
  f = f + 1;
  if(chk == fc){
  field[f] = ",";
  f = f + 1;
  }
  
  }
  }
  if(progrun){
  for(int n = 0; n < 28; n ++){
  field[n] = field[n + 1];
  }
  }
  field[0].toUpperCase();
  field[0].trim();
  String progbuild = "";
  int scrtest = field[0].toInt();
  notprog = false;
  if(scrtest > 0 && scrtest < 1001){
  gotln = true;
  int cc = 0;
  notprog = true;
  boolean skipnl = false; 
  for(int s = 0; s < 27; s++){
  field[s].trim();
  progbuild = progbuild + field[s];
  if(field[s + 1] != ""){
  cc = cc + 1;
  if(field[s] != "," && field[s + 1] != ","){
  progbuild = progbuild + " ";
  }
  } else {
  if(cc > 0 && skipnl == false){
  skipnl = true;
  }
  }
  field[s - 1] = "";
  }
  field[29] = "";
  if(cc < 1 && gotln == false){
  progbuild = "";
  }
  if(cc > 0 && pu == false){
  Serial.print(progbuild);
  }
  storeprog(progbuild);
  
}
  yield();
 if(runnin == false || multit){
  if(field[0] != ""){
  String ktest = field[0];
  ktest.trim();
  ktest = ":" + ktest + ",";
  ktest.toUpperCase();
  int chkk = getKeywordPos(ktest, true);
  if(chkk > 0){
  kword = commands[chkk + 1] - 34;
  } else {
  kword = 0;
  }
  }
  } else {
  kword = 0;
  if(notprog == false){
  kword = progkword[curlinenum];
  notprog = false;
 
 }
 }
 if(notprog){
  kword = 0;
  notprog = false;
 }
  noerror = false;
  exec = ift[ifcount];
  switch(kword){
case 70: // DATA
  if(exec || udp){
  noerror = true;
  byte pos = 0;
  byte datnum = getinteger(field[1]);
}
break;
case 71: // RUNSTOP  
  noerror = true;
  Udp.flush();
  rnstop();
  susperr = true;
  endrun = true;
  runnin = false;
  inpf = false;
  ifcount = 0;
break;
case 72: // END  
  noerror = true;
  rnstop();
break;
case 73: // RESUME
  noerror = true;
  if(exec || udp){
  oldorient = gfx.Orientation();
  gfx.Orientation(orient1);
  if(gfxon1){
  turngfxon();
  }
  gfx.Font(gfont);
  rsume = true;
  progrun = true;
  runprog();
  progrun = false;
  
}
break;
case 86: // WIFIMODE
  noerror = true;
  if((exec || udp) && inpf == false){
  field[1].trim();
  if(field[1] == "AP"){
  accesspoint = true;
  WiFi.disconnect();
  WiFi.mode(WIFI_AP);
  uint8_t mac[WL_MAC_ADDR_LENGTH];
  WiFi.softAPmacAddress(mac);
  String macID = String(mac[WL_MAC_ADDR_LENGTH - 2], HEX) +
                 String(mac[WL_MAC_ADDR_LENGTH - 1], HEX);
  macID.toUpperCase();
  String AP_NameString;
  if(apn != ""){
  AP_NameString = apn;  
  } else {
  AP_NameString = "4D-IoD" + macID;
  }
  char AP_NameChar[AP_NameString.length() + 1];
  memset(AP_NameChar, 0, AP_NameString.length() + 1);
  for (int i=0; i<AP_NameString.length(); i++)
  AP_NameChar[i] = AP_NameString.charAt(i);
  boolean resw = WiFi.softAP(AP_NameChar, WiFiAPPSK);  
  if(resw){
  dispmsg(37 ,false, false);
  Println(AP_NameString);
  dispmsg(13, false, false);
  Println(WiFi.softAPIP().toString());
  } else {
  dispmsg(36 ,false, true);
  }
  }
  Println("");
  server.begin();
  if(field[1] == "STA"){
  accesspoint = false;
  WiFi.disconnect();
  WiFi.mode(WIFI_STA);
  }
  }
break;
case 88: // WIFIPASSWORD
  noerror = true;
  if((exec || udp) && inpf == false){
  field[1].trim();
  int wplen = field[1].length();
  wps = field[1];
  field[1].toCharArray(WiFiAPPSK, wplen + 1);
  }
break;
case 89: // APNAME
  noerror = true;
  if((exec || udp) && inpf == false){
  field[1].trim();
  if(field[1] == ""){
  if(apn != ""){
  Println(apn);
  } else {
  dispmsg(35 ,false, true);
  }
  }
  if(field[1] != ""){
  apn = field[1];
  Serial.println(apn);
  }  
  }
break;
case 90: // LEDDIGITS
  noerror = true;
  if((exec || udp) && inpf == false){
  int lval = (int)getsum(1);
  int led = (int)getsum(fieldnum + 1);
  int p1 = (int)getsum(fieldnum + 1);
  int p2 = (int)getsum(fieldnum + 1);
  int p3 = (int)getsum(fieldnum + 1);
  int p4 = (int)getsum(fieldnum + 1);
  gfx.LedDigitsDisplay(lval, led, p1, p2, p3, p4) ;  
  }
break;
case 91: // UDPCLONE
  noerror = true;
  if((exec || udp) && inpf == false){
  field[1].trim();
  Serial.println(field[1]);;
  if(field[1] == "ON"){
  udpclone = true;  
  } else {
  udpclone = false;
  }
  }
break;
case 83: // INPUT
  noerror = true;
  if((exec || udp) && inpf == false){
  inpf = true;
  field[1].trim();
  field[2].trim();
  field[3].trim();
  String temps = "";
  if(field[1].charAt(0) == 34){
  temps = getstring(field[1]); 
  Print(temps);
  //setintvar(field[2], 0);
  tempvarname = field[3];
  } else {
  tempvarname = field[1];
  //setintvar(field[1], 0);  
  }
  inpf = true;
  rpl = fnln;
  ipindex = vindex;
  iinputString = "";
  }
break;
case 1: // PINMODE
  if(exec || udp){
  noerror = true;
  field[1].trim();
  field[1].toUpperCase();
  field[3].trim();
  field[3].toUpperCase();
  byte pinm = (byte)getsum(1);
  pmode[pinm] = field[fieldnum + 1];
  if(pmode[pinm] == "INPUT"){
  pinMode(pinm, INPUT);  
  }
  if(pmode[pinm] == "OUTPUT"){
  pinMode(pinm, OUTPUT);  
  }
  if(pmode[pinm] != "INPUT" && pmode[pinm] != "OUTPUT"){
  noerror = false;
  } else {
  dispmsg(1, false, true);
  }
}
break;
case 2: // DIGITALWRITE
  if(exec || udp){
  noerror = true;
  field[1].trim();
  field[1].toUpperCase();
  field[3].trim();
  field[3].toUpperCase();
  byte pinm = (byte)getsum(1);
  pins = field[fieldnum + 1];;
  if(pins == "HIGH"){
  digitalWrite(pinm, HIGH);  
  }
  if(pins == "LOW"){
  digitalWrite(pinm, LOW);  
  }
  if(pmode[pinm] != "INPUT" && pmode[pinm] != "OUTPUT"){
  noerror = false;
  } else {
  dispmsg(25, false, false);
  Println(pins);
  }
}
break;
case 4: // PANEL
  if(exec || udp){
  noerror = true;
  getdim(5);
  gfx.Panel((int)cd[0],(int)cd[1],(int)cd[2],(int)cd[3],color[(int)cd[4]]);
}
break;
case 74: // TELNETTX
  if(exec || udp){
  noerror = true;
  field[1].trim();
  String tempttx = "";
  if(field[1].charAt(0) == char(34)){
  int tl = field[1].length();
  for(int n = 0; n < (tl - 2);n ++){
  tempttx = tempttx + field[1].charAt(n + 1);  
  }
  tempttx = tempttx + char(13);
  serverClient.print(tempttx);
  } else {
  field[1] = field[1] + char(13);
  serverClient.print(field[1]);
  }
}
break;
case 5: // PANELRECESSED
  if(exec || udp){
  noerror = true;
  getdim(5);
  gfx.PanelRecessed((int)cd[0],(int)cd[1],(int)cd[2],(int)cd[3],color[(int)cd[4]]);
}
break;
case 6: // USERIMAGESDR
if(exec || udp){
  noerror = true;
  field[1].trim();
  field[2].trim();
  int gno;
  int frame;
  uint16_t offsetx;
  uint16_t offsety;
  uint16_t offw;
  uint16_t offh;
  gno = getsum(1);
  frame = getsum(fieldnum + 1);
  offsetx = getsum(fieldnum + 1);
  offsety = getsum(fieldnum + 1);
  offw = getsum(fieldnum + 1);
  offh = getsum(fieldnum + 1);
  gfx.UserImagesDR(gno, frame, (int)offsetx, (int)offsety, (int)offw, (int)offh);
}  
break;
case 7: // IP
  if(exec || udp){
  noerror = true;
  String ip;
  ip = ipToString(WiFi.localIP());
  Println(ip);
}
break;
case 8: // OPEN4DGFX
  if(exec || udp){
  noerror = true;
  field[1].trim();
  String filetest = field[1] + ".dat";
  if(SD.exists((char*)filetest.c_str())) {
  //if(SD.exists(filetest)){
  gfx.Open4dGFX(field[1]);
  } else {
  dispmsg(34, false, true);
  }
}
break;
case 9: // DELETEBUTTON
  if(exec || udp){
  noerror = true;
  uint8_t btno = getsum(1);
  if(field[2] != ""){
  uint16_t brect = color[(int)getsum(fieldnum + 1)];
  gfx.DeleteButton(btno, brect);
  } else {
  gfx.DeleteButton(btno);
  }
}
break;
case 62: // PALETTE
  if(exec || udp){
  noerror = true;
  uint8_t clno = getsum(1);
  uint16_t clchng = getsum(fieldnum + 1);
  color[clno] = clchng;
}
break;
case 11: // FOR
  if(exec || udp){
  for(int n = 0; n < 5; n++){
  field[n].trim();
  }
  fncount = fncount + 1;
  field[4].toUpperCase();
  if(field[4] == "TO" && field[2] == "="){
  noerror = true;
  int frm = (int)getinteger(field[3]);
  setintvar(field[1], frm);
  int tvindex = vindex;
  fnloop[tvindex] = fnln;
  fnt[tvindex] = (int)getinteger(field[5]);    
  }
 }
break;
case 75: // UDP
  if(exec || udp){
  noerror = true;
  if(field[1] == ""){
  if(uprt > 0){
  Println(String(uprt));
  } else {
  dispmsg(38 ,false, true);
  }
  }
  if(field[1] != ""){
  uprt = (uint16_t)getsum(1);
  Udp.begin(uprt);
  }
}
break;
case 12: // LINE
  if(exec || udp){
  noerror = true;
  getdim(5);
  gfx.Line((int)cd[0], (int)cd[1], (int)cd[2], (int)cd[3], color[(int)cd[4]]);
}
break;
case 76: // POINT
  if(exec || udp){
  noerror = true;
  getdim(3);
  gfx.PutPixel((int)cd[0], (int)cd[1], color[(int)cd[2]]);
}
break;
case 14: // CIRCLE
  if(exec || udp){
  noerror = true;
  getdim(4);
  gfx.Circle((int)cd[0], (int)cd[1], (int)cd[2], color[(int)cd[3]]);  
}
break;
case 13: // CIRCLEFILLED
  if(exec || udp){
  noerror = true;
  getdim(4);
  gfx.CircleFilled((int)cd[0], (int)cd[1], (int)cd[2], color[(int)cd[3]]);
}
break;
case 15: // RECTANGLEFILLED
  if(exec || udp){  
  noerror = true;
  getdim(5);
  gfx.RectangleFilled((int)cd[0], (int)cd[1], (int)cd[2], (int)cd[3], color[(int)cd[4]]);
}
break;
case 16: // RECTANGLE
  if(exec || udp){  
  noerror = true;
  getdim(5);
  gfx.Rectangle((int)cd[0], (int)cd[1], (int)cd[2], (int)cd[3], color[(int)cd[4]]); 
}
break;
case 17: // TRIANGLEFILLED
  if(exec || udp){
  noerror = true;
  getdim(7);
  gfx.TriangleFilled((int)cd[0], (int)cd[1], (int)cd[2], (int)cd[3], (int)cd[4], (int)cd[5], color[(int)cd[6]]);
}
break;
case 18: // TRIANGLE
  if(exec || udp){
  noerror = true;
  getdim(7);
  gfx.Triangle((int)cd[0], (int)cd[1], (int)cd[2], (int)cd[3], (int)cd[4], (int)cd[5], color[(int)cd[6]]); 
}
break;
case 19: // LET
  if(exec || udp){
  field[1].trim();
  field[2].trim();
  if(field[2] == "="){
  noerror = true;
  }
  setintvar(field[1],getsum(3));
 }
break;
case 20: // IF
  if(ift[ifcount] == false){
  ifcount = ifcount + 1;
  ift[ifcount] = false;
  } else {
  ifcount = ifcount + 1;
  }
  
  if(exec || udp){  
  byte fieldchk = 1;
  while(field[fieldchk] != ""){
  field[fieldchk].trim();
  fieldchk = fieldchk + 1;
  }
  noerror = true;
  //ifcount = ifcount + 1;
  field[1].toUpperCase();
  if(field[1] == "EXISTS"){
  if(SD.exists((char*)field[2].c_str())) {
  exec = true;  
  } else {
  exec = false;
  }
  ift[ifcount] = exec;
  return;
  }
  if(field[1] == "WIFI"){
  if(Wconnected){
  exec = true;  
  } else {
  exec = false;
  }
  ift[ifcount] = exec;
  return;
  }
  boolean res;
  byte lgccount = 0;
  res = getlogic(1);
  boolean lgcsum;
  exec = res;
  lgcsum = exec;
  while(field[fieldnum + 1] != ""){
  lgccount = lgccount + 1;
  if(field[fieldnum + 1] == "AND"){
  lgcsum = lgcsum & getlogic(fieldnum + 2);
  }
  if(field[fieldnum + 1] == "OR"){
  lgcsum = lgcsum | getlogic(fieldnum + 2);
  }
  }
  exec = lgcsum;
  ift[ifcount] = exec;
}
break;
case 21: // IMAGETOUCHENABLE
  noerror = true;
  if(exec || udp){
  field[1].trim();
  gfx.imageTouchEnable(getsum(1), true);
  }
break;
case 22: // SIMSEND
  noerror = true;
  if(exec || udp){
  xpacket[0] = 68;
  xpacket[1] = 65;
  xpacket[2] = 84;
  xpacket[3] = 65;
  xpacket[4] = 48;
  getdim(9);
  xpacket[5] = cd[0];
  for(int n = 0; n < 3; n ++){
  xpacket[6 + n] = 0;
  }
  for(int n = 0; n < 8; n ++){
  union {
  float a;
  unsigned char bytes[4];
  } thing;
  thing.a = cd[n + 1];
  xpacket[(n * 4) + 9] = thing.bytes[0];
  xpacket[(n * 4) + 10] = thing.bytes[1];
  xpacket[(n * 4) + 11] = thing.bytes[2];
  xpacket[(n * 4) + 12] = thing.bytes[3];
  }
  prt = udptargetport;
  int l = udptargetip.length();
  char tntemp[l];
  udptargetip.toCharArray(tntemp,l + 1);
  Udp.beginPacket(tntemp, 49000);
  Udp.write(xpacket,41);
  Udp.endPacket();
  }
break;
case 23: // ENDIF
  noerror = true;
  exec = true;
  ift[ifcount] = exec;
  ifcount = ifcount - 1;
break;
case 25: // ELSE
  noerror = true;
  //if(exec || udp){
  if(ift[ifcount - 1]){
  if(exec){
  exec = false;
  } else {
  exec = true;
  }
  }
ift[ifcount] = exec;
break;
case 26: // NEXT
  if(exec || udp){
  noerror = true;
  field[1].trim();
  int getvar2 = getintvar(field[1]);
  setintvar(field[1], getvar2 + 1);
  int tgit = getintvar(field[1]);
  if(tgit <= fnt[vindex]){
  chrp = fnloop[vindex];
  }
  if(tgit > fnt[vindex]){
  chrp = 0;
  }
}
break;

case 27: // BUTTON
if(exec || udp){
  noerror = true;
  uint8_t bno = getsum(1);
  uint16_t bx = getsum(fieldnum + 1);
  uint16_t by = getsum(fieldnum + 1);
  uint16_t bw = getsum(fieldnum + 1);
  uint16_t bh = getsum(fieldnum + 1);
  uint16_t bbc = color[(int)getsum(fieldnum + 1)];
  String btext = field[fieldnum + 1];
  uint8_t bf = field[fieldnum + 3].toInt();
  uint16_t bfc = color[field[fieldnum + 5].toInt()];
  gfx.Buttonx(bno, bx, by, bw, bh, bbc, btext, bf, bfc);
}
break;

case 28: // SCROLL
  if(exec || udp){
  noerror = true;
  field[1].trim();
  field[1].toUpperCase();
  if(field[1] == "ON"){
  gfx.ScrollEnable(true);
  }
  if(field[1] == "OFF"){
  gfx.ScrollEnable(false);
  }
}
break;
case 29: // GOTO
  if(exec || udp){
  noerror = true;
  field[1].trim();
  chrp = (field[1].toInt()) - 1;
}
break;
case 77: // GOSUB
  if(exec || udp){
  noerror = true;
  field[1].trim();
  chrp = (field[1].toInt()) - 1;
  chrg = fnln + 1;
}
break;
case 78: // RETURN
  if(exec || udp){
  noerror = true;
  chrp = chrg;
}
break;
case 30: // LIST
  if(exec || udp){
  noerror = true;
  Println("");
  int ln = field[1].toInt();
  int lne = field[2].toInt();
  if(ln > 0 && ln < 1000 && lne > 0 && lne < 1000){
  ln = ln;  
  } else {
  ln = 1;
  lne = 1000;
  
  }
  for(int s = ln; s < (lne + 1); s++)
  if(getprog(s) != ""){
  String templst = getprog(s);
  int l = templst.length();
  if(opm == 1){
  gfx.TWprintln(templst);
  } else {
  Println(templst);
  }
  }
  int rfrsh;
  for(int n = 0; n < (progend + 1); n ++){
  rfrsh = (prog[n]);
  }
}
break;
case 31: // HELP
  if(exec || udp){
  noerror = true;
  help();
}
break;
case 32: // DIR
  if(exec || udp){
  noerror = true;
  dirFunc();
}
break;
case 33: // FREE
  if(exec || udp){
  noerror = true;
  uint32_t freemem = ESP.getFreeHeap();
  Print(String(freemem));
  Println(" bytes ESP memory free");
  Print(String(7001 - progend));
  Println(" bytes program memory free");
  Print(String(400 - (vindex * 6)));
  Println(" bytes for variables free");
}
break;
case 34: // WIFIDISCONNECT
  if(exec || udp){
  noerror = true;
  WiFi.disconnect();
  Wconnected = false;
  dispmsg(27, false, true);
}
break;
case 35: // CLS
  if(exec || udp){
  noerror = true;
  if(gfxon){
  gfx.Cls();
  } else {
  gfx.TWcls();
  Write(0);
  }
}
break;
case 36: // DELETE
  if(exec || udp){  
  noerror = true;
  delfile();
}
break;
case 37: // SERIALTX
  if(exec || udp){  
  noerror = true;
  int pl = field[1].length();
  String temps = "";
  for(int npl = 0; npl < (pl -2); npl ++){
  temps = temps + field[1].charAt(npl + 1);  
  }
  if(serialon){
  Serial.print(temps);
  } else {
  dispmsg(28, false, true);
  }
}
break;
case 38: // RESET
  if(exec || udp){
  noerror = true;
  ESP.restart();
}
break;
case 39: // SERIALMODE
  if(exec || udp){
  noerror = true;
  field[1].trim();  
  field[1].toUpperCase();
  if(field[1] == "MONITOR"){
  serialm = true;
  }
  if(field[1] == "DEVICE"){
  serialm = false;
  }
}
break;
case 79: // TELNETMODE
  if(exec || udp){  
  noerror = true;
  field[1].trim();  
  field[1].toUpperCase();
  if(field[1] == "MONITOR"){
  tncmdmode = false;
  }
  if(field[1] == "COMMAND" || field[1] == "CMD"){
  tncmdmode = true;
  }
}
break;
case 40: // PRINT
  if(exec || udp){
  int fn = 1;
  noerror = true;
  int pl = field[fn].length();
  String temps = "";
  if(field[fn].charAt(0) == 34){
  temps = getstring(field[fn]); 
  } else {
  char schk = field[2].charAt(0);
  if((schk > 36 && schk < 44) || (schk > 44 && schk < 48)){
  float tempvar = getsum(fn);
  temps = (String)tempvar;
  } else {
  float tempvar = getinteger(field[fn]);
   if((tempvar - (long)tempvar) > 0 || (tempvar - (long)tempvar) < 0){
  temps = (String)tempvar;
  } else {
  temps = (String)(int)tempvar;
  }
  }
  }
  Print(temps);
}
break;
case 41: // PRINTLN
  if(exec || udp){
  int fn = 1;
  noerror = true;
  int pl = field[fn].length();
  String temps = "";
  if(field[fn].charAt(0) == 34){
  temps = getstring(field[fn]); 
  } else {
  char schk = field[2].charAt(0);
  if((schk > 36 && schk < 44) || (schk > 44 && schk < 48)){
  float tempvar = getsum(fn);
  temps = (String)tempvar;
  } else {
  float tempvar = getinteger(field[fn]);
  if((tempvar - (long)tempvar) > 0 || (tempvar - (long)tempvar) < 0){
  temps = (String)tempvar;
  } else {
  temps = (String)(int)tempvar;
  }
  }
  }
  Println(temps);
}
break;
case 42: // SERIAL
  if(exec || udp){
  noerror = true;
  field[1].trim();
  field[2].trim();
  field[3].trim();
  long testvalid = atoi((char*)field[1].c_str());
  boolean bv;
  if(testvalid >= 9600 && testvalid <= 921600){
  bv = true;
  } else {
  bv = false;
  }
  uint8_t len = field[1].length();
  char baudc[len];
  for(int t = 0; t < len; t ++){
  baudc[t] = field[1].charAt(t);
  }
  if(len > 2 && bv == true){
  serialON(baudc);
  } else {
  noerror = false;
  }
  //field[3].toUpperCase();
  if(field[3] == "T" || field[3] == "t"){
  pu = true;
  } else {
  pu = false;
  }
}
break;
case 43: // DEL
  if(exec || udp){  
  noerror = true;
  delfile();
}
break;
case 44: // FONT
  if(exec || udp){  
  noerror = true;
  field[1].trim();
  int f = getinteger(field[1]);
  if(f > 0 && f < 3){
  if(gfxon == false){
  //gfx.TWcls();
  gfx.Font(f);
  sfont = f;
  gfx.TWwrite(0);
  } else {
  gfx.Font(f);
  gfont = f;
  }
  } else {
  dispmsg(21, false, true);
  }
}
break;
case 45: // YIELD
  if(exec || udp){
  noerror = true;
  yield();
}
break;
case 46: // MOVETO
  if(exec || udp){
  noerror = true;
  int16_t mx = (int)getsum(1);
  int16_t my = (int)getsum(fieldnum + 1);
  gfx.MoveTo(mx,my);
}
break;
case 80: // TELCONNECT
  if(exec || udp){
  noerror = true;
  field[1].trim();
  field[2].trim();
  int prt = (uint16_t)getinteger(field[2]);
  int l = field[1].length();
  char tntemp[l];
  for(int n = 0; n < l; n++){
  tntemp[n] = field[1].charAt(n);  
  }
  telcon(tntemp, prt);
}
break;
case 81: // UDPTX
  if(exec || udp){
  noerror = true;
  int prt;
  field[1].trim();
  field[2].trim();
  field[3].trim();
  if(field[3] == ""){
  field[3] = field[1];
  field[1] = udptargetip;
  prt = udptargetport;
  } else {
  prt = getinteger(field[2]);
  }
  int l = field[1].length();
  int pktl = field[3].length();
  char tntemp[l];
  field[1].toCharArray(tntemp,l + 1);
  String testsp = "";
  yield();
  if(pktl > 1){
  for(int o = 0; o < (pktl - 2); o++){
  testsp = testsp + field[3].charAt(o + 1);  
  }
  pktl = pktl - 2;
  } else {
  testsp = "LET " + field[3] + " = " + String(getsum(3));
  pktl = testsp.length();
  }
  byte pktll = testsp.length();
  char pkt3[pktll];
  testsp.toCharArray(pkt3,pktll + 1);  
  Udp.beginPacket(tntemp, prt);
  Udp.write(pkt3);
  Udp.write(13);
  Udp.endPacket();
}
break;
case 82: // UDPTARGET
  if(exec || udp){
  noerror = true;
  field[1].trim();
  field[2].trim();
  udptargetport = (uint16_t)getinteger(field[2]);
  udptargetip = field[1];
} 
break;
case 47: // PRINTIMAGE
  if(exec || udp){
  noerror = true;
  field[1].trim();
  String image = field[1];
  if(SD.exists((char*)image.c_str())) {
  imagedisp = true;
  gfx.PrintImageFile(image);
  } else {
  dispmsg(34, false, true);
  }
}
break;
case 48: // PRINTIMAGEWIFI
  yield();
  if(exec || udp){  
  noerror = true;
  field[1].trim();
  String image = field[1];
  if(Wconnected){
  gfx.PrintImageWifi(image);
  }
}
break;
case 49: // USERIMAGES
  if(exec || udp){
  noerror = true;
  field[1].trim();
  field[2].trim();
  int gno;
  int frame;
  uint16_t offset1;
  gno = getsum(1);
  frame = getsum(fieldnum + 1);
  if(field[fieldnum + 1] != ""){
  offset1 = getsum(fieldnum + 1);
  if(field[fieldnum + 1] != ""){
  uint16_t ytpos = getsum(fieldnum + 1); 
  gfx.UserImages(gno, frame, offset1, ytpos);
  } else {
  gfx.UserImages(gno, frame, offset1);
  }
  } else {
  gfx.UserImages(gno, frame);
  }
}
break;
case 50: // USERIMAGE
  if(exec || udp){
  noerror = true;
  field[1].trim();
  int gno = getsum(1);
  gfx.UserImage(gno);
}
break;
case 51: // GFX
  if(exec || udp){
  noerror = true;
  field[1].trim();
  field[1].toUpperCase();
  if(field[1] == "ON"){
  turngfxon();
  }
  if(field[1] == "OFF"){
  turngfxoff();
  }
}
break;
case 52: // SAVE
  if(exec || udp){
  noerror = true;
  field[1].trim();
  field[1].toUpperCase();
  File savescr;
  if(field[1] == "PREFS"){
  String pr = "PREFS.4DS";
  if(SD.exists((char*)pr.c_str())) {
  SD.remove("PREFS.4DS");
  }
  //yield();
  savescr = SD.open("PREFS.4DS", FILE_WRITE);
  pline = "";
  pline = "COLOR " + String(twcol) + char(10);
  savescr.print(pline);
  pline = "";
  pline = "FONT " + String(sfont) + char(10);
  savescr.print(pline);
  pline = "";
  pline = "ORIENTATION " + String(gfx.Orientation()) + char(10);
  savescr.print(pline);
  if(apn != ""){
  pline = "";
  pline = "APNAME " + apn + char(10);  
  savescr.print(pline);
  }
  if(wps != ""){
  pline = "";
  pline = "WIFIPASSWORD " + wps + char(10);  
  savescr.print(pline);
  }
  if(accesspoint == true){
  savescr.print("WIFIMODE AP");
  savescr.print(char(10));
  } else {
  if(Wconnected){
  pline = "";
  pline = "WIFICONNECT " + ssids + " " + passwords + char(10);
  savescr.print(pline);
  }
  }
  if(uprt > 0){
  pline = "";
  savescr.print("UDP " + String(uprt) + char(10));  
  }
  savescr.close();
  dispmsg(29, false, true);
  } else {
  if(SD.exists((char*)field[1].c_str())) {
  SD.remove(field[1]);
  }
  savescr = SD.open(field[1], FILE_WRITE);
  for(int s = 0; s < 1000; s++){
  if(getprog(s) != ""){
  String stemp = getprog(s); 
  int coa = stemp.length();
  if(stemp.charAt(coa - 1) != 10){
  stemp = stemp + char(10);
  }
  savescr.print(stemp);
  }
  }
  savescr.close();
  }
}
break;
case 53: // DELAY
  if((exec || udp) && delf == false){
  noerror = true;
  field[1].trim();
  dels = true;
  dellength = (int)getsum(1);
  rpl = fnln;
 
}
break;
case 54: // COLOR
  if(exec || udp){
  noerror = true;
  field[1].trim();
  uint16_t f = (uint16_t)getsum(1);
  if(gfxon == false){
  gfx.TWcolor(f);
  twcol = f;
  } else {
  gfx.TextColor(f);
  gfx.TWtextcolor(f);
  }

  //dispmsg(21, false, true);

}
break;
case 55: // ORIENTATION
  if(exec || udp){
  noerror = true;
  field[1].trim();
  int f = (int)getsum(1);
  changeorient(f);
}
break;
case 56: // CD
  if(exec || udp){
  noerror = true;
  field[1].trim();
  if(field[1] == ".."){
  if(dirtrn > 0){ 
  dirtrn = dirtrn - 1;
  wdir = "";
  for(int n = 0; n < dirtrn + 1; n ++){
  wdir = wdir + dirtree[n];
  }
  }
  } else {
  dirtrn = dirtrn + 1;
  dirtree[dirtrn] = field[1] + "/";
  wdir = "";
  for(int n = 0; n < dirtrn + 1; n ++){
  wdir = wdir + dirtree[n];
  }
  }
  testdir(wdir);
  }
break;
case 57: // NEW
  if(exec || udp){
  noerror = true;
  newp();
}
break;
case 59: // MKDIR
  if(exec || udp){
  noerror = true;
  field[1].trim();
  String fullpath = wdir + field[1];
  if(SD.mkdir(fullpath)){
  dispmsg(1, false, true);
  } else {
  dispmsg(30, false, true);
  }
}
break;
case 60: // RMDIR
  if(exec || udp){
  noerror = true;
  field[1].trim();
  String fullpath = wdir + field[1];
  if(SD.rmdir(fullpath)){
  dispmsg(1, false, true);
  } else {
  dispmsg(30, false, true);
  }
}
break;
case 61: // RUN
  if(exec || udp){
  noerror = true;
  fncount = 0;
  ifcount = 0;
  rprog = true;
}
break;
case 63: // TYPE
  if(exec || udp){
  noerror = true;
  field[1].trim();
  String fullpath = wdir + field[1];
  if(fullpath.length() > 1){
  type(fullpath);
  } else {
  dispmsg(30, false, true);
  }
}
break;
case 64: // LOAD
  if(exec || udp){
  noerror = true;
  if(runnin){
  rnstop();
  progrun == false;
  newp();
  chrp = 1000;
  }
  field[1].trim();
  String fullpath = wdir + field[1];
  if(fullpath.length() > 1){
  newp();
  load(fullpath);
  } else {
  dispmsg(30, false, true);
  }
}
break;
case 65: // WIFISCAN
  if(exec || udp){
  noerror = true;
  wifiscan();
}
break;
case 66: // WIFICONNECT
  if(exec || udp){
  noerror = true;
  field[1].trim();
  field[2].trim();
  uint8_t len = field[1].length();
  char ssid[len];
  for(int t = 0; t < flen[1]; t ++){
  ssid[t] = field[1].charAt(t);
  }
  len = field[2].length();
  char password[len];
  for(int t = 0; t < flen[2]; t ++){
  password[t] = field[2].charAt(t);
  }
  if(flen[1] > 2 || flen[2] > 2){
  wificonnect(ssid, password);
  } else {
  noerror = false;  
  }
}
break;
case 67: // RENAME
if(exec || udp){
  noerror = true;
  rencopy(1);
}
break;
case 68: // COPY
if(exec || udp){
  noerror = true;
  rencopy(2);
}
break;
case 69: // DOWNLOAD
if(exec || udp){
  yield();
  noerror = true;
  if(WiFi.status() == WL_CONNECTED){
  Wconnected = true;
  field[1].trim();
  field[2].trim();
  dispmsg(31, false, true);
  if(field[1] != "" && field[2] != ""){
  len = field[2].length();
  char dfname[len];
  field[2].toCharArray(dfname,len + 1);
  serror = true;
  serror = false;
  int tstlocal = field[2].toInt();
  if(field[3] != ""){
  field[3].trim();
  field[4].trim();
  gfx.DownloadFile(field[1], tstlocal, field[3], field[4]);
  } else {
  gfx.DownloadFile(field[1], field[2]);
  }
  } else {
  noerror = false;  
  }
  if(gfx.CheckDL() == false){
  noerror = false;  
  dispmsg(39, false, true);
  fixsyntax = true;
  }
  if(noerror){
  dispmsg(1, false, true);
  }  
  
  } else {
  Wconnected = false;
  dispmsg(32, false, true);
  }
  if(fixsyntax == true){
  noerror = true;
  fixsyntax = false;
  }
}
break;
}
  if(field[0] == "" || delf || field[0] == "END" || field[0] == "RUNSTOP"){
  noerror = true; 
  }
  if(noerror == false && exec){
  if(runnin || endrun){
  endrun = false;
  eflag = true;
  rnstop();
  } else {
  Println("");
  if(udp == false){
  dispmsg(33, false, true);
  }
  }
  }
  kword = 0;
  udp = false;
  notprog = false;
}

void dirFunc(){
  File root;
  gfx.TWtextcolor(WHITE);
  dispmsg(0, false, false);
  gfx.TWtextcolor(PALEGREEN);
  Println(wdir);
  root = SD.open(wdir);
  root.rewindDirectory(); 
  printDirectory(root, 0);
  gfx.TWtextcolor(LIMEGREEN);
  dispmsg(1, false, true);
}

void testdir(String udir){
  File userdir;
  if(!SD.open(udir)){
  dispmsg(2, false, true);
  dirtrn = dirtrn - 1;
  if(dirtrn < 0){
  dirtrn = 0;
  wdir = "";
  wdir = wdir + dirtree[0];
  } else {
  for(int o = 0; o < dirtrn + 1; o++){
  wdir = "";
  wdir = wdir + dirtree[o];
  }
  }
  } else {
  dispmsg(1, false, true);
  }
}

void printDirectory(File dir, int numTabs) {
  String tab = "";
  int entno;
  tab = tab + char(9);
  File entry;
  while (true) {
  entry =  dir.openNextFile();
  if (! entry) {
  if(entno < 1){
  dispmsg(3, false, true);
  }
  break;
  } else {
  entno ++;
  }
  Print(entry.name());
  if (entry.isDirectory()) {
  Write(9);
  gfx.TWtextcolor(WHITE);
  dispmsg(4, false, true);
  gfx.TWtextcolor(LIMEGREEN);
  } else {
  Write(9);
  gfx.TWtextcolor(PALEGREEN);
  Println(String(entry.size(), DEC));
  gfx.TWtextcolor(LIMEGREEN);
  }
  entry.close();
  }
}

void wifiscan(){
  String tab;
  String ssidtemp;
  int len;
  gfx.TWtextcolor(OLIVEDRAB);
  dispmsg(5, false, true);
  int n = WiFi.scanNetworks();
  dispmsg(6, false, true);
  gfx.TWtextcolor(LIMEGREEN);
  if (n == 0) {
  dispmsg(7, false, true);
  } else {
  Print(String(n));
  dispmsg(8, false, true);
  for (int i = 0; i < n; ++i){
  gfx.TWtextcolor(PALEGREEN);
  Print(String(i + 1));
  gfx.TWtextcolor(WHITE);
  dispmsg(9, false, false);
  gfx.TWtextcolor(PALEGREEN);
  ssidtemp = String(WiFi.SSID(i));
  len = ssidtemp.length();
  for(int n = 0; n < (18 - len); n++){
  ssidtemp = ssidtemp + " ";
  }
  gfx.TWtextcolor(PALEGREEN);
  Print(ssidtemp);
  if(WiFi.RSSI(i) < 0){
  gfx.TWtextcolor(LIMEGREEN);
  }
  if(WiFi.RSSI(i) < -50){
  gfx.TWtextcolor(ORANGE);
  }
  if(WiFi.RSSI(i) < -80){
  gfx.TWtextcolor(RED);
  }
  Println(String(WiFi.RSSI(i)));
  if (WiFi.encryptionType(i) != ENC_TYPE_NONE) {
  }
  }
  }
  gfx.TWtextcolor(LIMEGREEN);
}

void wificonnect(const char* ssid, const char* password){
  dispmsg(10, false, false);
  Println(ssid);
  WiFi.begin(ssid, password);
  int retries = 0;
  while ((WiFi.status() != WL_CONNECTED) && (retries < 20)) {
  retries++;
  delay(500);
  dispmsg(11, false, true);
  }
  Println("");
  if(WiFi.status() == WL_CONNECTED){
  Wconnected = true;
  ssids = ssid;
  passwords = password;
  dispmsg(12, false, true);
  dispmsg(13, false, false);
  String ip;
  ip = ipToString(WiFi.localIP());
  gfx.TWtextcolor(PALEGREEN);
  Println(ip);
  gfx.TWtextcolor(LIMEGREEN);
  } else {
  Wconnected = false;
  dispmsg(14, false, true);
  }
}

void sddelete(const char* fname){
  if(SD.exists(fname)) {
  SD.remove(fname);
  String dfile = String(fname);
  if(serror == false){
  dispmsg(15, false, false);
  Print(dfile);
  dispmsg(16, false, true);
  }
  } else {
  if(serror == false){
  dispmsg(34, false, true);
  }
  }
}

void serialON(const char* baud){
  long baudr = atol(baud);
  Serial.begin(baudr);
  serialon = true;
  dispmsg(1, false, true);
}

void help(){
  int asize = (sizeof(commands)/sizeof(commands[0]));
  byte tstbyte;
  byte comma;
  String tb;
  for(int n = 0; n < asize; n++){
  tstbyte = commands[n]; 
  if(tstbyte == 58){
  comma = 0;
  Println("");
  } else {
  if(tstbyte == 44 && comma == 0){
  comma = 5; 
  }
  if(comma < 2){
  tb = char(tstbyte);
  Print(tb);
  }
  if(comma > 2){
  comma = comma - 1;
  }
  }
  }
  asize = (sizeof(function)/sizeof(function[0]));
  for(int n = 0; n < asize; n++){
  tstbyte = function[n]; 
  if(tstbyte == 58){
  comma = 0;
  Println("");
  } else {
  tb = char(tstbyte);
  Print(tb);  
  }
  }
}
String ipToString(IPAddress ip){
  String s="";
  for (int i=0; i<4; i++)
  s += i  ? "." + String(ip[i]) : String(ip[i]);
  return s;
}

void rename2(const char* fname, const char* nname, byte rc){
  size_t n; 
  uint8_t buf[64]; 
  File myFileIn;
  File myFileOut;
  if (SD.exists(nname)) {
  SD.remove(nname);
  }
  myFileIn = SD.open(fname, FILE_READ);
  myFileOut = SD.open(nname, FILE_WRITE);
  while ((n = myFileIn.read(buf, sizeof(buf))) > 0) {
  myFileOut.write(buf, n);
  }
  myFileIn.close();
  myFileOut.close();
  if(rc == 1){
  SD.remove(fname);
  }
  dispmsg(1, false, true);
}

void runscript(String fname){
  String inputString;
  char inp;
  File script;
  script = SD.open(fname, FILE_READ);
  if(!script){
  dispmsg(34, false, true);
  }
  while(script.available() > 0){
  inp = script.read();
  if(inp != 0x0A){
  inputString = inputString + inp;
  }
  if(inp == 0x0A){
  command(inputString);
  inputString = "";
  }
  yield();
  }
  script.close();
}

void runprog(){
  oldorient = gfx.Orientation();
  chrp = 0;
  for(int rp = 0; rp < 1000; rp ++){
  if(rsume){
  rp = fnln;
  rsume = false;
  }
  if(inpf){
  inputfunc();
  rp = rpl;
  if(inpf == false){
  rp = rpl + 1;  
  }
  }
  if(delf){
  if((delstart + dellength) < millis()){
  delf = false;
  rp = rpl + 1;
  } else {
  rp = rpl;  
  }
  }
  curlinenum = rp;
  if(getprog(rp) != ""){
  fnln = rp;
  if(rstop){
  rp = 1000;
  runnin = false;
  exec = true;
  rstop = false;
  return;
  }
  if(udpclone){
  Serial.println("UDPTX " + char(34) + getprog(rp) + char(34));
  multit = true;
  command("UDPTX " + char(34) + getprog(rp) + char(34));
  multit = false;
  }
  command(getprog(rp));
  if(dels && delf == false){
  delstart = millis();
  delf = true;
  dels = false;
  }
  if(chrp > 0){
  rp = chrp;
  chrp = 0;
  }
  }
  checktelnet();
  while((Serial.available() > 0 || serverClient.available() > 0) && inpf == false){
  if(Serial.available() > 0 ){
  but = Serial.read();
  opm = 2;
  }
  if(serverClient.available() > 0 ){
  but = char(serverClient.read());
  opm = 3;
  }  
  test1 = test1 + char(but);
  if(but == 13){
  if(opm == 2){
  Serial.println("");
  }
  mtask = true;
  progrun = false;
  boolean tempexec = exec;
  byte tempopm = opm;
  exec = true;
  multit = true;
  command(test1);
  multit = false;
  exec = tempexec;
  opm = tempopm;
  test1 = "";
  progrun = true;
  mtask = false;
  }
  }
  yield();
  runnin = true;
  }
  ifcount = 0;
  exec = true;
  if(opm > 1){
  dispmsg(17, true, true);
  }
  dispmsg(17, false, true);
  runnin = false;
  int len = Udp.read(incomingPacket, 255);
  for(int n = 0; n <255; n ++){
  incomingPacket[n] = 0;
  }
}

void type(String fname){
  String inputString;
  char inp;
  File script;
  script = SD.open(fname, FILE_READ);
  if(!script){
  dispmsg(34, false, true);
  }
  while(script.available() > 0){
  inp = script.read();
  if(inp != 0x0A){
  inputString = inputString + inp;
  }
  if(inp == 0x0A){
  Println(inputString);
  inputString = "";
  }
  yield();
  }
  script.close();
}

void load(String fname){
  String inputString;
  char inp;
  File script;
  script = SD.open(fname, FILE_READ);
  if(!script){
  dispmsg(34, false, true);
  }
  while(script.available() > 0){
  inp = script.read();
  if(inp != 0x0A){
  inputString = inputString + inp;
  }
  if(inp == 0x0A){
  String ln = "";
  char ch = 0;
  for(int t = 0; t < 3; t ++){
  ch = inputString.charAt(t);
  if(ch != 32){
  ln = ln + char(ch);  
  }
  }
  int lnum = ln.toInt();
  storeprog(inputString);
  inputString = "";
  }
  yield();
  }
  script.close();
}

void keypad1portrait(int ypos ,uint16_t butcol, uint16_t tcol){
  delbuttons(bcolor);
  kpabc(1, 1, ypos, butcol, tcol);
}

void keypad2portrait(int ypos ,uint16_t butcol, uint16_t tcol){
  delbuttons(bcolor);
  kpabc(2, 1, ypos, butcol, tcol);
}

void keypad3portrait(int ypos ,uint16_t butcol, uint16_t tcol){
  delbuttons(bcolor);
  kpsym(1, ypos, butcol, tcol);
}

void keypad1landscape(int ypos ,uint16_t butcol, uint16_t tcol){
  delbuttons(bcolor);
  kpabc(1, 2, ypos, butcol, tcol);
}

void keypad2landscape(int ypos ,uint16_t butcol, uint16_t tcol){
  delbuttons(bcolor);
  kpabc(2, 2, ypos, butcol, tcol);
}

void keypad3landscape(int ypos ,uint16_t butcol, uint16_t tcol){
   delbuttons(bcolor);
  kpsym(2, ypos, butcol, tcol);
}


float getinteger(String strvalue){
  float tvar;
  byte getvar1 = char(strvalue.charAt(0));
  float tstfunc = checkfunc(strvalue);
  if((getvar1 > 47 && getvar1 < 58) || getvar1 == 45){
  tvar = strvalue.toFloat();
  } else {
  tvar = getintvar(strvalue);
  }
  if(func){
  func = false;
  return tstfunc;  
  } else {
  return tvar;
  }
}
void Print(String pr){
  if(serialon && serialm && opm == 2){
  Serial.print(pr); 
  }
  if(gfxon == false && opm == 1){
  gfx.TWprint(pr);   
  }
  if(gfxon && mtask == false){
  gfx.print(pr);   
  }
  if(tserv  && opm == 3){
  serverClient.print(pr);  
  } 
}

void Println(String pr){
  if(serialon && serialm && opm == 2){
  Serial.println(pr);
  }
  if(gfxon == false && opm == 1){
  gfx.TWprintln(pr); 
  }
  if(gfxon && mtask == false){
  gfx.println(pr);  
  }
  if(tserv && opm == 3){
  serverClient.println(pr); 
  }
}

void Write(byte by){
  if(serialon && serialm && opm == 2){
  Serial.write(by);  
  }
  if(gfxon == false && opm == 1){
  gfx.TWwrite(by); 
  }
  if(gfxon && mtask == false){
  gfx.write(by);  
  }
  if(tserv && opm == 3){
  serverClient.write(by); 
  }
}

void telcon(char* tip, uint16_t prt){
  serverClient.connect(tip,prt);
  if(serverClient.connected()){
  //exec = false;
  tclient = true;
}
}

String getstring(String stemps){
  String temps;
  int pl = stemps.length();
  for(int npl = 0; npl < (pl -2); npl ++){
  temps = temps + stemps.charAt(npl + 1);  
  }
  return temps;
}

float getsum(int fnum){
  String temps;
  char tlog;
  float sum = getinteger(field[fnum]);
  fnum ++;
  while(field[fnum] != "" && field[fnum] != "," && field[fnum].charAt(0) != 60 && field[fnum].charAt(0) != 61 && field[fnum].charAt(0) != 62){
  field[fnum].trim();
  field[fnum + 1].trim();
  if(field[fnum] == "+"){
  fnum ++;
  sum = sum + getinteger(field[fnum]);
  }
  if(field[fnum] == "-"){
  fnum ++;
  sum = sum - getinteger(field[fnum]);
  }
  if(field[fnum] == "*"){
  fnum ++;
  sum = sum * getinteger(field[fnum]);
  }
  if(field[fnum] == "/"){
  fnum ++;
  sum = sum / getinteger(field[fnum]);
  }
  fnum ++;
  tlog = field[fnum].charAt(0);
  }
  fieldnum = fnum;
  return sum;
}
float checkfunc(String fnum){
  func = false;
  byte es;
  int bsp = fnum.indexOf("(");
  es = bsp;
  if(bsp < 1){
  es = fnum.length();
  }
  String chkstr = "";
  for(int n = 0; n < (es); n++){
  chkstr = chkstr + (char)fnum.charAt(n);  
  }
  chkstr.trim();
  chkstr = ":" + chkstr + ":";
  int p = getKeywordPos(chkstr, false);
  int bep = fnum.indexOf(")");
  if(p < 1){
  return 0;
  } else {
  String is = "";
  String is1 = "";
  boolean gtcoma = false;
  char chkfnum;
  float v;
  float v1;
  if(bsp > 0){
  int il = (bep - bsp) - 1;
  for(int n = 0; n < il; n++){
  chkfnum = fnum.charAt(n + bsp + 1);
  if(chkfnum == 46){
  gtcoma = true;
  }
  if(chkfnum != 46 && gtcoma == false){
  is = is + (char)chkfnum;
  }
  if(chkfnum != 46 && gtcoma){
  is1 = is1 + (char)chkfnum;
  }
  }
  v = getinteger1(is);
  if(gtcoma){
  v1 = getinteger1(is1);
  }
  }
  if(p == 5){
  float r = (float)sin(v);
  //r = r * 100;
  func = true;
  return r;
  }

  if(p == 9){
  float r = (float)cos(v);
  //r = r * 100;
  func = true;
  return r;
  }
  if(p == 1){
  int16_t r = random(v);
  func = true;
  return (float)r;
  }
  if(p == 17){
  float r;
  if(digitalRead((int)v) == HIGH){
  r = 1;
  } else {
  r = 0;
  }
  func = true;
  return r;
  }
  if(p == 29){
  float r;
  r = analogRead(v);
  func = true;
  return r;
  }
  if(p == 40){
  int r = gfx.Orientation();
  func = true;
  return (float)r;  
  }
  if(p > 51 && p < 67){
  gfx.touch_Update();
  }
  if(p == 52){
  int r = gfx.touch_GetX();  
  func = true;
  return (float)r;
  }
  if(p == 59){
  int r = gfx.touch_GetY();  
  func = true;
  return (float)r;
  }
  if(p == 66){
  int r = gfx.touch_GetPen();  
  func = true;
  return (float)r;
  }
  if(p == 73){
  //DS18B20.requestTemperatures();
  //dallastemp = DS18B20.getTempCByIndex(v);
  float dt = dallastemp;
  int r = (int)dt;
  func = true;
  return (float)r;
  }
  if(p == 85){
  udprx = true;
  getudp();
  func = true;
  return (float)vcount;
  }
  if(p == 91){
  func = true;
  if(touchp == 1){
  int r = gfx.XYposToDegree(touchx - v, touchy - v1);
  return (float)r;
  } else {
  int r = -1;
  return (float)r;
  }
  }
  if(p == 98){
  func = true;
  //if(touchp == 1){
  int r = gfx.imageTouched();
  //Serial.println(r);
  return (float)r;
  //} else {
  //int r = -1;
  //return r;
  //}
  }
  if(p == 106){
  func = true;
  float r = (float)incomingPacket[(int)v];
  return r;
  }
  if(p == 116){
  int posp = ((v - 1) * 4) + 9;
  float xpv;
  union u_tag {
  byte b[4];
  float fval;
  } u;
  u.b[0] = incomingPacket[posp];
  u.b[1] = incomingPacket[posp + 1];
  u.b[2] = incomingPacket[posp + 2];
  u.b[3] = incomingPacket[posp + 3];
  xpv = u.fval;
  func = true;
  float r = xpv;
  return r;
  }
  if(p == 124){
  func = true;
  int r = incomingPacket[5];
  return (float)r;
  }
  if(p == 132){
  func = true;
  int r = (int)v;
  return (float)r;
  }
  if(p == 136){
  func = true;
  int r = gfx.CheckButtons();
  return (float)r;
  }
  if(p == 149){
  func = true;
  int r = pulseIn(v,1000000);
  return (float)r;
  }
  }
}
float getinteger1(String strvalue){
  float tvar;
  byte getvar1 = char(strvalue.charAt(0));
  if((getvar1 > 47 && getvar1 < 58) || getvar1 == 45){
  tvar = strvalue.toFloat();
  } else {
  tvar = getintvar(strvalue);
  }
  return tvar;
}
void checktelnet(){
  if (telnetServer.hasClient()) {
  if (!serverClient || !serverClient.connected()) {
  if (serverClient) {
  serverClient.stop();
  dispmsg(18, false, true);
  }
  serverClient = telnetServer.available();
  dispmsg(19, false, true);
  serverClient.flush();  // clear input buffer, else you get strange characters 
  }
  }
  if (serverClient && serverClient.connected() && tserv == false) {  // send data to Client
  tserv = true;
  serverClient.println("4Dos 1.0 4D Systems");
  serverClient.println("Ready");
  }
  if (!serverClient.connected()) {  // send data to Client
  tserv = false;
  }

}

void gettelnet(){
  if(serverClient.available() > 0) {  // get data from Client
  if(tncmdmode){
  char temp = char(serverClient.read());
  tncmd = tncmd + temp;
  if(temp == char(13)){
  command(tncmd);
  tncmd = "";
  }
  } else {
  but = char(serverClient.read());
  opm = 3;
  }
  }
}

void getserial(){
  if(Serial.available() > 0){
  but = Serial.read();
  opm = 2;
  }
}    

void turngfxoff(){
  gfx.Cls();
  gfx.Font(twfont);
  gfxon = false;
  changeorient(oldorient); 
  Write(8);
}

void turngfxon(){
  oldorient = gfx.Orientation();
  gfxon = true;
  twfont = gfx.Font();
  gfx.ButtonUp(13);
  gfx.ButtonUp(13);
  gfx.ButtonActive(13, false);
  delbuttons(bcolor);
  gfx.Cls();
}

void changeorient(byte f){
  if(f >= 0 && f < 4){
  if(gfxon == false){
  gfx.TWcls();
  gfx.Orientation(f);
  if(gfx.Orientation() == 2 || gfx.Orientation() == 3){
  delbuttons(bcolor);
  gfx.TextWindow(0, 0, 240, 223, twcol, BLACK, LIGHTGREY);
  gfx.TWcls();
  }
  if(gfx.Orientation() == 0 || gfx.Orientation() == 1){
  delbuttons(bcolor);
  gfx.TextWindow(0, 0, 320, 112, twcol, BLACK, LIGHTGREY);
  gfx.TWcls();
  }
  key1();
  gfx.TWcls();
  Write(8);
  }
  if(gfxon){
  gfx.Orientation(f);  
  }
  } else {
  dispmsg(21, false, true);
  }
  orient = gfx.Orientation();
}

void key1(){
  if(gfx.Orientation() == 2 || gfx.Orientation() == 3){
  keypad1portrait(223, bcolor, BLACK);
  }
  if(gfx.Orientation() == 0 || gfx.Orientation() == 1){
  keypad1landscape(112, bcolor, BLACK);
  }
}

void key2(){
  if(gfx.Orientation() == 2 || gfx.Orientation() == 3){
  keypad2portrait(223, bcolor, BLACK);
  }
  if(gfx.Orientation() == 0 || gfx.Orientation() == 1){
  keypad2landscape(112, bcolor, BLACK);
  }
}

void key3(){
  if(gfx.Orientation() == 2 || gfx.Orientation() == 3){
  keypad3portrait(223, bcolor, BLACK);
  }
  if(gfx.Orientation() == 0 || gfx.Orientation() == 1){
  keypad3landscape(112, bcolor, BLACK);
  }
}

void rnstop(){
  rstop = true;
  delf = false;
  pdelf = false;
  inpf = false;
  ifcount = 0;
  if(gfxon){
  gfxon1 = true;
  orient1 = gfx.Orientation();
  turngfxoff();
  } else {
  gfxon1 = false;
  }
  if(eflag && susperr == false){
  if(opm > 1){
  dispmsg(22, true, false);
  gfx.TWprintln(String(fnln)); 
  }
  dispmsg(22, false, false);
  Println(String(fnln));   
  }
  susperr = false;
  if(field[0] == "RUNSTOP"){
  if(opm > 1){
  dispmsg(23, true, false);
  gfx.TWprintln(String(fnln)); 
  }
  Println("");
  dispmsg(23, false, false);
  Println(String(fnln)); 
  }
  exec = true;
  eflag = false;
  runnin = false;
}

void newp(){
  for(int n = 0; n < progend; n ++){
  prog[n] = 0;
  }
  for(int n = 0; n < 1000; n ++){
  progpos[n] = 0;
  proglen[n] = 0;
  }
  progend = 1;
  lln = 0;
  llnold = 0;
}

int getKeywordPos(String kword, boolean com){
   int asize;
   int tk = 0;
   int lk = kword.length();
   byte tstbyte;
   byte tstbyte1;
   if(com){
   asize = (sizeof(commands)/sizeof(commands[0]));
   } else {
   asize = (sizeof(function)/sizeof(function[0]));
   }
   for (int i = 0; i < asize; i++){
   tk = 0;
   if(com){
   tstbyte = commands[i]; 
   tstbyte1 = commands[i + 1]; 
   } else {
   tstbyte = function[i]; 
   tstbyte1 = function[i + 1];
   }
   if(tstbyte == 58 && tstbyte1 == kword.charAt(1)){
   for (int t = 0; t < lk; t++){                              
   if(com){
   tstbyte = commands[i + t];
   } else {
   tstbyte = function[i + t];
   }
   if(tstbyte == (byte)kword.charAt(t)){
   tk = tk + 1;
   if(tk == lk){
   if(com){
   return i + t;
   } else {
   return i + t - lk + 2; 
   }
   break;
   }
   }
   }
   }
   } 
}
void getdim(byte num){
  cd[0] = getsum(1);
  for(byte cc = 0; cc < (num - 1); cc ++){
  cd[cc + 1] = getsum(fieldnum + 1);
  }
}
void delfile(){
  field[1].trim();
  uint8_t len = field[1].length();
  char dfile[len];
  field[1].toCharArray(dfile,len + 1);
  sddelete(dfile);
}
void rencopy(byte rc){
  field[1].trim();
  field[2].trim();
  uint8_t len = field[1].length();
  char fname[len];
  field[1].toCharArray(fname, len + 1);
  len = field[2].length();
  char nname[len];
  field[2].toCharArray(nname, len + 1);
  if(flen[1] > 2 || flen[2] > 2){
  rename2(fname, nname, rc); 
  } 
}
void kpabc(byte ulcase, byte bsize, int ypos, uint16_t butcol, uint16_t tcol){
  String bt;
  int apos;
  int convp;
  int p[6];
  for(int n = 0; n < 33; n ++){
  for(int o = 0; o < 6; o ++){
  apos = (n * 6) + o;
  p[o] = k1p[apos];
  }
  if(bsize == 2){
  p[1] = (p[1] / 3) * 4;
  p[2] = (p[2] / 3) * 4;
  p[3] = (p[3] / 3) * 4;
  p[4] = (p[4] / 3) * 4;
  }
  if(p[0] > 64 && p[0] < 91 && ulcase == 2){
  p[0] = p[0] + 32;
  }
  bt = char(p[0]);
  if(p[0] == 13){
  bt = "Enter";
  }
  if(p[0] == 8){
  bt = "BS";
  }
  if(p[0] == 32){
  bt = "Space";
  }
  if(p[0] == 3){
  bt = "sym";
  }
  if(p[0] == 1 && ulcase == 2){
  p[0] = 2;
  }
  if(p[0] == 2){
  bt = "ABC";
  }
  if(p[0] == 1){
  bt = "abc";
  }
  drawnbut[p[0]] = 1; 
  gfx.Buttonx(p[0], p[1], p[2] + ypos, p[3], p[4], butcol, bt, p[5], tcol);
  }
}
void kpsym(byte bsize, int ypos, uint16_t butcol, uint16_t tcol){
  String bt;
  int apos;
  int convp;
  int p[6];
  for(int n = 0; n < 34; n ++){
  for(int o = 0; o < 6; o ++){
  apos = (n * 6) + o;
  p[o] = k2p[apos];
  }
  if(bsize == 2){
  p[1] = (p[1] / 3) * 4;
  p[2] = (p[2] / 3) * 4;
  p[3] = (p[3] / 3) * 4;
  p[4] = (p[4] / 3) * 4;
  }
  bt = char(p[0]);
  if(p[0] == 13){
  bt = "Enter";
  }
  if(p[0] == 8){
  bt = "BS";
  }
  if(p[0] == 32){
  bt = "Space";
  }
  if(p[0] == 3){
  bt = "sym";
  }
  if(p[0] == 2){
  bt = "ABC";
  }
  if(p[0] == 1){
  bt = "abc";
  }
  drawnbut[p[0]] = 1; 
  gfx.Buttonx(p[0], p[1], p[2] + ypos, p[3], p[4], butcol, bt, p[5], tcol);
  }
}
void delbuttons(uint16_t bcolor){
  for(int n = 0; n < 128; n ++){
  if(drawnbut[n] == 1){
  gfx.DeleteButton(n, bcolor);
  drawnbut[n] = 0;
  }
  }
}
float getintvar(String iv){
  vindex = 0;
  float tmpv = 0;
  char iv1 = 0;
  char iv2 = 0;
  for(int n = 0; n < vtot; n++){
  iv1 = iv.charAt(0);
  if(iv.length() > 1){
  iv2 = iv.charAt(1);
  if(ivar[(n * 6)] == iv1 && ivar[(n * 6) + 1] == iv2){
  union u_tag {
  byte b[4];
  float fval;
  } u;
  u.b[0] = ivar[(n * 6) + 2];
  u.b[1] = ivar[(n * 6) + 3];
  u.b[2] = ivar[(n * 6) + 4];
  u.b[3] = ivar[(n * 6) + 5];
  tmpv = u.fval;
  //tmpv = (ivar[(n * 4) + 2]) << 8;
  //tmpv = tmpv + ivar[(n * 4) + 3];
  vindex = n + 1;
  return tmpv;
  }
  } else {
  if(ivar[(n * 6)] == iv1 && ivar[(n * 6) + 1] == 58){
  union u_tag {
  byte b[4];
  float fval;
  } u;
  u.b[0] = ivar[(n * 6) + 2];
  u.b[1] = ivar[(n * 6) + 3];
  u.b[2] = ivar[(n * 6) + 4];
  u.b[3] = ivar[(n * 6) + 5];
  tmpv = u.fval;
  //tmpv = (ivar[(n * 4) + 2]) << 8;
  //tmpv = tmpv + ivar[(n * 4) + 3];
  vindex = n + 1;
  return tmpv;
  }
  }
  }
  if(vindex == 0){
  return 0;
  }
}
void setintvar(String iv, float v){
  getintvar(iv);
  char iv1 = 0;
  char iv2 = 0;
  int ivpos;
  if(iv.length() == 1){
  iv1 = iv.charAt(0);
  if((iv1 > 64 && iv1 < 91) || (iv1 > 96 && iv1 < 123)){
  eflag = false;
  } else {
  eflag = false;
  return ;
  }
  iv2 = char(58);
  } else {
  iv1 = iv.charAt(0);
  if((iv1 > 64 && iv1 < 91) || (iv1 > 96 && iv1 < 123)){
  eflag = true;
  } else {
  eflag = false;
  return ;
  }
  iv2 = iv.charAt(1);  
  if((iv2 > 64 && iv2 < 91) || (iv2 > 96 && iv2 < 123) || (iv2 > 47 && iv2 < 58)){
  eflag = true;
  } else {
  eflag = false;
  return ;
  }
  }
  if(vindex == 0){
  vtot = vtot + 1;
  ivpos = vtot - 1;
  vindex = ivpos + 1;
  } else {
  ivpos = vindex - 1;
  }
  ivar[(ivpos * 6)] = iv1; 
  ivar[(ivpos * 6) + 1] = iv2;
   union {
  float a;
  unsigned char bytes[4];
  } thing;
  thing.a = v;
  ivar[(ivpos * 6) + 2] = thing.bytes[0];
  ivar[(ivpos * 6) + 3] = thing.bytes[1];
  ivar[(ivpos * 6) + 4] = thing.bytes[2];
  ivar[(ivpos * 6) + 5] = thing.bytes[3];
  //ivar[(ivpos * 4) + 2] = v >> 8;
  //ivar[(ivpos * 4) + 3] = v & 0xff;   
}
void dispmsg(int msgno, boolean tw, boolean nl){
   int asize;
   int tk = -1;
   int posias = -1;
   int posiae = 0;
   byte tstbyte;
   byte tstbyte1;
   asize = (sizeof(messages)/sizeof(messages[0]));
   for (int i = 0; i < asize; i++){
   if(messages[i] == 124){
   tk = tk + 1;
   if(tk == msgno){
   posias = i;
   }
   if(tk == (msgno + 1)){
   posiae = i;
   break;
   }
   }
   }
   byte lenm = posiae - posias - 1;
   for(int n = 0; n < lenm; n++){
   if(tw){
   gfx.TWwrite(messages[posias + n + 1]);
   } else {
   Write(messages[posias + n + 1]);
   }
   }
   if(nl){
   if(tw){
   gfx.TWprintln("");
   } else {
   Println("");
   }
   }
}
boolean getlogic(byte fnum){
  //logicsum = true;
  boolean logres;
  int16_t var1 = getsum(fnum);
  String op = field[fieldnum];
  fnum = fieldnum + 1;
  int16_t var2 = getsum(fnum);
  //Serial.println(var1);
  //Serial.println(var2);
  //Serial.println(op);
  if(op == "="){
  if(var1 == var2){
  logres = true;
  } else {
  logres = false;  
  }
  }
  if(op == "<>"){
  if(var1 != var2){
  logres = true;
  } else {
  logres = false;  
  }
  }
  if(op == ">"){
  if(var1 > var2){
  logres = true;
  } else {
  logres = false;  
  }
  }
  if(op == ">="){
  if(var1 >= var2){
  logres = true;
  } else {
  logres = false;  
  }
  }
  if(op == "<"){
  if(var1 < var2){
  logres = true;
  } else {
  logres = false;  
  }
  }
  if(op == "<"){
  if(var1 <= var2){
  logres = true;
  } else {
  logres = false;  
  }
  }
  fieldnum = fnum;
  return logres;
}
void getudp(){
   int packetSize = Udp.parsePacket();
  if (packetSize){
  //Serial.printf("Received %d bytes from %s, port %d\n", packetSize, Udp.remoteIP().toString().c_str(), Udp.remotePort());
  int len = Udp.read(incomingPacket, 255);
  if (len > 0){
  incomingPacket[len] = 0;
  }
  udp = true;
  xp = false;
  if(udprx == false){
  if(incomingPacket[0] == 68 && incomingPacket[1] == 65 && incomingPacket[2] == 84){
  xp = true;
  } else {
  command(incomingPacket);
  }
  }
  if(udprx == true){
  vcount = 0;
  String ipbuffer = String(incomingPacket);
  //Serial.print(incomingPacket);
  String va1[10];
  String va2 = "";
  byte st = 1;
  for(int n = 0; n < len; n ++){
    if(char(ipbuffer.charAt(n)) > 43 && char(ipbuffer.charAt(n)) < 58){
     char gc = ipbuffer.charAt(n);
     if(gc == 44){
     st = st + 1;
     }
     if(gc > 47 && gc < 58){
     va1[st] = va1[st] + char(gc);
     }     
    }
  }
  vcount = st;
  mint = "";
  for(int n = 1; n < (st + 1); n ++){
  mint = char(85);
  mint = mint + char(47 + n);

  setintvar(mint, va1[n].toInt());  
  }
  udprx = false;
  }
  }
}

void storeprog(String progln){
  char rep = prog[1];
  int plnlen = progln.length();
  progln.trim();
  boolean delln = false;
  byte plp = 0;
  String temppl = "";
  boolean dontskip = true;
  while(progln.charAt(plp) > 47 && progln.charAt(plp) < 58){
  temppl = temppl + progln.charAt(plp);
  plp = plp + 1; 
  }
  if(progln.length() <= (temppl.length() + 1)){
  delln = true;  
  }
  int lnnum = temppl.toInt();
  if(lnnum < 1){
  return;  
  }
  if(delln == false){
  String gkn = ":";
  plp = plp + 1;
  for(int n = 0; n < 20; n++){
  if(progln.charAt(plp) < 48){
  break;
  }
  gkn = gkn + progln.charAt(plp);
  plp = plp + 1; 
  }
  gkn.trim();
  gkn.toUpperCase();
  gkn = gkn + ",";
  int chkk = getKeywordPos(gkn, true);
  if(chkk > 0){
  kword = commands[chkk + 1] - 34;
  } else {
  kword = 0;
  }
  progkword[lnnum] = kword;
  }
  if(lnnum >= llnold && delln == false){
  dontskip = false;
  llnold = lnnum;
  for(int n = 0; n < plnlen; n++){
  prog[progend + n] = progln.charAt(n); 
  }
  progpos[lnnum] = progend;
  proglen[lnnum] = plnlen;
  progend = progend + plnlen;
  }
  int gnl = 0;
  for(int n = lnnum; n < 1001; n ++){
  if(progpos[n] != 0){
  gnl = n;
  break;  
  }
  }
  if(gnl == lnnum && dontskip){
  int strtrm = progpos[gnl];
  int rmlen = progend - strtrm + proglen[gnl];
  if(gnl != llnold){
  for(int n = 0; n < (rmlen + 1); n++){
  prog[strtrm + n] = prog[strtrm + n + proglen[gnl]];  
  }
  for(int n = gnl + 1; n < 1000; n ++){
  if(progpos[n] > 0){
  progpos[n] = progpos[n] - proglen[gnl];
  }
  }
  }
  progend = progend - proglen[gnl];
  proglen[gnl] = 0;
  progpos[gnl] = 0;
  progkword[lnnum] = 0;
  if(gnl == llnold){
  for(int n = gnl; n > -1 ; n--){
  if(progpos[n] != 0){
  llnold = n;
  break;    
  }
  }
  }
  }
  if(lnnum < llnold && delln == false && dontskip){
  gnl = 0;
  for(int n = lnnum; n < 1001; n ++){
  if(progpos[n] != 0){
  gnl = n;
  break;  
  }
  }
  int strtm = progpos[gnl];
  for(int n = gnl; n < 1000; n ++){
  if(progpos[n] != 0){
  progpos[n] = progpos[n] + plnlen;
  }
  }
  int mlen = progend - strtm + 1;
  for(int n = 0; n < mlen; n ++){
  prog[(progend - n) + plnlen] = prog[progend - n];
  }
  //memcpy(prog[strtm],progln,plnlen);
  for(int n = 0; n < plnlen; n++){
  prog[strtm + n] = progln.charAt(n); 
  }
  progend = progend + plnlen;
  progpos[lnnum] = strtm;
  proglen[lnnum] = plnlen;
  progkword[lnnum] = kword;
  }
  lln = lnnum;
}

String getprog(uint16_t gpln){
  String tempgp = "";
  if(progpos[gpln] > 0){
  for(int n = 0; n < proglen[gpln]; n ++){
  tempgp = tempgp + char(prog[progpos[gpln] + n]);
  }
  return tempgp;
  }
  return tempgp;
}
//byte build(byte f, String build1){
//  build1.trim();
//  yield();
//  field[f] = build1;
//  flen[f] = fl;
//  fl = 0;
//  build ="";
//  f = f + 1;
//  if(chk == fc){
//  field[f] = ",";
//  f = f + 1;
//  }
//}
void inputfunc(){
  but = 255;
  if(gfxon == false){
  buttw = gfx.CheckButtons();
  if(buttw != lastbut && buttw > 0){
  but = buttw;
  }
  if(modedelay > 0){
  modedelay = modedelay -1;
  }
  skipchk = false;
  if(modedelay > 0 && but == 64){
  skipchk = true;
  }
  if(modedelay > 0 && but == 95){
  skipchk = true;
  }
  if(modedelay > 0 && but == 1){
  skipchk = true;
  }
  if(modedelay > 0 && but == 2){
  skipchk = true;
  }
  if(skipchk == false){
  if(but == 8 || but == 127){
  gfx.TWwrite(8);
  byte tsl = iinputString.length();
  String tiis = "";
  if(tsl > 1){
  for(int n = 0; n < tsl - 1; n++){
  tiis = tiis + iinputString.charAt(n);
  }
  iinputString = tiis;
  } else {
  iinputString = "";
  }
  }
  if(but == 1){
  key2();
 
  but = 2;
  skipchk = true;
  modedelay = 30;
  }
  if(but == 2 && skipchk == false){
  key1();

  but = 1;
  skipchk = true;
  modedelay = 30;
  }
  if(but == 3 && skipchk == false){
  key3();

  modedelay = 30;
  }
  }
  }
  getserial();
  gettelnet();
  if(but > 9 && but < 129 && but != 64 && but != 95){
  gfx.TWwrite(but);
  if(but != 13){
  iinputString = iinputString + char(but);  
  } else {
  float tvi = iinputString.toFloat(); 
  setintvar(tempvarname, tvi);
  inpf = false;
  if(opm == 2){
  Serial.println("");
  }
  }
  } 
}