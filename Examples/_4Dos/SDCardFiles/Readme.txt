4Dos 1.0 - Pre release version

4Dos is an operating system and BASIC intepreter for Use with the 4D gen4 IoD range.


As this is a pre release version it is provided for use 'as is'.It does not as yet,
include string handling, or arrays and is limited to a thousand lines of BASIC code
(line numbers 1 to 1000). 

4Dos is installed using the Arduino IDE.

4Dos can be used with the on-screen keypad, or serial using Serial monitor or other 
serial terminal program and by using telnet via an android device. The telnet port is
set at 9965 and can be changed prior to installation. The default baud rate is set at
115200 and can be changed when logging on via serial using the command 'SERIAL 115200'.
If using Putty, the command 'SERIAL 115200,T" should be used to turn off duplication 
of typed in commands.

4Dos will allow multi-tasking, by responding to serial commands, telnet commands or 
UDP commands whilst running a BASIC program.

4Dos has it's own program memory and variable stack allocated at boot. Memory can be
checked by using the FREE command.

All Basic programs are created on the IoD by using any of the above methods and stored
on the SD card using 'SAVE filename.BAS' and loaded into memory using 'LOAD filename.BAS'
and 'RUN' to execute the program. All SD card functions are supported 'COPY', 'RENAmE',
'DELETE', 'MKDIR', 'RMDIR', 'DIR', 'CD'.

Loaded programs can be viewed using the 'LIST' command and can list from a line number
using 'LIST number' eg 'LIST 100' or from a line number to a line number using
'LIST number number' eg 'LIst 100 130'.

4Dos can connect to a WiFi access point or can be configured to be an access point by 
using commands 'WIFIMODE','WIFICONNECT','APNAME','PASSWORD'. In addition, once 
configured for WiFi, can be saved using 'SAVE PREFS' so the IoD will start in that
configuration. 'SAVE.PREFS' creates 'PREFS.4DS', which is a script file that can be 
edited and have any 4DOS command added, to customize 4Dos fully. Additionally a created
BASIC program can be saved as 'BOOT.BAS' to enable 4Dos to boot directly to that program.

As a WiFi connected device the IoD can download a file directly to the SD card or display
images from a web address. It can also communicate and control another IoD running 4Dos.
The IoD could also be controlled remotely using simple UDP commands and has built in
functions to allow communcation with a popular Flight simulator.

As 4Dos is a BASIC interpreter, and interprets every line before calling a function it 
will run a little slower than a similar application created with 4D workshop or the 
Arduino IDE. As the BASIC interpreter runs the same functions user's will find it quite
easy to convert from an apllication written in Workshop 4 to BASIC. The graphics files
created in Workshop 4 can be used within 4Dos and opened with the command 'OPEN4DGFX'.

The only differences in this version of BASIC are the custom commands to perfom fast
graphics functions, and custom WiFi commands, the use of 'PRINT' and 'PRINTLN' instead
of 'PRINT "Text";' and 'PRINT "Text"'. Also 'IF', 'THEN' has been replaced with 'IF',
'ELSE', 'ENDIF'. To print text at a different location the 'MOVETO' command needs to be
called.

There are many more features and fixes to be added to 4Dos and as such it may contain
some bugs (hopefully not to many).

There are some .BAS files included with this release, some which have been converted 
line for line from a Workshop 4 created application. 





4Dos Commands and functions


PINMODE n,MODE			Set the operating mode for digital port .  
				Usage : PINMODE gpioNo,INPUT/OUTPUT

DIGITALWRITE n,STATE		Write to digital port.
				Usage : DIGITALWRITE gpioNo,HIGH/LOW
		
PANEL x,y,w,h,color		Draw a raised panel.
				Usage PANEL x,y,width,height,color

PANELRECESSED x,y,w,h,color	As above but draw as recessed

USERIMAGESDR n,f,x,y,w,h	Draw segment rectangle of Userimage.
				Usage:USERIMAGESDR no,frame,xoffset,yoffset,width,height

IP				Returns the current IP Address

OPEN4DGFX filename		Opens previously created 4D GCI and DAT file
				Usage : OPEN4DGFX filename without extension
				Example : OPEN4DGFX coolgage

DELETEBUTTON n			Delete a previously created Button.
				Usage : DELETEBUTTON ButtonNo

PALETTE n,color			Change the color in the 24 colour palette.
				Usage : PALETTE colorno,16bitcolorvalue.
				Example PALETTE 3,65535  (changes color 3 to white)

