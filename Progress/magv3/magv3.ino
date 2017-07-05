#include <SparkFun_MAG3110.h>

MAG3110 mag = MAG3110(); //Instantiate MAG3110

void setup() {
  Serial.begin(9600);

  mag.initialize(); //Initializes the mag sensor
  mag.start();      //Puts the sensor in active mode
}

void loop() {

  Serial.println(mag.error);
  int x, y, z;
  //Only read data when it's ready
  
  if(mag.dataReady()) {
    //Read the data
    mag.readMag(&x, &y, &z);

    Serial.print("X: ");
    Serial.print(x);
    Serial.print(", Y: ");
    Serial.print(y);
    Serial.print(", Z: ");
    Serial.println(z);

    Serial.println("--------");
  }
  
  delay(2000);
}
