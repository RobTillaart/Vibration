//
//    FILE: Vibration_zeroCount.ino
//  AUTHOR: Rob Tillaart
// PURPOSE: demo
//     URL: https://github.com/RobTillaart/Vibration


#include "Vibration.h"

VibrationSensor VBS(A0);

void setup()
{
  Serial.begin(115200);
  Serial.println();
  Serial.print(__FILE__);
  Serial.print("VIBRATION_LIB_VERSION: ");
  Serial.println(VIBRATION_LIB_VERSION);
  Serial.println();
}


void loop()
{
  //  measure for one second
  VBS.measure(1000);
  //  percentage with one decimal
  Serial.print("Samples: \t");
  Serial.print(VBS.sampleCount());
  Serial.print("\t zero: \t");
  Serial.print(VBS.zeroCount(), 1);
  Serial.print(" %");
  Serial.println();
}


//  -- END OF FILE --
