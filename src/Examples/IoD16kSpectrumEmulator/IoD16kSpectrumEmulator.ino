
#include "GFX4d.h"
#include <Arduino.h>
#include "Emulator.h"

#define ZX_EMU_TAPE     0
#define ZX_EMU_ROM      1

#define ZX_LOAD_ANIM    0  // 0 - off, 8 - slow, 16 - medium, 32 - fast etc ...

byte chkKeyb;

uint8_t * RAM;

uint8_t SCREENCACHE[6145];
uint16_t screenline[256];
unsigned char CACHE[1024];

uint8_t CACHETEST[32] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                         0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                         0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                         0, 0
                        };

uint8_t linepos[192] = {0, 8, 16, 24, 32, 40, 48, 56,
                        1, 9, 17, 25, 33, 41, 49, 57,
                        2, 10, 18, 26, 34, 42, 50, 58,
                        3, 11, 19, 27, 35, 43, 51, 59,
                        4, 12, 20, 28, 36, 44, 52, 60,
                        5, 13, 21, 29, 37, 45, 53, 61,
                        6, 14, 22, 30, 38, 46, 54, 62,
                        7, 15, 23, 31, 39, 47, 55, 63,
                        64, 72, 80, 88, 96, 104, 112, 120,
                        65, 73, 81, 89, 97, 105, 113, 121,
                        66, 74, 82, 90, 98, 106, 114, 122,
                        67, 75, 83, 91, 99, 107, 115, 123,
                        68, 76, 84, 92, 100, 108, 116, 124,
                        69, 77, 85, 93, 101, 109, 117, 125,
                        70, 78, 86, 94, 102, 110, 118, 126,
                        71, 79, 87, 95, 103, 111, 119, 127,
                        128, 136, 144, 152, 160, 168, 176, 184,
                        129, 137, 145, 153, 161, 169, 177, 185,
                        130, 138, 146, 154, 162, 170, 178, 186,
                        131, 139, 147, 155, 163, 171, 179, 187,
                        132, 140, 148, 156, 164, 172, 180, 188,
                        133, 141, 149, 157, 165, 173, 181, 189,
                        134, 142, 150, 158, 166, 174, 182, 190,
                        135, 143, 151, 159, 167, 175, 183, 191
                       };

const char ROMcartridges[200] PROGMEM = {'1', '6', 'k', '/', '4', '8', 'k', ' ', 'B', 'a', 's', 'i', 'c', ' ', 'R', 'O', 'M', 0,
                                        // 'P', 'l', 'a', 'n', 'e', 't', 'o', 'i', 'd', 's', 0,
                                        // 'S', 'p', 'a', 'c', 'e', ' ', 'R', 'a', 'i', 'd', 'e', 'r', 's', 0,
                                        // 'H', 'o', 'r', 'a', 'c', 'e', ' ', 'a', 'n', 'd', ' ', 't', 'h', 'e', ' ', 'S', 'p', 'i', 'd', 'e', 'r', 's', 0,
                                        // 'H', 'o', 'r', 'a', 'c', 'e', 0,
                                        // 'P', 'i', 'n', 'b', 'a', 'l', 'l', 0,
                                        // 'D', 'e', 'a', 'h', 'c', 'h', 'a', 's', 'e', 0,
                                        // 'D', 'i', 'a', 'g', 'n', 'o', 's', 't', 'i', 'c', 's', 0,
                                        // 'H', 'i', 'g', 'h', 'w', 'a', 'y', ' ', 'E', 'n', 'c', 'o', 'u', 'n', 't', 'e', 'r', 0,
                                        // 'V', 'e', 'c', 't', 'o', 'r', ' ', 'B', 'a', 'l', 'l', 0,
                                        // 'S', 't', 'a', 'r', ' ', 'W', 'a', 'r', 's', 0,
                                        // 'Q', 'B', 'e', 'r', 't', 0,
                                        // 'G', 'y', 'r', 'u', 's', 's', 0,
                                        // 'F', 'l', 'i', 'g', 'h', 't', ' ', 'S', 'i', 'm', 'u', 'l', 'a', 't', 'i', 'o', 'n', 0, 
                                         255 // 255 is end marker
                                        };
byte romnum = 1; // total ROMs in flash including BASIC
// Example roms added. Roms must be added the same way as the Basic.h and named GAME1, GAME2 ....
// Also need to modify the switch/case routine in the RdZ80(word16 A) function
// ROMs
const unsigned char ROM[16384] PROGMEM = {
#include "Basic.h" //ZX Spectrum rom
};
/*
const unsigned char GAME1[16384] PROGMEM = {
#include "Planetoid.h" //ZX Spectrum rom
};
const unsigned char GAME2[16384] PROGMEM = {
#include "SpaceRaiders.h"
};
const unsigned char GAME3[16384] PROGMEM = {
#include "HoraceAndTheSpiders.h"
};
const unsigned char GAME4[16384] PROGMEM = {
#include "Horace.h"
};
const unsigned char GAME5[16384] PROGMEM = {
#include "Pinball.h"
};
const unsigned char GAME6[16384] PROGMEM = {
#include "DeathChase.h"
};
const unsigned char GAME7[16384] PROGMEM = {
#include "Diagnostic.h"
};
const unsigned char GAME8[16384] PROGMEM = {
#include "HighwayEncounter.h"
};
const unsigned char GAME9[16384] PROGMEM = {
#include "VectorBall.h"
};
const unsigned char GAME10[16384] PROGMEM = {
#include "StarWars.h"
};
const unsigned char GAME11[16384] PROGMEM = {
#include "QBert.h"
};
const unsigned char GAME12[16384] PROGMEM = {
#include "Gyruss.h"
};
const unsigned char GAME13[16384] PROGMEM = {
#include "FlightSimulation.h"
};
*/