FOR n = a TO b			For Next loop.
				Usage : FOR count = start TO finish
				Example : FOR N = 1 TO 10

LINE x,y,x1,y1,color		Draw a line.
				Usage : LINE startX,starty,endX,endY,color
				Example : LINE 10,10,100,100,3
		
CIRCLEFILLED x,y,r,color	Draw a filled circle.
				Usage : CIRCLEFILLED centreX,centreY,radius,color
				Example : CIRCLEFILLED 100,100,80,3

CIRCLE x,y,r,color		As above but drawn as outline and not filled.

RECTANGLEFILLED x,y,x1,y1,c	Draw a filled rectangle.
				Usage : RECTANGLEFILLED leftX,leftY,rightX,rightY,color
				Example : RECTANGLEFILLED 10,10,100,100,3
		
RECTANGLE x,y,x1,y1,c		As above but drawn as outline and not filled.

TRIANGLEFILLED x,y,x,y,x,y,c	Draw a filled triangle.
				Usage : TRIANGLEFILLED x1,y1,x2,y2,x3,y3,color

TRIANGLE x,y,x,y,x,y,c		As above but drawn as outline and not filled.

LET n = number			Initialise variable with value. variables are floating
 				point. variable names can be 1 or 2 characters long.
				Usage LET var = number.
				Example : LET AB = 100 or LET AB = AB + 1 or LET AB = BC

IF a = b			Check for logic answer.
				Usage : IF condition1 = condition2
				Example : IF AB = 10 
					  IF AB > 10
					  IF AB > 1 AND AB < 10
					  IF AB >= 10 OR BC >= 10
					  IF IF AB <> 10
					  IF EXISTS prog.BAS -- checks if file exists
					  IF WIFI -- if IoD is connected to WiFi

ENDIF				End IF logic check.
				Usage : ENDIF

ELSE				Do an action on False answer from IF logic check.
				Example : 10 INPUT "Enter Number : ",N
					  20 IF N < 50
					  30 PRINTLN "Number is less than 50"
					  40 ELSE
					  50 PRINTLN "Number is greater than 50"
					  60 ENDIF

NEXT n				End of For Next loop.
				Usage : NEXT n
				Example : 10 FOR N = 1 TO 10
					  20 PRINTLN N
					  30 NEXT N

BUTTON n,x,y,w,h,c,txt,f,c	Initialise an on screen button.
				Usage : BUTTON x,y,width,height,color,text,font,textcolor
				Example : BUTTON 10,10,50,30,3,START,1,0

SCROLL n			Scroll the screen in portrait mode by n pixels.
				Usage : SCROLL 10

GOTO n				Goto a line number.
				Usage : GOTO n
				Example : 10 PRINT "Hello World .. "
					  20 GOTO 10

LIST				List the program loaded in memory.
				Usage : LIST or LIST n or LIST n n
				Example : LIST
					  LIST 100 -- displays lines from 100 onwards
					  LIST 100 200 -- displays lines from 100 to 200

HELP				Displays a list of keywords and functions.
				Usage : HELP

DIR				Displays the contents of SD card if installed.
				Usage : DIR

FREE				Displays the status of the IoD's memory'
				Usage : FREE

WIFIDISCONNECT			Disconnects the current WiFi connection if connected.
				Usage : WIFIDISCONNECT

CLS				Clears the screen and moves the drawing pointer to 0,0
				Usage : CLS

DELETE fname			Delete a file on the SD card.
				Usage : DELETE fname
				Example : DELETE myfile.BAS

SERIALTX text			Prints a string without spaces to the IoD serial port.
				Usage : SERIALTX text
				Example : SERIALTX testing123
 
RESET				Perfom a software reset to IoD device.
				Usage : RESET

SERIALMODE option		Sets the Serial port TX mode. MONITOR for connecting to
 				serial monitor or terminal. DEVICE to talk to serial
 				device using SERIALTX. Default is MONITOR.
				Usage : SERIALMODE option
				Example : SERIALMODE MONITOR or SERIALMODE DEVICE

PRINT n / PRINT text		Print variable or text to output device at the current
 				cursor position.
				Usage : PRINT n or PRINT text
				Example : PRINT AB or PRINT 10 or PRINT "Hello World .."

PRINTLN n / PRINTLN text	As above but followed by a new line.

SERIAL baud			Connect to serial device or terminal at the baudrate
 				specified by baud. Optional T to connect to putty
 				terminal.
				Usage : SERIAL 115200 or SERIAL 115200,T

DEL fname			See DELETE.

