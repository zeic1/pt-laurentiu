// Motor A connections
int enA = 12;
int in1 = 10;
int in2 = 8;
// Motor B connections
int enB = 3;
int in3 = 7;
int in4 = 5;

void setup() {
  // Set all the motor control pins to outputs
  Serial.begin(9600);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  // Turn off motors - Initial state
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void loop() {
  int motorPWMControl = analogRead(A0); // Read potentiometer value
  int steeringControl = analogRead(A2); // Read potentiometer value
  int pwmOutput1 = map(motorPWMControl, 0, 1023, 0 , 255); // Map the potentiometer value from 0 to 255
  int steeringAngle = map(steeringControl, 0, 1023, -128, 127); // Map the potentiometer value from 0 to 255
  analogWrite(enA, pwmOutput1); // Send PWM signal to L298N Enable pin
  analogWrite(enB, pwmOutput1); // Send PWM signal to L298N Enable pin
 
//  Serial.print("pwmOutput1 = ");
//  Serial.println(pwmOutput1);
  Serial.print("Stearing Reading = ");
  Serial.println(steeringAngle);
  delay(10);
//
//  digitalWrite(in1, HIGH);
//  digitalWrite(in2, LOW);
//  digitalWrite(in3, HIGH);
//  digitalWrite(in4, LOW);
}
