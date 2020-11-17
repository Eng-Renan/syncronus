const int q1 = 2;
const int q2 = 3;
const int q3 = 4;
const int rele_1 = 11;
const int rele_2 = 12;
int leitura1 = 0;
int leitura2 = 0;
int leitura3 = 0;


void setup()
{

 pinMode (q1, INPUT);
 pinMode (q2, INPUT);
 pinMode (q3, INPUT);
 pinMode (rele_1, OUTPUT);
 pinMode (rele_2, OUTPUT);
 digitalWrite(rele_1, LOW);
 digitalWrite(rele_2, LOW);
 
}

  void loop()
 {
   
   leitura1 = digitalRead(q1);
   leitura2 = digitalRead(q2);
   leitura3 = digitalRead(q3);
                                      if ( leitura1 && leitura2 == HIGH) // to be continue
                                                               {
                                                                                                                            
                                                                digitalWrite(rele_1, HIGH);
                                                                delay(1000);
                                                                digitalWrite(rele_1, LOW);
                                                                
                                                                }
                                      if ( leitura2 && leitura3 == HIGH) // to be continue
                                                               {
                                                                                                                            
                                                                digitalWrite(rele_2, HIGH);
                                                                delay(1000);
                                                                digitalWrite(rele_2, LOW);
                                      
                                                                }
  }