// Graphics for ROM/TAPE menus
const unsigned char ZXrainbow[] PROGMEM = {
#include "ZXrainbow.h"
};
const unsigned char ZXenter[] PROGMEM = {
#include "ZXenter.h"
};
const unsigned char ZXx[] PROGMEM = {
#include "ZXx.h"
};
const unsigned char ZX6and7[] PROGMEM = {
#include "ZX6and7.h"
};

Z80 state;
GFX4d gfx = GFX4d();

uint16_t pal1[] = {0x0000, 0xC003, 0x05E0, 0xCDC1, 0x0036, 0xB81A, 0x0634, 0xFFFF,
                   0xBDF7, 0x4532, 0x8152, 0x006D, 0xBD8A, 0x3CC5, 0x78C5, 0x0000
                  };
uint16_t pal2[] = {0x0000, 0x006D, 0x78C5, 0x8152, 0x3CC5, 0x4532, 0xBD8A, 0xBDF7,
                   0x0000, 0x0036, 0xC003, 0xB81A, 0x05E0, 0x0634, 0xCDC1, 0xFFFF
                  };

String kbfile = "####################";
#ifdef ESP32
String files[256];
#else
String files[128];
#endif
String tfile;

char rdname[7] = {'0', '0', '.', 'r', 'd', 'b', 0};
char tempchar[32];

File specfile;
File rdisk;
File cfg;

uint16_t tempcol;
uint16_t tfval2[64];
uint16_t bccol;
uint16_t tccol;
uint16_t col;
uint16_t fnSTpos;
uint16_t colbyteaddr;
uint16_t coly;

uint8_t tfval1[128];

int keyrepeat;
int BasicStart;
int LineNum;
int yieldc;
int keydown;
int rowcalc;
int len;
int xpos;
int xcount;
int chr;
int cassSel;
int oldcassSel;
int romSel;
int oldromSel;
int x;
int y;
int pos;
int rpos;
int n;
int chstart;
int chlen;
int xr;
int lastc;
int sposf;
int strtl;
int endl;

int32_t rCycles = 70000;

uint32_t tnow;

boolean Theader;

byte flash;
byte rom;
byte flashCount;
byte bordcol;
byte oldbordcol;
byte keyval;
byte UpdateS;
byte filnum;
byte ActiveScreen = 0;
byte initial = 0;
byte initialR = 0;
byte sel = 1;
byte oldsel;
byte rect;
byte ret_byte;
byte enInt;
byte NMItog;
byte colbyte;
byte c;
byte flsh;
byte fl;
byte bright;
byte bAnim[6];
byte fr;
byte udate;
byte trow;
byte fnEntered;
byte breakOut;
byte ButtonTouched;
byte lastButtonTouched;
uint16_t rSector;
uint16_t lastrSector;
byte ReadOrWrite;
byte rdFirst;
byte lastkeydown;
byte exitload;
byte loadSDdirInitial = 1;
byte prevSel;

char kUpdate[12];

void setup() {
  // put your setup code here, to run once:
#ifdef ESP8266
  pinMode(16, OUTPUT);
  RAM = (uint8_t *)malloc(0x4000);
#else
  RAM = (uint8_t *)malloc(0xC000);
#endif
  gfx.begin();
  gfx.BacklightOn(true);
  gfx.Orientation(LANDSCAPE);
  gfx.TextColor(BLACK, WHITE); gfx.Font(1);  gfx.TextSize(1);
#ifndef ESP32
  gfx.touch_Set(TOUCH_ENABLE);
#endif
  Serial.begin(115200);
  gfx.Cls(pal2[7]);
  for (int s = 0; s < 12; s++) {
    kUpdate[s] = 0xff;
  }
  kbfile = "";
  initEMU(ZXSPECTRUM);
#ifdef USE_RAM_DISK
  RAMdiskInit(8192);
#endif
}

void loop() {
  // put your main code here, to run repeatedly:
  flashCount ++;
  if (flashCount > 20) {
    flashCount = 0;
    UpdateS = 1;
    if (flash == 1) {
      flash = 0;
    } else {
      flash = 1;
    }
  }
  if (ActiveScreen == 0) {
    tnow = millis();
    ExecZ80(&state, rCycles);
    if (enInt) IntZ80(&state, INT_IRQ);
    pos = 0;
    if (UpdateS) {
      updateSpectrumScreen();
      UpdateS = 0;
    }
    if ((millis() - tnow) < 14) delay(14 - (millis() - tnow));
  }
  if (ActiveScreen == 2) {
    cassScreen();
    if (Serial.available() > 0) checkKeyboard();
  }
  if (ActiveScreen == 1) {
    romScreen();
    if (Serial.available() > 0) checkKeyboard();
  }
  if (kUpdate[11] == 0xc1) {
    kUpdate[11] = 0xc3;
    initial = 1;
    ActiveScreen = 2;
#ifdef ESP8266
    flushTouch();
#endif
  }
  if (kUpdate[11] == 0xc2) {
    kUpdate[11] = 0xc3;
    initialR = 1;
    ActiveScreen = 1;
#ifdef ESP8266
    flushTouch();
#endif
  }
  yieldc ++;
  if (yieldc > 50) {
#ifdef ESP8266
    yield();
#endif
    yieldc = 0;
  }
}

#ifdef ESP8266
byte getButtonTouched() {
  if (gfx.touch_Update()) {
    ButtonTouched = 0;
    int x, y;
    x = gfx.touch_GetX();
    y = gfx.touch_GetY();
    if (y > 190 && y < 232) {
      if (x > 100 & x < 154) ButtonTouched = 1;
      if (x > 170 & x < 225) ButtonTouched = 2;
      if (x > 18 & x < 74) ButtonTouched = 3;
      if (x > 248 & x < 304) ButtonTouched = 4;
    }
  }
  return ButtonTouched;
}
#endif

