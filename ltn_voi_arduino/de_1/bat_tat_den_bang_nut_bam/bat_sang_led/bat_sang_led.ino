int led = 11;
int trangthai = LOW; 
void setup()                           
{ 
    pinMode(led, OUTPUT); 
    digitalWrite(2, HIGH);    
    attachInterrupt(0, tatled, CHANGE); 
                                                                
} 
void loop()                          
{
    digitalWrite(led, trangthai);  
}
void tatled()                       
{ 
    trangthai = !trangthai;   
}
