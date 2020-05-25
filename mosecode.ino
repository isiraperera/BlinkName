int led = D7;
int longBlink = 800; //for a bar 
int shortBlink = 200; // for a dot 
void setup() {
    pinMode(led, OUTPUT);

}

void loop() {
    //Letter I 
    blinkDot();
    blinkDot();
    delay(1500);
    
    //Letter S
    blinkDot();
    blinkDot();
    blinkDot();
    delay(1500);
    
    //Letter I 
    blinkDot();
    blinkDot();
    delay(1500);
    
    //Letter R
    blinkDot();
    blinkBar();
    blinkDot();
    delay(1500);
    
    //Letter A
    blinkDot();
    blinkBar();
    
    delay(5000);//To show the end of the first name.

}

void blinkBar(){
    digitalWrite(led,HIGH);//BAR
    delay(shortBlink);
    digitalWrite(led,LOW);
    delay(100);
}

void blinkDot(){
    digitalWrite(led,HIGH);//DOT
    delay(shortBlink);
    digitalWrite(led,LOW);
    delay(100);
}