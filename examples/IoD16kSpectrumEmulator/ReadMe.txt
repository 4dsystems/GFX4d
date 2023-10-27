16k ZX Spectrum Emulator for IoD.

A simple emulator for the the gen4-IoD range of displays using GFX4d. The IoD remains connected to the PC and uses the PC keyboard to input using the supplied app.

Cartridge ROMs can be added into flash by following the commented out method at the top of the sketch. HXD is a good tool to create a .h file from a binary.

.TAP files can be simply copied to the uSD card.

In the Extra folder there is a utility to give keyboard control from a PC which communicates keyboard matrix commands to the IoD via the UPA. Simply double click Setup to install the Emulator Keyboard App.

F1 key launches the ROM menu, F2 launches the .TAP menu. Use the Comms tab to set up the Port of the IoD and then click on Connect.

The .TAP menu can also be launched by typing LOAD "" into the emulator followed by ENTER.

Select the .TAP file with the on-screen UP & DOWN buttons on the IoD display or on the PC keyboard 6 & 7 or cursor keys followed by Enter and the .TAP file will start to load. 

Only .TAP files for the 16k Spectrum will function correctly. JETPAC and PHEENIX play very well on the emulator.

Saving to .TAP is also supported.

Beep tones are sent to GPIO16 of the IoD and a small amplifier / speaker is all that is needed if sound is required.

The IoD will make a good basis for a handheld ZX Spectrum project or other emulated machines

  