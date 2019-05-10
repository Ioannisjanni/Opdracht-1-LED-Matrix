/*
* Auteur 1: Ioannis Chaniotakis
* Auteur 2: Robin Huys
* Link naar github repository: https://github.com/Ioannisjanni/Opdracht-1-LED-Matrix
*/

//Defenitie Outputpins
const int latchClockPin = 3;
const int shiftClockPin = 4;
const int serialInputPin = 5;

//C1R1 komt overeen met Column 1 Row 1

//Column 1
word C1R1 = 0b0101011100010110;
word C1R2 = 0b0111011000010110;
word C1R3 = 0b0101011001010110;
word C1R4 = 0b0101111000010110;
word C1R5 = 0b0101011010010110;
word C1R6 = 0b0101011000110110;
word C1R7 = 0b0101011000010111;
word C1R8 = 0b0101011000011110;

//Column 2
word C2R1 = 0b1001011100010110;
word C2R2 = 0b1011011000010110;
word C2R3 = 0b1001011001010110;
word C2R4 = 0b1001111000010110;
word C2R5 = 0b1001011010010110;
word C2R6 = 0b1001011000110110;
word C2R7 = 0b1001011000010111;
word C2R8 = 0b1001011000011110;

//Column 3
word C3R1 = 0b1101001100010110;
word C3R2 = 0b1111001000010110;
word C3R3 = 0b1101001001010110;
word C3R4 = 0b1101101000010110;
word C3R5 = 0b1101001010010110;
word C3R6 = 0b1101001000110110;
word C3R7 = 0b1101001000010111;
word C3R8 = 0b1101001000011110;

//Column 4
word C4R1 = 0b1101011100000110;
word C4R2 = 0b1111011000000110;
word C4R3 = 0b1101011001000110;
word C4R4 = 0b1101111000000110;
word C4R5 = 0b1101011010000110;
word C4R6 = 0b1101011000100110;
word C4R7 = 0b1101011000000111;
word C4R8 = 0b1101011000001110;

//Column 5
word C5R1 = 0b1101010100010110;
word C5R2 = 0b1111010000010110;
word C5R3 = 0b1101010001010110;
word C5R4 = 0b1101110000010110;
word C5R5 = 0b1101010010010110;
word C5R6 = 0b1101010000110110;
word C5R7 = 0b1101010000010111;
word C5R8 = 0b1101010000011110;

//Column 6
word C6R1 = 0b1101011100010010;
word C6R2 = 0b1111011000010010;
word C6R3 = 0b1101011001010010;
word C6R4 = 0b1101111000010010;
word C6R5 = 0b1101011010010010;
word C6R6 = 0b1101011000110010;
word C6R7 = 0b1101011000010011;
word C6R8 = 0b1101011000011010;

//Column 7
word C7R1 = 0b1101011100010100;
word C7R2 = 0b1111011000010100;
word C7R3 = 0b1101011001010100;
word C7R4 = 0b1101111000010100;
word C7R5 = 0b1101011010010100;
word C7R6 = 0b1101011000110100;
word C7R7 = 0b1101011000010101;
word C7R8 = 0b1101011000011100;

//Column 8
word C8R1 = 0b1100011100010110;
word C8R2 = 0b1110011000010110;
word C8R3 = 0b1100011001010110;
word C8R4 = 0b1100111000010110;
word C8R5 = 0b1100011010010110;
word C8R6 = 0b1100011000110110;
word C8R7 = 0b1100011000010111;
word C8R8 = 0b1100011000011110;



void setup() {
  //Setup Outputpins  
  pinMode(shiftClockPin, OUTPUT);
  pinMode(latchClockPin, OUTPUT);
  pinMode(serialInputPin, OUTPUT);

}

