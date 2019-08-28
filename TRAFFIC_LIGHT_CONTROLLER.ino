/*int Lane1[] = {13,12,11}; // Lane 1 Red, Yellow and Green
int Lane2[] = {10,9,8};// Lane 2 Red, Yellow and Green
int Lane3[] = {7,6,5};// Lane 3 Red, Yellow and Green
int Lane4[] = {4,3,2};// Lane 4 Red, Yellow and Green
*/
const int NR=D0;
const int NG=D1;
const int ER=D2;
const int EG=D3;
const int SR=D4;
const int SG=D5;
const int WR=D6;
const int WG=D7;

void setup() 
{
  
    pinMode(NR, OUTPUT); 
    pinMode(NG, OUTPUT);
    pinMode(ER, OUTPUT);
    pinMode(EG, OUTPUT);
    pinMode(SR, OUTPUT); 
    pinMode(SG, OUTPUT);
    pinMode(WR, OUTPUT);
    pinMode(WG, OUTPUT);
  
 
  
}

void loop() 
 {
  digitalWrite(NG, HIGH);
  digitalWrite(WR, HIGH);
  digitalWrite(SR, HIGH);
  digitalWrite(ER, HIGH);
  delay(7000);
  digitalWrite(NG, LOW);
  digitalWrite(WR, LOW);
  //digitalWrite(Lane1[1], HIGH);
  //digitalWrite(Lane4[1], HIGH);
  delay(3000);
  //digitalWrite(Lane1[1], LOW);
  //digitalWrite(Lane4[1], LOW);
  digitalWrite(NR, HIGH);
  digitalWrite(WG, HIGH);
  delay(7000);
  digitalWrite(SR, LOW);
  digitalWrite(WG, LOW);
  //digitalWrite(Lane3[1], HIGH);
  //digitalWrite(Lane4[1], HIGH);
  delay(3000);
  //digitalWrite(Lane3[1], LOW);
  //digitalWrite(Lane4[1], LOW);
  digitalWrite(SG, HIGH);
  digitalWrite(WR, HIGH);
  delay(7000);
  digitalWrite(ER, LOW);
  digitalWrite(SG, LOW);
  //digitalWrite(Lane2[1], HIGH);
  //digitalWrite(Lane3[1], HIGH);
  delay(3000);
  //digitalWrite(Lane3[1], LOW);
  //digitalWrite(Lane2[1], LOW);
  digitalWrite(SR, HIGH);
  digitalWrite(EG, HIGH);
  delay(7000);
  digitalWrite(NR, LOW);
  digitalWrite(EG, LOW);
  //digitalWrite(Lane1[1], HIGH);
  //digitalWrite(Lane2[1], HIGH);
  delay(3000);
  //digitalWrite(Lane2[1], LOW);
  //digitalWrite(Lane1[1], LOW);
 }
