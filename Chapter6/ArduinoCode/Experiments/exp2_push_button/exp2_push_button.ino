/**
* The MIT License (MIT)

* Copyright (c) 2016 Onur Dundar
* onur.dundar1@gmail.com

* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:

* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.

* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
**/

// define pin numbers to use in code easily
int outputPin = 12;
int inputPin = 8;

// the setup function runs once when you press reset or power the board 
void setup() { 
  // initialize digital pin 12 as an output. 
  pinMode(outputPin, OUTPUT); 
  pinMode(inputPin, INPUT);
  digitalWrite(outputPin, HIGH);
  Serial.begin(9600);
}
 
// the loop function runs over and over again forever 
void loop() { 
  //read digital value
  int val = digitalRead(inputPin);

  //print when button pressed
  if(val == HIGH)
  {
    Serial.println("Push Button Pressed");
  }
}