void loop() {
  
for(int a = 0; a < 20; a++){
displayData(C1R1);
displayData(C2R2);
displayData(C3R3);
displayData(C4R4);
displayData(C5R5);
displayData(C6R6);
displayData(C7R7);
displayData(C8R8);

}
for(int a = 0; a < 20; a++){
displayData(C2R1);
displayData(C1R2);
displayData(C2R3);
displayData(C3R4);
displayData(C4R5);
displayData(C5R6);
displayData(C6R7);
displayData(C7R8);

}
for(int a = 0; a < 20; a++){
displayData(C3R1);
displayData(C2R2);
displayData(C1R3);
displayData(C2R4);
displayData(C3R5);
displayData(C4R6);
displayData(C5R7);
displayData(C6R8);

}
for(int a = 0; a < 20; a++){
displayData(C4R1);
displayData(C3R2);
displayData(C2R3);
displayData(C1R4);
displayData(C2R5);
displayData(C3R6);
displayData(C4R7);
displayData(C5R8);

}
for(int a = 0; a < 20; a++){
displayData(C5R1);
displayData(C4R2);
displayData(C3R3);
displayData(C2R4);
displayData(C1R5);
displayData(C2R6);
displayData(C3R7);
displayData(C4R8);

}
for(int a = 0; a < 20; a++){
displayData(C6R1);
displayData(C5R2);
displayData(C4R3);
displayData(C3R4);
displayData(C2R5);
displayData(C1R6);
displayData(C2R7);
displayData(C3R8);

}
for(int a = 0; a < 20; a++){
displayData(C7R1);
displayData(C6R2);
displayData(C5R3);
displayData(C4R4);
displayData(C3R5);
displayData(C2R6);
displayData(C1R7);
displayData(C2R8);

}
for(int a = 0; a < 20; a++){
displayData(C8R1);
displayData(C7R2);
displayData(C6R3);
displayData(C5R4);
displayData(C4R5);
displayData(C3R6);
displayData(C2R7);
displayData(C1R8);

}
for(int a = 0; a < 20; a++){
displayData(C7R1);
displayData(C6R2);
displayData(C5R3);
displayData(C4R4);
displayData(C3R5);
displayData(C2R6);
displayData(C1R7);
displayData(C2R8);

}
for(int a = 0; a < 20; a++){
displayData(C6R1);
displayData(C5R2);
displayData(C4R3);
displayData(C3R4);
displayData(C2R5);
displayData(C1R6);
displayData(C2R7);
displayData(C3R8);

}
for(int a = 0; a < 20; a++){
displayData(C5R1);
displayData(C4R2);
displayData(C3R3);
displayData(C2R4);
displayData(C1R5);
displayData(C2R6);
displayData(C3R7);
displayData(C4R8);

}
for(int a = 0; a < 20; a++){
displayData(C4R1);
displayData(C3R2);
displayData(C2R3);
displayData(C1R4);
displayData(C2R5);
displayData(C3R6);
displayData(C4R7);
displayData(C5R8);

}
for(int a = 0; a < 20; a++){
displayData(C3R1);
displayData(C2R2);
displayData(C1R3);
displayData(C2R4);
displayData(C3R5);
displayData(C4R6);
displayData(C5R7);
displayData(C6R8);

}
for(int a = 0; a < 20; a++){
displayData(C2R1);
displayData(C1R2);
displayData(C2R3);
displayData(C3R4);
displayData(C4R5);
displayData(C5R6);
displayData(C6R7);
displayData(C7R8);

}
for(int a = 0; a < 20; a++){
displayData(C1R1);
displayData(C2R2);
displayData(C3R3);
displayData(C4R4);
displayData(C5R5);
displayData(C6R6);
displayData(C7R7);
displayData(C8R8);

}

}
void displayData(word message) {
  
  for (int i = 0; i <= 15; i++) {
    digitalWrite(serialInputPin, bitRead(message, i));
    digitalWrite(shiftClockPin, HIGH);
    digitalWrite(shiftClockPin, LOW);
  }
  digitalWrite(latchClockPin, HIGH);
  digitalWrite(latchClockPin, LOW);

}
