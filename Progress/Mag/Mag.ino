#include <SparkFun_MAG3110.h>

MAG3110 mag = MAG3110(); //Instantiate MAG3110


void setup() {
  Serial.begin(9600);

  mag.initialize(); //Initializes the mag sensor
  mag.start();      //Puts the sensor in active mode
  
}

void loop() {

  int x;
  int y;
  int z;
  
  
  //Only read data when it's ready  
  if(mag.dataReady()) {
    
    mag.readMag(&x, &y, &z); //reading in the data
    
    Serial.print("X: ");
    Serial.println(x);
    Serial.print("Y: ");
    Serial.println(y);
    Serial.print("Z: ");
    Serial.println(z);
  
    Serial.println("--------");
  }

}
