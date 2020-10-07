int red_led = 11;
int green_led = 13;
int yellow_led =12;

int right_button = 2;
int left_button = 3;

bool right_button_state;
bool left_button_state;

bool red_led_state;

void setup() {
  
 pinMode(red_led, OUTPUT);
 pinMode(left_button, INPUT_PULLUP);

}

void loop() {

 left_button_state = digitalRead(left_button);

  if (left_button_state == LOW){
    digitalWrite(red_led, HIGH);   
    delay(1000);                       
    digitalWrite(red_led, LOW);    
    delay(1000);     
  }
  
 //digitalWrite(red_led, !left_button_state);

}