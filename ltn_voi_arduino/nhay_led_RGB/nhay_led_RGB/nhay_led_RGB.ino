int den_do = 9;
int den_xanh_lam = 10;
int den_xanh_luc = 11;
void setup() {
  pinMode(den_do, OUTPUT); 
  pinMode(den_xanh_lam, OUTPUT); 
  pinMode(den_xanh_luc, OUTPUT); 
}


void loop() {
  analogWrite(den_do, 255);
  analogWrite(den_xanh_lam, 0);
  analogWrite(den_xanh_luc, 0);
  
  delay(500);   
  analogWrite(den_do, 0);
  analogWrite(den_xanh_lam, 255);
  analogWrite(den_xanh_luc, 0);

  delay(500); 
  analogWrite(den_do, 0);
  analogWrite(den_xanh_lam, 0);
  analogWrite(den_xanh_luc, 255)                   ;
  delay(500);
}
