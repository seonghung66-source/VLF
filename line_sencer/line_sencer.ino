void setup() 
{
  // put your setup code here, to run once:
Serial.begin(115200);
while(!Serial)
{
}
Serial.println("Success to open Serial0");
Serial.flush(); //통신이 완료 될 때 까지 기다린다.

pinmode(13, output);

}


void loop() {
  // put your main code here, to run repeatedly:
digitalwrtie(13, HIGH);
Serial.println("'Turn on Light");
Serial.flush(); //통신이 완료될 떄 까지 기다린다.
delay(1000); // 1000msec 1초

digitalwrtie(13, LOW);
Serial.println("Turn off Light");
Serial.flush(); //통신이 완료될 떄 까지 기다린다.
delay(1000); // 1000msec 1초
}