void drawa64Char2(int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t size) {
  if ((x >= 320) || (y >= 240) || (x < 0) || (y < 0)) {
    return;
  }
  if (c == 32) {
    gfx.RectangleFilled(x, y, x + 7, y + 7, bg);
    return;
  }
  uint8_t stp;
  gfx.setGRAM(x, y, x + 7, y + 7);
  uint8_t trow = 0x80;
  uint8_t chb;
  byte tcount = 0;
  uint32_t tfval;
  c -= 32;
  uint16_t c2pos = c * 8;
  for (uint8_t j = 0; j < 8; j++ ) {
    chb = pgm_read_byte_near(ROM + 0x3d00 + c2pos + j);
    for (uint8_t i = 0; i < 4; i++) {
      if (chb & trow) {
        tfval1[tcount] = color >> 8;
        tcount ++;
        tfval1[tcount] = color & 0xff;
        tcount ++;
      } else {
        tfval1[tcount] = bg >> 8;
        tcount ++;
        tfval1[tcount] = bg & 0xff;
        tcount ++;
      }
      chb <<= 1;
      if (chb & trow) {
        tfval1[tcount] = color >> 8;
        tcount ++;
        tfval1[tcount] = color & 0xff;
        tcount ++;
      } else {
        tfval1[tcount] = bg >> 8;
        tcount ++;
        tfval1[tcount] = bg & 0xff;
        tcount ++;
      }
      chb <<= 1;
      trow = 0x80;
    }
  }
  gfx.WriteBytes(tfval1, 128);
}

byte RdZ80(word16 A) {
  ret_byte = 0xff;
  if (A >= 0x04c2 && A <= 0x099e && romSel == 0) {
    if (A == 0x0556) {
      if (!(specfile)) {
        ActiveScreen = 2;
        lastkeydown = 0;
        initial = 1;
        breakOut = 1;
        exitload = 1;
      }
    }
    if (A == 0x0557) {
      while (specfile.read() != 0x13);
      specfile.read();
    }
    if (A == 0x05ca) return 0x2e;
    if (A == 0x05cb) {
      fr = specfile.read();
      if (ZX_LOAD_ANIM) borderAnim(fr);
      return fr;
    }

    if (A == 0x0650) {
      fnSTpos = getDE(&state);
      fnEntered = 1;
    }
    if (A == 0x0767) {
      if (!(gfx.CheckSD())) {
        tapeError();
        return 0;
      }
      int nl;
      kbfile = "";
      for (nl = 0; nl < 10; nl++) {
        kbfile = kbfile + (char)RAM[(fnSTpos - 0x4000) + nl];
      }
      kbfile.trim();
      if (fnEntered) {
#ifdef ESP32
        kbfile = "/" + kbfile + ".tap";
#else
        kbfile = kbfile + ".tap";
#endif
        if (specfile) {
          if ((specfile.position() + 10) > specfile.size()) {
            if (RAM[0x5C74 - 0x4000] > 0) specfile.close();
          }
        }
        if (!(specfile)) {
          if (SD.exists(kbfile)) {
            if (RAM[0x5C74 - 0x4000] > 0) specfile = SD.open(kbfile, FILE_READ);
          } else {

          }
        }

      } else {

      }
      fnEntered = 0;
    }
    if (A > 0x05cb && A < 0x05db) return 0x00;
    if (A > 0x056a && A < 0x059f) return 0x00;
    if (A == 0x098a) {
      Theader = true;
      specfile.close();
      int nl;
      kbfile = "";
      for (nl = 0; nl < 10; nl++) {
        kbfile = kbfile + (char)RAM[(fnSTpos - 0x4000) + nl];
      }
      kbfile.trim();
      if (kbfile != "") {
#ifdef ESP32
        kbfile = "/" + kbfile + ".tap";
#else
        kbfile = kbfile + ".tap";
#endif
        if (RAM[0x5C74 - 0x4000] < 1) {
          if (SD.exists(kbfile)) {
            SD.remove(kbfile);
          }
          loadSDdirInitial = 1;
          specfile = SD.open(kbfile, FILE_WRITE);
          specfile.write(0x13); specfile.write(0x00);
        }
      }
    }
    if (A == 0x099e) {
      Theader = false;
    }
    if (A >= 0x04c2 && A <= 0x053e) {
      if (A == 0x0505) {
        specfile.write(getL(&state));
        if (ZX_LOAD_ANIM) borderAnim(getL(&state));
      }
      if (A == 0x04fb) {
        specfile.write(getL(&state));
        if (ZX_LOAD_ANIM) borderAnim(getL(&state));
      }
      if (A == 0x04c2) {
        if (Theader == false) {
          uint16_t tempSDE;
          tempSDE = getDE(&state) + 2;
          specfile.write(tempSDE & 0xff);
          specfile.write(tempSDE >> 8);
        }
      }
      if ((A == 0x053e && Theader == false)) {
        specfile.close();
        border(bordcol);
      }
      if (A == 0x04d8 || A == 0x04db) return 0x00;
      if (A == 0x04ea || A == 0x04ed) return 0x00;
      if (A == 0x04f2 || A == 0x04f5) return 0x00;
      if (A == 0x051c || A == 0x051d) return 0x00;
    }
    if (A == 0x0802) {
      uint16_t DEtemp, IXtemp, Ltemp, bl;
      DEtemp = getDE(&state);
      Ltemp = (specfile.read() + (specfile.read() << 8)) - 2;
      specfile.read();
      IXtemp = getIX(&state);
      for (bl = 0; bl < Ltemp; bl++) {
        fr = specfile.read();
        if (ZX_LOAD_ANIM) {
          if (!(bl % ZX_LOAD_ANIM)) {
            borderAnim(fr);
            updateSpectrumScreen();
          }
        }
        if ((IXtemp + bl) >= 0x5800 && (IXtemp + bl) < 0x5b00) {
          CACHE[(IXtemp + bl) - 0x5800] = 8;
        }
        WrZ80(IXtemp + bl, fr);
        //RAM[(IXtemp - 0x4000) + bl] = fr;
      }
      specfile.read();
      setDE(&state, 0);
      setIX(&state, IXtemp + DEtemp);
#ifdef ESP8266
      yield();
#endif
      border(bordcol);
      return 0xc9;
    }
  }
#ifdef ESP32
  if (A >= 0x4000 && A <= 0xffff) return RAM[A - 0x4000];
#else
  if (A >= 0x4000 && A <= 0x7fff) return RAM[A - 0x4000];
#ifdef USE_RAM_DISK
  if (A >= 0x8000 && A <= 0xff00) return RAMdisk(RAMDISK_READ, A - 0x8000, 0);//ramDiskRead(A - 0x8000);
  if (A >= 0xff00 && A <= 0xffff) return topRam[A - 0xff00];
#endif
#endif
  if (A < 0x4000) {
    switch (romSel) {
      case 0:
        ret_byte = pgm_read_byte(ROM + A);
        break;
      /*
      case 1:
        ret_byte = pgm_read_byte(GAME1 + A);
        break;
      case 2:
        ret_byte = pgm_read_byte(GAME2 + A);
        break;
      case 3:
        ret_byte = pgm_read_byte(GAME3 + A);
        break;
      case 4:
        ret_byte = pgm_read_byte(GAME4 + A);
        break;
      case 5:
        ret_byte = pgm_read_byte(GAME5 + A);
        break;
      case 6:
        ret_byte = pgm_read_byte(GAME6 + A);
        break;
      case 7:
        ret_byte = pgm_read_byte(GAME7 + A);
        break;
      case 8:
        ret_byte = pgm_read_byte(GAME8 + A);
        break;
      case 9:
        ret_byte = pgm_read_byte(GAME9 + A);
        break;
      case 10:
        ret_byte = pgm_read_byte(GAME10 + A);
        break;
      case 11:
        ret_byte = pgm_read_byte(GAME11 + A);
        break;
      case 12:
        ret_byte = pgm_read_byte(GAME12 + A);
        break;
      case 13:
        ret_byte = pgm_read_byte(GAME13 + A);
        break;
        */
    }
  }
  return ret_byte;
}