FONT n				Change current font 1 or 2
				Usage : FONT 1 or FONT 2

YIELD				Provide a yield to allow ESP8266 to carry out other task's
				Usage : YIELD

MOVETO x,y			Move graphics cursor to new x,y co-ordinate.
				Usage : MOVETO x,y
				Example : MOVETO 10,20

PRINTIMAGE fname		Print a GCI format image at the current graphics cursor
 				position stored on the SD card.
				Usage : PRINTIMAGE fname
				Example : PRINTIMAGE image.GCI

PRINTIMAGEWIFI addr		Print a GCI format image at the current graphics cursor
 				position from a Web address.
				Usage : PRINTIMAGEWIFI webaddress

USERIMAGES n,n			Display a user image widget created in 4D WS4 and opened
 				with OPEN4DGFX.
				Usage : USERIMAGES n,n
				Example : USERIMAGES 1, 12

USERIMAGE n			Display a user image created in 4D WS4 and opened with
 				OPEN4DGFX.
				Usage : USERIMAGE n
				Example : USERIMAGE 2

GFX option			Turn on or off the on screen keypad and textwindow to
 				allow for full screen graphics. GFX ON turns off the
 				keypad and text window. GFX OFF restores keypad and
 				textwindow.
				Usage : GFX ON or GFX OFF

SAVE fname			Save the current program in memory to SD card
				Usage : SAVE fname
				Example : SAVE program.BAS

DELAY millis			Delay program execution by millis milliseconds. Other
 				serial or Telnet commincation can still operate whilst
 				main program is being delayed.
				Usage : DELAY millis
				Example : 100 DELAY 2000 -- 2 seconds

COLOR n				Change the text color.
				Usage : COLOR n
				Example : COLOR 3

ORIENTATION n			Change between landscape and portrait modes.
				Usage : ORIENTATION n
				Example : ORIENTATION 0 -- Landscape
					  ORIENTATION 1 -- Landscape reversed
					  ORIENTATION 2 -- Portrait (scrollable)
					  ORIENTATION 3 -- portrait reversed (scrollable)

CD directory			Change SD card directory,
				Usage : CD directory
				Example : CD Data/test

NEW				Delete current program from memory.
				Usage : NEW

MKDIR directory			Create a directory on the SD card.
				Usage : MKDIR directory
				Example : MKDIR /Data

RMDIR directory			Remove directory on the SD card.
				Usage : RMDIR directory
				Example RMDIR /Data

RUN				Execute program in memory.
				Usage : RUN

TYPE fname			Type the contents of text file stored on SD card on the
 				output screen device.
				Usage : TYPE filename

LOAD fname			Load program file to memory.
				Usage : LOAD filename
				Example LOAD Testprog.BAS

WIFISCAN			Displays a list of available WiFi access points on the
 				current output screen.
				Usage : WIFISCAN

WIFICONNECT ssid password	Connect to available WiFi access point.
				Usage : WIFICONNECT ssid password

RENAME fname fname		Rename file on SD card.
				Usage : RENAME fname fname
				Example : RENAME Data.BAS Newdata.BAS

COPY fname directory/fname	Copy file from a location on SD card to new location or
				new name.
				Usage : COPY filename directory/filename
				Example : COPY Data.BAS Data/Newdata.BAS

DOWNLOAD webaddr fname		Download file to SD card from Local server or from Web
 				Address.
				Usage : DOWNLOAD localaddr port fname fname
				Usage : DOWNLOAD webaddr fname
				Example : DOWNLOAD http://127.0.0.1 80 prg.BAS prg.BAS
	
DATA				Not yet supported.

RUNSTOP				Stop a running program from a Serial or Telnet connect
 				device.
				Usage : RUNSTOP

END				Stop program execution from within a program
				Usage : END
				Example : 100 END

RESUME				Resume running a program that was previously stopped
 				with RUNSTOP.
				Usage : RESUME

TELNETTX "text"			Send a text string over a connected telnet session.
				Usage : TELNETTX "text"
				Example : TENETTX "Hello World .. "

UDP				Sets or returns the UDP port.
				Usage : UDP or UDP port
				Example : UDP
					  UDP 9940

POINT x,y,color			Draws a single pixel to the screen.
				Usage : POINT x,y,color
				Example : 10 GFX ON
					  20 POINT 100,100,3

GOSUB n				Goto to a Subroutine at line number n
				Usage : GOSUB n
				Example : GOSUB 100

RETURN				Return from a previously called GOSUB subroutine.
				Usage : RETURN

