/*

This is a simple serial console that allows you to control pin states and communicate easily with the Arduino
through Termite-3.2. Circuit: Arduino UNO R3, USB-A male to USB-B male cable, computer with PuTTY. Use the help command
for commands that you can send to the Arduino. The built in controllable LED will flash to communicate current
system status. If the LED is off, then the Arduino will not respond to keystrokes. If it is on, it will respond.
LED codes:
OFF=System is processing and is not responding to keystrokes.
BLINKING=A fatal error occured and the Arduino must be restarted to continue use.
ON=System is running fine and is responding to keystrokes.

*/
int ledPin=13;
String note="";
void setup() {
  // initialize pins here:
  pinMode(ledPin, OUTPUT);
  // turn off status LED.
  digitalWrite(ledPin, LOW);
  // set baud rate here.
  Serial.begin(9600);
  // tell user that Arduino is initializing.
  Serial.println("Initializing serial operating system, please wait...");
  // place initializing code here, such as a clock synchronization system, switch detection, etc.
  
  // tell user initialization is complete.
  Serial.println("Initialization complete. Serial console will now activate.");
}
// define functions.
void fatal(String error){
  // fatal is a simple command which will essentially freeze the Arduino. Call this command when a fatal error occurs.
  Serial.println("ERROR: "+error+" RESULT: System freeze.");
  while(true){
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}
// setPin is an extremely long command. You may disregard it, or edit it if you have an Arduino with more pins.
void setPin(String x){
  if (x=="0\n"){
    Serial.println("Invalid pin, serial communication only.");
  }
  if (x=="1\n"){
    Serial.println("Invalid pin, serial communication only.");
  }
  if (x=="2\n"){
    Serial.println("Regular digital pin, on or off?");
    digitalWrite(ledPin, HIGH);
    while(not Serial.available()){
      // do nothing.
    }
    String state = Serial.readString();
    digitalWrite(ledPin, LOW);
    pinMode(2, OUTPUT);
    if (state=="on\n"){
      digitalWrite(2, HIGH);
    }
    if (state=="off\n"){
      digitalWrite(2, LOW);
    }
  }
  if (x=="3\n"){
    Serial.println("Regular digital pin, on or off?");
    digitalWrite(ledPin, HIGH);
    while(not Serial.available()){
      // do nothing.
    }
    String state = Serial.readString();
    digitalWrite(ledPin, LOW);
    pinMode(3, OUTPUT);
    if (state=="on\n"){
      digitalWrite(3, HIGH);
    }
    if (state=="off\n"){
      digitalWrite(3, LOW);
    }
  }
  if (x=="4\n"){
    Serial.println("Regular digital pin, on or off?");
    digitalWrite(ledPin, HIGH);
    while(not Serial.available()){
      // do nothing.
    }
    String state = Serial.readString();
    digitalWrite(ledPin, LOW);
    pinMode(4, OUTPUT);
    if (state=="on\n"){
      digitalWrite(4, HIGH);
    }
    if (state=="off\n"){
      digitalWrite(4, LOW);
    }
  }
  if (x=="5\n"){
    Serial.println("Regular digital pin, on or off?");
    digitalWrite(ledPin, HIGH);
    while(not Serial.available()){
      // do nothing.
    }
    String state = Serial.readString();
    digitalWrite(ledPin, LOW);
    pinMode(5, OUTPUT);
    if (state=="on\n"){
      digitalWrite(5, HIGH);
    }
    if (state=="off\n"){
      digitalWrite(5, LOW);
    }
  }
  if (x=="6\n"){
    Serial.println("Regular digital pin, on or off?");
    digitalWrite(ledPin, HIGH);
    while(not Serial.available()){
      // do nothing.
    }
    String state = Serial.readString();
    digitalWrite(ledPin, LOW);
    pinMode(6, OUTPUT);
    if (state=="on\n"){
      digitalWrite(6, HIGH);
    }
    if (state=="off\n"){
      digitalWrite(6, LOW);
    }
  }
  if (x=="7\n"){
    Serial.println("Regular digital pin, on or off?");
    digitalWrite(ledPin, HIGH);
    while(not Serial.available()){
      // do nothing.
    }
    String state = Serial.readString();
    digitalWrite(ledPin, LOW);
    pinMode(7, OUTPUT);
    if (state=="on\n"){
      digitalWrite(7, HIGH);
    }
    if (state=="off\n"){
      digitalWrite(7, LOW);
    }
  }
  if (x=="9\n"){
    Serial.println("Regular digital pin, on or off?");
    digitalWrite(ledPin, HIGH);
    while(not Serial.available()){
      // do nothing.
    }
    String state = Serial.readString();
    digitalWrite(ledPin, LOW);
    pinMode(9, OUTPUT);
    if (state=="on\n"){
      digitalWrite(9, HIGH);
    }
    if (state=="off\n"){
      digitalWrite(9, LOW);
    }
  }
  if (x=="10\n"){
    Serial.println("Regular digital pin, on or off?");
    digitalWrite(ledPin, HIGH);
    while(not Serial.available()){
      // do nothing.
    }
    String state = Serial.readString();
    digitalWrite(ledPin, LOW);
    pinMode(10, OUTPUT);
    if (state=="on\n"){
      digitalWrite(10, HIGH);
    }
    if (state=="off\n"){
      digitalWrite(10, LOW);
    }
  }
  if (x=="11\n"){
    Serial.println("Regular digital pin, on or off?");
    digitalWrite(ledPin, HIGH);
    while(not Serial.available()){
      // do nothing.
    }
    String state = Serial.readString();
    digitalWrite(ledPin, LOW);
    pinMode(11, OUTPUT);
    if (state=="on\n"){
      digitalWrite(11, HIGH);
    }
    if (state=="off\n"){
      digitalWrite(11, LOW);
    }
  }
  if (x=="12\n"){
    Serial.println("Regular digital pin, on or off?");
    digitalWrite(ledPin, HIGH);
    while(not Serial.available()){
      // do nothing.
    }
    String state = Serial.readString();
    digitalWrite(ledPin, LOW);
    pinMode(12, OUTPUT);
    if (state=="on\n"){
      digitalWrite(12, HIGH);
    }
    if (state=="off\n"){
      digitalWrite(12, LOW);
    }
  }
  if (x=="13\n"){
    Serial.println("Invalid pin, built-in basic communication LED.");
  }
}
void loop() {
  // introduce user and display system specifications.
  Serial.println();
  Serial.println("Welcome to Brainstormers Club Serial Console. Here are system specifications:");
  Serial.println("System Flash Memory: 32 KB, .5 KB used by bootloader.");
  Serial.println("System SRAM: 2 KB.");
  Serial.println("System EEPROM: 1 KB.");
  Serial.println("Microprocessor type: ATmega328.");
  Serial.println("Clock speed: 16 MHz.");
  Serial.println("Specification list complete.");
  Serial.println("Type help for a help menu, or exit to freeze the system until reset.");
  Serial.print(">>> ");
  // main processing loop.
  while(true){
    // turn on status LED.
    digitalWrite(ledPin, HIGH);
    // see if any data has been sent to the Arduino.
    if(Serial.available()){
      // read data sent to the Arduino.
      String input = Serial.readString();
      // turn off status LED.
      digitalWrite(ledPin, LOW);
      // if input is exit, run fatal("System exit.")
      if(input=="exit\n"){
        fatal("System exit.");
      }
      // if input is help, display help dialog. (Place commands you implemented in this dialog.)
      if(input=="help\n"){
        Serial.println("Console Help");
        Serial.println("This console is designed for Termite-3.2, please do not use other software.");
        Serial.println("Command list:");
        Serial.println("  help - Shows this help menu.");
        Serial.println("  exit - Freezes the Arduino.");
        Serial.println("  setpin - Sets a pin to a specified state.");
        Serial.println("  takenote - Saves a short length note to the Arduino's chip.");
        Serial.println("  getnote - Retrieves a saved note from the Arduino's chip.");
        Serial.println("  timesincestart - Displays time since sesssion has been started.");
      }
      // if input is setpin, go through the pin setting menu.
      if(input=="timesincestart\n"){
        unsigned long time=millis();
        time=time/1000;
        Serial.println("This session has been running for "+String(time)+" seconds.");
        digitalWrite(ledPin, HIGH);
      }
      if(input=="setpin\n"){
        // diplay prompt to user.
        Serial.print("Type output pin: ");
        // turn on status LED.
        digitalWrite(ledPin, HIGH);
        // wait for input.
        while(not Serial.available()){
          // do nothing.
        }
        // read data sent to the Arduino.
        String pin = Serial.readString();
        // turn off status LED.
        digitalWrite(ledPin, LOW);
        // display grounded pin instructions.
        Serial.println("You can set a pin to off to use it as ground,");
        Serial.println("but this is not recommended. Use at your own risk.");
        // find out type of pin and take action.
        setPin(pin);
      }
      // if input is takenote, save a note from the user.
      if(input=="takenote\n"){
        // display prompt to user.
        Serial.println("Type note:");
        // turn on status LED.
        digitalWrite(ledPin, HIGH);
        // wait for input.
        while(not Serial.available()){
          // do nothing.
        }
        // read data sent to the Arduino.
        note = Serial.readString();
        // display sucess message.
        Serial.println("Note saved sucessfully.");
      }
      // if input is getnote, display note to user.
      if(input=="getnote\n"){
        // display note.
        Serial.println("Here's your note:");
        Serial.println(note);
      }
      // display prompt to user.
      Serial.print(">>> ");
    }
  }
}
