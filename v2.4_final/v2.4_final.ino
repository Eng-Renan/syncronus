#include <Tone.h>

Tone freq1;
Tone freq2;

const int DTMF_freq1[] = { 1336, 1209, 1336, 1477, 1209, 1336, 1477, 1209, 1336, 1477 };
const int DTMF_freq2[] = {  941,  697,  697,  697,  770,  770,  770,  852,  852,  852 };

const int comand_in = 6;
const int comand_out = 8;
const int led_in = 10;
const int led_out = 12;
const int rele_1 = 9;
const int rele_2 = 11;
int in_break = 0;
int out_break = 0;

//void (*funcReset)() = 0;

void setup()
{

Serial.begin(9600);
  freq1.begin(A0);
  freq2.begin(13);
 
 pinMode (comand_in, INPUT);
 pinMode (comand_out, INPUT);
 pinMode (led_in, OUTPUT);
 pinMode (led_out, OUTPUT);
 pinMode (rele_1, OUTPUT);
 pinMode (rele_2, OUTPUT);
  digitalWrite(rele_1, HIGH);
 digitalWrite(rele_2, HIGH);
 
}

void playDTMF(uint8_t number, long duration)
{
  freq1.play(DTMF_freq1[number], duration);
  freq2.play(DTMF_freq2[number], duration);
}


  void loop()
 {
   
   in_break = digitalRead(comand_in);
   out_break = digitalRead(comand_out);
   
                                      if ( in_break == HIGH) 
                                                               {
                                                                int i;
                                                                uint8_t phone_number[] = { 3 };
                                                                digitalWrite(led_in, HIGH); 
                                                                digitalWrite(led_out, HIGH);
                                                                digitalWrite(rele_1, LOW);
                                                                digitalWrite(rele_2, LOW);
                                                                playDTMF(phone_number[i], 600);

                                                                //tone1.stop();
                                                                digitalWrite(led_in, LOW); 
                                                                digitalWrite(led_out, LOW);
                                                                digitalWrite(rele_1, HIGH);
                                                                digitalWrite(rele_2, HIGH);
                                                                //funcReset();
                                                                }
     
                                      if ( out_break == HIGH)
                                                               {
                                                                int i;
                                                                uint8_t phone_number[] = { 6 };
                                                                digitalWrite(led_in, HIGH);
                                                                digitalWrite(led_out, HIGH);
                                                                digitalWrite(rele_1, LOW); 
                                                                digitalWrite(rele_2, LOW);
                                                                playDTMF(phone_number[i],500);

                                                                //tone1.stop();
                                                                digitalWrite(led_in, LOW);
                                                                digitalWrite(led_out, LOW);
                                                                digitalWrite(rele_1, HIGH); 
                                                                digitalWrite(rele_2, HIGH);
                                                                //funcReset();
                                                                }
  }
