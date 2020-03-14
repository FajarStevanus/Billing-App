int pin[] = {2, 3, 4, 5, 6, 7, 8, 9};
String readString;

void setup() {
  for (int i=0; i<8; i++) {
  pinMode(pin[i],OUTPUT);
    }
  
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    delay(2);  //delay to allow byte to arrive in input buffer
    char c = Serial.read();
    readString += c;
  }

  if (readString.length() >0) {
    String a = readString;
    int jml=a.length();
    for (int i=0; i<8; i++) {
      char c=a[i];
      if(a[i]=='1'){
        digitalWrite(pin[i], HIGH);
      }
      else{
        digitalWrite(pin[i], LOW);
      }
      
    }
   
    readString="";
  }
}
