#include <math.h>  
#include "Wire.h"  
#include "WiiChuck.h"  
#define MAXANGLE 90  
#define MINANGLE -90  
    
WiiChuck chuck = WiiChuck();  
int angleStart, currentAngle;  
int tillerStart = 0;  
double angle;  
    
void setup() {  
Serial.begin(115200);  
chuck.begin();  
chuck.update();  
}  
    
void loop() {  
    
delay(20); // Esse delay é extremamente necessário para que o codigo funcione corretamente, não remova-o  
    
chuck.update(); //Atualiza os pontos no do controle  
    
//aqui estamos verificando se o analogico está sendo realizado e escrevendo na serial  
    
if(((int)chuck.readJoyX()) > 90)      
{  
  Serial.print("d");  
}  
    
if(((int)chuck.readJoyX()) < -90)  
{  
  Serial.print("a");  
}  
    
if(((int)chuck.readJoyY()) > 90)  
{  
	Serial.print("w");  
}  
    
if(((int)chuck.readJoyY()) < -90)  
{  
	Serial.print("s");  
}  
Serial.println();  
}  
