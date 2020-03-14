String readString;

void setup() {
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
    jbr=a.substring(0,1);
    jbg=a.substring(1,2);
    jbb=a.substring(2,3);
    jsr=a.substring(3,4);
    jsg=a.substring(4,5);
    jsb=a.substring(5,6);
    jkr=a.substring(6,7);
    jkg=a.substring(7,8);    
    readString="";
  }
}
