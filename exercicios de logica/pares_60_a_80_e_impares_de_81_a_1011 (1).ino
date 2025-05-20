// C++ code
//
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  for(int numero= 60; numero <= 101; numero ++){
  
    
    if(numero % 2 == 0 && numero <= 80){
    Serial.println(numero);
    delay(1000);
    
    } 
    
    else if(numero %2 == 1 && numero <= 101 && numero > 80) {
     Serial.println(numero);
    delay(1000);
    } else {}
  }
    
   
}