// ------------
// Morse Code My Name
// ------------

int led = D7;

void setup() {

    pinMode(led, OUTPUT);

}

void dot() {
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
    delay(100);
}

void dash() {
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led,  LOW);
    delay(100);
}

void loop() {
    //E
    dot();
    delay(300);
    
    //T
    dash();
    delay(300);
    
    //H 
    dot();
    dot();
    dot();
    dot();
    delay(300);
    
    //A
    dot();
    dash();
    delay(300);
    
    //N
    dash();
    dot();
    delay(300);
    
    //Space
    delay(600);
    
    //H
    dot();
    dot();
    dot();
    dot();
    delay(300);
    
    //O
    dash();
    dash();
    dash();
    delay(300);
    
    //L
    dot();
    dash();
    dot();
    dash();
    delay(300);
    
    //L
    dot();
    dash();
    dot();
    dash();
    delay(300);
    
    //E
    dot();
    delay(300);
    
    //Y
    dash();
    dot();
    dash();
    dash();
    
    delay(2000);
}