TELNETMODE option		Change Telnet operating Mode. MONITOR (default) for
 				external telnet device connecting to IoD. COMMAND mode
 				to connect to other telnet device.
				Usage : TELNETMODE MONITOR
					TELNETMODE COMMAND or TELNETMODE CMD

TELNETCONNECT addr port		Log into other telnet device.
				Usage : TELNETCONNECT address port

UDPTX "text"			Send command or text over UDP to target specified by
 				UDPTARGET.
				Usage : UDPTX "text" or UDPTX variable
				Example : 10 LET X = 10
					  20 LET Y = 10
					  30 UDPTX X
					  40 UDPTX Y
					  50 UDPTX "CIRCLE X,Y,4,3"

UDPTARGET addr port		Specify UDP target for UDP commands or text.
				Usage : UDPTARGET address port
				Example : UDPTARGET 192.168.4.1 9940

INPUT "text",n			Halt Program execution and wait for input from connected
 				serial or telnet terminal or onscreen keypad.
				Usage : INPUT N
					INPUT "text",N
				Example : 10 INPUT N
					  10 INPUT "Enter Number : ",N

AND				See IF.

OR				See IF.

WIFIMODE option			Set WiFi mode. AP mode for Access point. STA for station
 				mode.
				Usage : WIFIMODE option
				Example : WIFIMODE AP
					  WIFIMODE STA

REMOTEIP			Not yet supported.

WIFIPASSWORD password		Set the password for WiFi when in access point mode.
				Usage : WIFIPASSWORD password

APNAME				Set or return the Access point SSID when in Access point
 				mode.
				Usage : APNAME
					APNAME text
				Example : APNAME Gen4IoD1

LEDDIGITS			Used in conjuction with WS4

UDPCLONE 			Not yet supported.

IMAGETOUCHENABLE n		Enable touch support on Userimages
				Usage : IMAGETOUCHENABLE n
				Example : IMAGETOUCHENABLE 2

SIMSEND n,f,f,f,f,f,f,f,f	Flight Simulator commands.
				Usage : SIMSEND datatype,dat,dat,dat,dat,dat,dat,dat,dat
				
RND				Returns a random number in the given range
				Usage : r = RND(n)
				Example : LET R = RND(100)

SIN				Returns the sine of the value in radians.
				Usage : s = SIN(n)
				Example : LET S = SIN(1)

COS				Returns the cosine of the value in radians.
				Usage : c = COS(n)
				Example : LET C = COS(1)

TAN				Returns the tangent of the value in radians.
				Usage : t = TAN(n)
				Example : LET T = TAN(1)

DIGITALREAD			Returns the state of the specified digital port.
				Usage : i = DIGITALREAD(gpioNo)
				Example : LET I = DIGITALREAD(16)

ANALOGREAD			Returns the state of the specified analog port if exists
				Usage : a = ANALOGREAD(15)

ORIENTATION			Returns the current screen Orientation.
				Usage : o = ORIENTATION

TOUCHX				Performs a touch update and returns the x axix value.
				Usage : x = TOUCHX
				Example : LET X = TOUCHX

TOUCHY				Performs a touch update and returns the y axis value.
				Usage : y = TOUCHY

TOUCHP				Performs a touch update and returns the Pen status value.
				Usage : p = TOUCHP

TEMPERATURE			Not yet supported.

UDPRX				Not yet yupported.

TOUCHD				Not yet fully supported.

TOUCHED				Returns the number of the image touched after a TOUCHX,
 				TOUCHY or TOUCHP has been called. Returns 255 if no
 				image has been touched.
				Usage : i = TOUCHED
				Example : 10 OPEN4DGFX Sliders
					  20 IMAGETOUCHENABLE 2
					  25 USERIMAGES 2,0
					  30 LET X = TOUCHX
					  40 LET I = TOUCHED

UDPPACKET			Not yet supported.

SIMDATA				Returns the Flight simulator value specified by n
				Usage : fs = SIMDATA(n)

SIMTYPE				Returns the Datatype received from flight simulator.
				Usage : st = SIMTYPE

INT				Converts a float value to an integer
				Usage : i = INT(float)
				Example : LET I = INT(12.26)

CHECKBUTTONS			Returns the button number, if pressed, of previously
 				initialised Button.
				Usage : b = CHECKBUTTONS
				Example : LET B = CHECKBYTTONS

PULSEIN				Returns the pulse time from the specified digital port.
				Usage : p = PULSEIN(gpioNo)
				Example : LET P = PULSEIN(16)
