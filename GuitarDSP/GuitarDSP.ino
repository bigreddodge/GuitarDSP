/** Teensy 3.2 / SGTL5000 Effect Processor
 *  By: Imran Uddin
 *  Note: Mono (L) Passthrough Skeleton Sketch
 */ 

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

AudioInputI2S            i2s_IN;       //xy=62,80
AudioOutputI2S           i2s_OUT;      //xy=1330,87
AudioControlSGTL5000     sgtl5000;     //xy=70,20

// This sketch is a skeleton which contains a mono (L) passthrough audio connection.
AudioConnection          patchCord1(i2s_IN, 0, i2s_OUT, 0);

void setup() {
  AudioMemory(4);
  sgtl5000.enable();
  sgtl5000.inputSelect(AUDIO_INPUT_LINEIN);
  sgtl5000.volume(1);
}

void loop() {
  
}
