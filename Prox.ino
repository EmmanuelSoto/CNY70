
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 9, 11, 5, 4, 3, 2);
void setup() {
lcd.begin(16,4);
pinMode (A0,INPUT);
Serial.begin(9600);

}
float V=0;
float Van=0;
float Prox=0;

void loop() {
delay (1000);
 V=analogRead(A0);
 Van=V*5/1023;
 Prox=(((0.5355)- (sqrt(pow(-0.5355,2)-(4*0.0147*(3.9067-Van)))))/(2*0.0147));
    
lcd.setCursor(2,0);
lcd.print("Sensor CNV-70");
lcd.setCursor(0,1);
lcd.print("Distance: ");
lcd.print(Prox);
lcd.print("mm");
 lcd.setCursor(0,2);
lcd.print("Volt.: ");
lcd.print(Van);
lcd.print("V");
}