void WrZ80(word16 A, byte V) {
#ifdef ESP32
  if (A >= 0x4000 && A <= 0xffff) {
#else
#ifdef USE_RAM_DISK
  if (A >= 0x8000 && A <= 0xff00) RAMdisk(RAMDISK_WRITE, A - 0x8000, V); //ramDiskWrite(A - 0x8000, V);
  if (A >= 0xff00 && A <= 0xffff) topRam[A - 0xff00] = V;
#endif
  if (A >= 0x4000 && A <= 0x7fff) {
#endif
    if (A >= 0x5800 && A < 0x5b00) {
      if (RAM[A - 0x4000] != V) CACHE[A - 0x5800] = 8;
    }
    RAM[A - 0x4000] = V;
    if (A >= 0x4000 && A <= 0x5aff) {
      UpdateS = 1;
    }
  }
}

void OutZ80(register word16 Port, register byte Value)
{
  if ((Port & 0xFF) == 0xFE) {
    if ((Value & 0x07) != bordcol) {
      border(Value & 0x07);
    } else {
      if ((Value & 0x10) == 0x10) {
#ifdef ESP32
        dacWrite(25, 10);
#else
        digitalWrite(16, 1);
#endif
      }
      if ( (Value & 0x10) == 0x00) {
#ifdef ESP32
        dacWrite(25, 0);
#else
        digitalWrite(16, 0);
#endif
      }
    }
  }
}

byte InZ80(register word16 Port)
{
  byte ret_wert;
  ret_wert = 0xff;
  byte kDown;
  if ((Port & 0xFF) == 0xFE) {
    if (Serial.available() > 0) checkKeyboard();
    chkKeyb = 1;
    ret_wert = 0x00;
    kDown = ~(Port >> 8);
    if (kDown & 0x01) {
      ret_wert |= ~(kUpdate[2] & 0x1f);
    }
    if (kDown & 0x02) {
      ret_wert |= ~(kUpdate[3] & 0x1f);
    }
    if (kDown & 0x04) {
      ret_wert |= ~(kUpdate[4] & 0x1f);
    }
    if (kDown & 0x08) {
      ret_wert |= ~(kUpdate[5] & 0x1f);
    }
    if (kDown & 0x10) {
      ret_wert |= ~(kUpdate[6] & 0x1f);
    }
    if (kDown & 0x20) {
      ret_wert |= ~(kUpdate[7] & 0x1f);
    }
    if (kDown & 0x40) {
      ret_wert |= ~(kUpdate[8] & 0x1f);
    }
    if (kDown & 0x80) {
      ret_wert |= ~(kUpdate[9] & 0x1f);
    }
    ret_wert = 0xE0 | (~(ret_wert));
  }
  if (ret_wert != 0xff) lastkeydown = ret_wert;
  return (ret_wert);
}

static void CodesCB(register Z80 * R)
{
  register byte I;

  I = OpZ80(R->PC.W++);
  R->ICount -= CyclesCB[I];
  switch (I)
  {
#include "CodesCB.h"
  }
}

static void CodesDDCB(register Z80 * R)
{
  register pair J;
  register byte I;

#define XX IX
  J.W = R->XX.W + (offset)OpZ80(R->PC.W++);
  I = OpZ80(R->PC.W++);
  R->ICount -= CyclesXXCB[I];
  switch (I)
  {
#include "CodesXCB.h"
  }
#undef XX
}

static void CodesFDCB(register Z80 * R)
{
  register pair J;
  register byte I;

#define XX IY
  J.W = R->XX.W + (offset)OpZ80(R->PC.W++);
  I = OpZ80(R->PC.W++);
  R->ICount -= CyclesXXCB[I];
  switch (I)
  {
#include "CodesXCB.h"
  }
#undef XX
}

static void CodesED(register Z80 * R)
{
  register byte I;
  register pair J;

  I = OpZ80(R->PC.W++);
  R->ICount -= CyclesED[I];
  switch (I)
  {
#include "CodesED.h"
    case PFX_ED:
      R->PC.W--; break;
  }
}

static void CodesDD(register Z80 * R)
{
  register byte I;
  register pair J;

#define XX IX
  I = OpZ80(R->PC.W++);
  R->ICount -= CyclesXX[I];
  switch (I)
  {
#include "CodesXX.h"
    case PFX_FD:
    case PFX_DD:
      R->PC.W--; break;
    case PFX_CB:
      CodesDDCB(R); break;
  }
#undef XX
}

static void CodesFD(register Z80 * R)
{
  register byte I;
  register pair J;

#define XX IY
  I = OpZ80(R->PC.W++);
  R->ICount -= CyclesXX[I];
  switch (I)
  {
#include "CodesXX.h"
    case PFX_FD:
    case PFX_DD:
      R->PC.W--; break;
    case PFX_CB:
      CodesFDCB(R); break;
  }
#undef XX
}

void ResetZ80(Z80 * R)
{
  R->PC.W     = 0x0000;
  R->SP.W     = 0xF000;
  R->AF.W     = 0x0000;
  R->BC.W     = 0x0000;
  R->DE.W     = 0x0000;
  R->HL.W     = 0x0000;
  R->AF1.W    = 0x0000;
  R->BC1.W    = 0x0000;
  R->DE1.W    = 0x0000;
  R->HL1.W    = 0x0000;
  R->IX.W     = 0x0000;
  R->IY.W     = 0x0000;
  R->I        = 0x00;
  R->R        = 0x00;
  R->IFF      = 0x00;
  R->ICount   = R->IPeriod;
  R->IRequest = INT_NONE;
  R->IBackup  = 0;

  JumpZ80(R->PC.W);
}

byte getL(Z80 * R) {
  return R->HL.B.l;
}

byte GetB(Z80 * R) {
  return R->AF.W >> 8;
}

uint16_t getHL(register Z80 * R) {
  return R->HL.W;
}

void setCFlag(register Z80 * R) {
  R->AF.B.l |= C_FLAG;
}

void setDE(register Z80 * R, uint16_t v) {
  R->DE.W = v;
}

void setIX(register Z80 * R, uint16_t v) {
  R->IX.W = v;
}

uint16_t getDE(register Z80 * R) {
  return R->DE.W;
}

uint16_t getIX(register Z80 * R) {
  return R->IX.W;
}

void setPC(register Z80 * R, uint16_t addr) {
  R->PC.W = addr;
}

int ExecZ80(register Z80 * R, register int RunCycles)
{
  register byte I;
  register pair J;
  for (R->ICount = RunCycles;;)
  {
    while (R->ICount > 0)
    {
      if (breakOut) {
        breakOut = 0;
        return (R->ICount);
      }
      I = OpZ80(R->PC.W++);
      R->ICount -= Cycles[I];
      INCR(1);
      switch (I)
      {
#include "Codes.h"
        case PFX_CB: CodesCB(R); break;
        case PFX_ED: CodesED(R); break;
        case PFX_FD: CodesFD(R); break;
        case PFX_DD: CodesDD(R); break;
      }
    }
    if (!(R->IFF & IFF_EI)) return (R->ICount);
    else
    {
      R->IFF = (R->IFF & ~IFF_EI) | IFF_1;
      R->ICount += R->IBackup - 1;
      if ((R->IRequest != INT_NONE) && (R->IRequest != INT_QUIT)) IntZ80(R, R->IRequest);
    }
  }
}

void IntZ80(Z80 * R, word Vector)
{
  if (R->IFF & IFF_HALT) {
    R->PC.W++;
    R->IFF &= ~IFF_HALT;
  }

  if ((R->IFF & IFF_1) || (Vector == INT_NMI))
  {
    M_PUSH(PC);
    if (R->IAutoReset && (Vector == R->IRequest)) R->IRequest = INT_NONE;
    if (Vector == INT_NMI)
    {
      R->IFF &= ~(IFF_1 | IFF_EI);
      R->PC.W = 0x0066;
      JumpZ80(0x0066);
      return;
    }
    R->IFF &= ~(IFF_1 | IFF_2 | IFF_EI);
    enInt = 0;
    if (R->IFF & IFF_IM2)
    {
      Vector = (Vector & 0xFF) | ((word)(R->I) << 8);
      R->PC.B.l = RdZ80(Vector++);
      R->PC.B.h = RdZ80(Vector);
      JumpZ80(R->PC.W);
      return;
    }
    if (R->IFF & IFF_IM1) {
      R->PC.W = 0x0038;
      JumpZ80(0x0038);
      return;
    }
    switch (Vector)
    {
      case INT_RST00: R->PC.W = 0x0000; JumpZ80(0x0000); break;
      case INT_RST08: R->PC.W = 0x0008; JumpZ80(0x0008); break;
      case INT_RST10: R->PC.W = 0x0010; JumpZ80(0x0010); break;
      case INT_RST18: R->PC.W = 0x0018; JumpZ80(0x0018); break;
      case INT_RST20: R->PC.W = 0x0020; JumpZ80(0x0020); break;
      case INT_RST28: R->PC.W = 0x0028; JumpZ80(0x0028); break;
      case INT_RST30: R->PC.W = 0x0030; JumpZ80(0x0030); break;
      case INT_RST38: R->PC.W = 0x0038; JumpZ80(0x0038); break;
    }
  }
}

void checkKeyboard() {

  if (Serial.available() > 11) {
    byte bc;
    bc = 0;
    Serial.read(kUpdate, 12);
    if (kUpdate[0] != 1 && (kUpdate[1] != 2 || kUpdate[1] != 3)) { // out odf sync
      for (int q = 0; q < 12; q++) {
        if (kUpdate[q] == 1) {
          bc = 1;
          for (int r = 0; r < 12; r++) {
            if (r < q) {
              kUpdate[r] = kUpdate[r + q];
            } else {
              kUpdate[r] = Serial.read();
            }
          }
          break;
        }
        if (bc) break;
      }
    }
  }
}

void initEMU(byte EMU) {
  rCycles = 70000;
  bordcol = 0xff;
  ResetZ80(&state);
  ActiveScreen = 0;
}

void borderAnim(byte b1) {
  byte n, o, i, io, ty;
  for (n = 0; n < 5; n++) {
    i = 1;
    for (o = 0; o < 8; o++) {
      if (bAnim[n] & i) {
        io = 6;
      } else {
        io = 1;
      }
      ty = (48 * n) + (o * 6);
      if (ty < 24 || ty >= 216) {
        gfx.RectangleFilled(0, ty, 319, ty + 5, pal2[io]);
      } else {
        gfx.RectangleFilled(0, ty, 31, ty + 5, pal2[io]);
        gfx.RectangleFilled(288, ty, 319, ty + 5, pal2[io]);
      }
      i <<= 1;
    }
  }
  for (n = 0; n < 4; n ++) {
    bAnim[n] = bAnim[n + 1];
  }
  bAnim[4] = b1;
#ifdef ESP8266
  yield();
#endif
}

void border(int v) {
  gfx.RectangleFilled(0, 0, 320, 23, pal2[v]);
  gfx.RectangleFilled(0, 0, 31, 239, pal2[v]);
  gfx.RectangleFilled(288, 0, 319, 239, pal2[v]);
  gfx.RectangleFilled(0, 216, 319, 239, pal2[v]);
  bordcol = v & 0x07;
}

void updateSpectrumScreen() {
  pos = 0;
  for (y = 0; y < 192; y++) {
    rect = 0;
    len = 0;
    xpos = -1;
    xcount = 0;
    rowcalc = y << 5;
    coly = 6144 + ((linepos[y] >> 3) << 5);
    fl = 0;
    for (n = 0; n < 32; n++) {
      if (RAM[coly + n] & 0x80) fl = 1;
    }
    if (fl == 0 && memcmp(RAM + rowcalc, SCREENCACHE + rowcalc, 32) == 0 && (memcmp(/*RAM + coly*/CACHE + coly - 6144, /*CACHE + coly - 5376*/CACHETEST, 32) == 0)) {
      pos += 32;

    } else {
      rpos = 0;
      chstart = -1; chlen = 0;
      for (x = 0; x < 32; x++) {
        colbyteaddr = coly + x;
        colbyte = RAM[colbyteaddr];
        bright = (colbyte >> 3) & 0x08;
        tccol = pal2[(colbyte & 0x07) + bright];
        bccol = pal2[((colbyte >> 3) & 0x07) + bright];
        flsh = colbyte >> 7;
        c = RAM[pos + x];
        trow = 0x80;
        for (n = 0; n < 8; n++) {
          if (c & trow) {
            if (flsh) {
              if (flash) {
                screenline[rpos] = bccol;
              } else {
                screenline[rpos] = tccol;
              }
            } else {
              screenline[rpos] = tccol;
            }
          } else {
            if (flsh) {
              if (flash) {
                screenline[rpos] = tccol;
              } else {
                screenline[rpos] = bccol;
              }
            } else {
              screenline[rpos] = bccol;
            }
          }
          c <<= 1;
          rpos ++;
        }
        if ((SCREENCACHE[rowcalc + x] != RAM[rowcalc + x]) || CACHE[colbyteaddr - 6144] != 0 || flsh) {
          if (CACHE[colbyteaddr - 6144] != 0) CACHE[colbyteaddr - 6144] --;
          if (chstart == -1) {
            chstart = x;
            chlen = 1;
          } else {
            chlen ++;
          }
        } else {
          if (chstart != -1) {
            gfx.setGRAM(32 + (chstart << 3), linepos[y] + 24, 32 + (chstart << 3) + (chlen << 3) - 1, linepos[y] + 24);
#ifndef ESP32
            gfx.WrGRAMs16232(screenline + (chstart << 3), chlen << 3);
#else
            gfx.WritePixels(screenline + (chstart << 3), chlen << 4);
#endif
            chstart = -1;
            chlen = 0;
          }
        }
        SCREENCACHE[rowcalc + x] = RAM[rowcalc + x];
      }
      if (chstart != -1) {
        gfx.setGRAM(32 + (chstart << 3), linepos[y] + 24, 32 + (chstart << 3) + (chlen << 3) - 1, linepos[y] + 24);
#ifndef ESP32
        gfx.WrGRAMs16232(screenline + (chstart << 3), chlen << 3);
#else
        gfx.WritePixels(screenline + (chstart << 3), chlen << 4);
#endif
      }
      pos += 32;
    }
  }
}

void tapeError() {
  setPC(&state, 0x0644);
}

void flushTouch() {
  for (byte o = 0; o < 10; o++) {
    gfx.touch_Update();
  }
}

void updateCFG() {
#ifdef ESP32
  if (SD.exists("/ZXIOD.cfg")) SD.remove("/ZXIOD.cfg");
  cfg = SD.open("/ZXIOD.cfg", FILE_WRITE);
  cfg.write(cassSel);
  cfg.close();
#else
  if (SD.exists("ZXIOD.cfg"))SD.remove("ZXIOD.cfg");
  cfg = SD.open("ZXIOD.cfg", FILE_WRITE);
  cfg.write(cassSel);
  cfg.close();
#endif
}

void getCFG() {
#ifdef ESP32
  if (SD.exists("/ZXIOD.cfg")) {
    cfg = SD.open("/ZXIOD.cfg", FILE_READ);
    cassSel = cfg.read();
    cfg.close();
  }
#else
  if (SD.exists("ZXIOD.cfg")) {
    cfg = SD.open("ZXIOD.cfg", FILE_READ);
    cassSel = cfg.read();
    cfg.close();
  }
#endif
}

void drawFrame() {
  int n, nl;
  uint32_t pix2;
  int16_t pix1;
  gfx.Cls(BLACK);
  gfx.setGRAM(287, 105, 319, 194);
  nl = 0;
  gfx.WrGRAMstart();
  for (n = 0; n < 1484; n++) {
    pix2 = pgm_read_byte_near(ZXrainbow + nl++) << 24;
    pix2 += (pgm_read_byte_near(ZXrainbow + nl++) << 16);
    pix2 += (pgm_read_byte_near(ZXrainbow + nl++) << 8);
    pix2 += pgm_read_byte_near(ZXrainbow + nl++);
    DISP_SPI_WRITE32(pix2);
  }
  pix1 += (pgm_read_byte_near(ZXrainbow + nl++) << 8);
  pix1 += pgm_read_byte_near(ZXrainbow + nl++);
  DISP_SPI_WRITE16(pix1);
  gfx.WrGRAMend();
  gfx.setGRAM(247, 191, 319, 239);
  nl = 0;
  gfx.WrGRAMstart();
  for (n = 0; n < 1788; n++) {
    pix2 = pgm_read_byte_near(ZXenter + nl++) << 24;
    pix2 += (pgm_read_byte_near(ZXenter + nl++) << 16);
    pix2 += (pgm_read_byte_near(ZXenter + nl++) << 8);
    pix2 += pgm_read_byte_near(ZXenter + nl++);
    DISP_SPI_WRITE32(pix2);
  }
  pix1 += (pgm_read_byte_near(ZXenter + nl++) << 8);
  pix1 += pgm_read_byte_near(ZXenter + nl++);
  DISP_SPI_WRITE16(pix1);
  gfx.WrGRAMend();
  gfx.setGRAM(16, 190, 73, 231);
  nl = 0;
  gfx.WrGRAMstart();
  for (n = 0; n < 1218; n++) {
    pix2 = pgm_read_byte_near(ZXx + nl++) << 24;
    pix2 += (pgm_read_byte_near(ZXx + nl++) << 16);
    pix2 += (pgm_read_byte_near(ZXx + nl++) << 8);
    pix2 += pgm_read_byte_near(ZXx + nl++);
    DISP_SPI_WRITE32(pix2);
  }
  gfx.WrGRAMend();
  gfx.setGRAM(100, 179, 224, 232);
  nl = 0;
  gfx.WrGRAMstart();
  for (n = 0; n < 3375; n++) {
    pix2 = pgm_read_byte_near(ZX6and7 + nl++) << 24;
    pix2 += (pgm_read_byte_near(ZX6and7 + nl++) << 16);
    pix2 += (pgm_read_byte_near(ZX6and7 + nl++) << 8);
    pix2 += pgm_read_byte_near(ZX6and7 + nl++);
    DISP_SPI_WRITE32(pix2);
  }
  gfx.WrGRAMend();
}

void romScreen() {
  if (initialR) {
    drawFrame();
    printString(2, 0, " ROM Select - list of ROM files ", 6, 0, 0);
    kUpdate[8] = 255;
    if (prevSel != romSel) romSel = prevSel;
    if (romnum < 21) {
      strtl = 0;
    } else {
      strtl = romSel;
    }
    printFileName(romSel, 1, ZX_EMU_ROM);
    kbfile = "";
  }
#ifdef ESP8266
  ButtonTouched = getButtonTouched();
#endif
  if (kUpdate[6] == 215 || (ButtonTouched == 2 && ButtonTouched != lastButtonTouched)) {
    romSel --;
    kUpdate[6] = 255;
    if (romSel < 0) romSel = 0;
    if (romSel != oldromSel) {
      printFileName(romSel, 1, ZX_EMU_ROM);
      oldromSel = romSel;
    }
  } else if (kUpdate[6] == 207 || (ButtonTouched == 1 && ButtonTouched != lastButtonTouched)) {
    romSel ++;
    kUpdate[6] = 255;
    if (romSel > romnum - 1) romSel = romnum - 1;
    if (romSel != oldromSel) {
      printFileName(romSel, 1, ZX_EMU_ROM);
      oldromSel = romSel;
    }
  } else {
    if (ButtonTouched == 2 || ButtonTouched == 1) {
      keyrepeat ++;
    } else {
      keyrepeat = 0;
    }
  }
  if (kUpdate[2] == 219 || (ButtonTouched == 3 && ButtonTouched != lastButtonTouched)) {
    kUpdate[2] = 255;
    yield();
    resetScreen();
    ActiveScreen = 0;
    prevSel = romSel;
    romSel = 0;
    if (ButtonTouched == 3) flushTouch();
  }
  if (kUpdate[8] == 222 || (ButtonTouched == 4 && ButtonTouched != lastButtonTouched)) {
    kUpdate[2] = 255; kUpdate[3] = 255; kUpdate[4] = 255; kUpdate[5] = 255; kUpdate[6] = 255; kUpdate[7] = 255; kUpdate[8] = 255; kUpdate[9] = 255;
    //lastkeydown = 222;
    ActiveScreen = 0;
    resetScreen();
    ResetZ80(&state);
    specfile.close();
    if (romnum > 0) {
    }
    kbfile = "";
    breakOut = 1;
  }
  initialR = 0;
  lastButtonTouched = ButtonTouched;
}

void cassScreen() {
  if (initial) {
    drawFrame();
    printString(2, 0, " TAPE Select - list of *.tap files ", 6, 0, 0);
    kUpdate[8] = 255;
#ifdef ESP32
    if (loadSDdirInitial) {
      File root = SD.open("/");
      File file = root.openNextFile();
      filnum = 0;
      while (file) {
        tfile = file.name();
        if (tfile.indexOf(".TAP") > -1 || tfile.indexOf(".tap") > -1) {
          files[filnum] = tfile;
          filnum ++;
        }
        file = root.openNextFile();
      }
      root.close();
      file.close();
      getCFG();
      loadSDdirInitial = 0;
      if (cassSel < 0) cassSel = 0;
      if (cassSel > filnum) cassSel = filnum;
    }
#else
    if (loadSDdirInitial) {
      pinMode(16, INPUT);
      yield();
      File dir = SD.open("/");
      File Entry;
      filnum = 0;
      while (true) {
        Entry = dir.openNextFile();
        if (!(Entry)) {
          break;
        }
        tfile = Entry.name();
        if (tfile.indexOf(".TAP") > -1 || tfile.indexOf(".tap") > -1) {
          files[filnum] = tfile;
          filnum ++;
        }
        Entry.close();
        yield();
      }
      dir.close();
      pinMode(16, OUTPUT);
      getCFG();
      if (cassSel < 0) cassSel = 0;
      if (cassSel > filnum) cassSel = filnum;
      loadSDdirInitial = 0;
    }
#endif
    yield();
    if (filnum < 21) {
      strtl = 0;
    } else {
      strtl = cassSel;
    }
    printFileName(cassSel, 1, ZX_EMU_TAPE);
    kbfile = "";
  }
#ifdef ESP8266
  ButtonTouched = getButtonTouched();
#endif
  if (kUpdate[6] == 215 || (ButtonTouched == 2 && ButtonTouched != lastButtonTouched)) {
    cassSel --;
    kUpdate[6] = 255;
    if (cassSel < 0) cassSel = 0;
    if (cassSel != oldcassSel) {
      printFileName(cassSel, 1, ZX_EMU_TAPE);
      oldcassSel = cassSel;
    }
  } else if (kUpdate[6] == 207 || (ButtonTouched == 1 && ButtonTouched != lastButtonTouched)) {
    cassSel ++;
    kUpdate[6] = 255;
    if (cassSel > filnum - 1) cassSel = filnum - 1;
    if (cassSel != oldcassSel) {
      printFileName(cassSel, 1, ZX_EMU_TAPE);
      oldcassSel = cassSel;
    }
  } else {
    if (ButtonTouched == 2 || ButtonTouched == 1) {
      keyrepeat ++;
    } else {
      keyrepeat = 0;
    }
  }
  if (kUpdate[2] == 219 || (ButtonTouched == 3 && ButtonTouched != lastButtonTouched)) {
    kUpdate[2] = 255;
    yield();
    if (ButtonTouched == 3) flushTouch();
    updateCFG();
    resetScreen();
    ActiveScreen = 0;
    ButtonTouched = 0;
    if (exitload == 1) {
      ResetZ80(&state);
      gfx.Cls(pal2[7]);
    }
    exitload = 0;
  }
  if (kUpdate[8] == 222 || (ButtonTouched == 4 && ButtonTouched != lastButtonTouched)) {
    kUpdate[2] = 255; kUpdate[3] = 255; kUpdate[4] = 255; kUpdate[5] = 255; kUpdate[6] = 255; kUpdate[7] = 255; kUpdate[8] = 255; kUpdate[9] = 255;
    ActiveScreen = 0;
    resetScreen();
    specfile.close();
    if (filnum > 0) {
      updateCFG();
#ifdef ESP8266
      kbfile = files[cassSel];
#else
      kbfile = "/" + files[cassSel];
#endif
      if (SD.exists(kbfile)) specfile = SD.open(kbfile, FILE_READ);
    }
    kbfile = "";
    breakOut = 1;
  }
  initial = 0;
  lastButtonTouched = ButtonTouched;
}

void printFileName(byte sel, byte sd, byte ftype) {
  int n, c, fcount, tlength, filcount, rname, rnpos;
  char getchr, endrom;
  if (ftype == ZX_EMU_TAPE) {
    filcount = filnum;
  } else {
    filcount = romnum;
    rname = 0;
    endrom = 0;
  }
  c = sel;
  if (filcount > 20) fcount = 20;
  sposf = c;
  if (sposf > (strtl + 19)) strtl++;
  if (sposf < strtl) strtl--;
  endl = strtl + 20;
  if (endl > filcount) {
    endl = filcount;
  }
  for (n = 0; n < fcount; n ++) {
    if (ftype == ZX_EMU_TAPE) {
      tfile = files[strtl + n];
      tlength = tfile.length();
      if (tlength > 32) {
        byte strs;
        tfile = "";
        for (strs = 0; strs < 32; strs ++) {
          tfile = tfile + files[strtl + n].charAt(strs);
        }
        tlength = 32;
      }
    } else {
      tfile = "";
      tlength = 0;
      if (endrom == 0) {
        while (1) {
          getchr = pgm_read_byte_near(ROMcartridges + rname);
          rname++;
          tlength ++;
          if (getchr != 0) tfile = tfile + (char)getchr;
          if (getchr == 0) {
            tlength -= 1;
            break;
          }
        }
        if (pgm_read_byte_near(ROMcartridges + rname + 1) == 255) {
          endrom = 1;
          tfile = "";
          tlength = 0;
        }
      }
    }
    if (tlength < 32) gfx.RectangleFilled((tlength + 4) << 3 , (2 + n) << 3, 289, ((2 + n) << 3) + 7, BLACK);
    if (strtl + n < filcount) {
      if (c == (strtl + n)) {
        tfile = ">" + tfile + "<";
        printString(2, 2 + n, tfile, 7, 0, 0);
      } else {
        tfile = " " + tfile + " ";
        printString(2, 2 + n, tfile, 6, 0, 0);
      }
    }
  }
  lastc = c;
}

void resetScreen() {
  int n;
  border(bordcol);
  for (n = 0; n < 6144; n++) {
    SCREENCACHE[n] = ~(SCREENCACHE[n]);
  }
  //ActiveScreen = 0;
  border(bordcol);
}

void printString(int x, int y, String cstr, int fcol, int bcol, byte slcted) {
  int s;
  for (s = 0; s < cstr.length(); s++) {
    if (slcted) {
      drawa64Char2(((x + s) << 3), (y << 3), cstr.charAt(s), pal1[bcol], pal1[fcol], 1);
    } else {
      drawa64Char2(((x + s) << 3), (y << 3), cstr.charAt(s), pal1[fcol], pal1[bcol], 1);
    }
  }
#ifdef ESP8266
  yield();
#endif
}
