// agregar libreria para servos
#include <Servo.h> 

//definimos servomotores
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

//definimos pines analogicos del joystick
int joyX = 0;
int joyY = 1;
int joyXd = 2;
int joyYd = 3;

// variables para leer los valores de los pines analogicos
int joyVal;

void setup()
{
// Pines servo
servo1.attach(3);
servo2.attach(4);
servo3.attach(5);
servo4.attach(6);
}

void loop()
{
// leemos los valores del joystick de 0 a 1023
joyVal = analogRead(joyX);
joyVal = map (joyVal, 0, 1023, 0, 180); // valor del servo de 0 a 180
servo1.write(joyVal); // coloca el servo de acuerdo a la posición del valor del joystick
delay(15);
joyVal = analogRead(joyY);
joyVal = map (joyVal, 0, 1023, 0, 180);
servo2.write(joyVal);
delay(15);
joyVal = analogRead(joyXd);
joyVal = map (joyVal, 0, 1023, 0, 180);
servo3.write(joyVal);
delay(15);
joyVal = analogRead(joyYd);
joyVal = map (joyVal, 0, 1023, 0, 180);
servo4.write(joyVal);
delay(15);
}
