#define LED 3

#define but_G 7
#define but_D 6


int St_but_G = 0;
int St_but_D = 0;


int i = 0;

bool SG = false;
bool SD = true;

char Terminal [50];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(but_G, INPUT_PULLUP);
  pinMode(but_D, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  St_but_G = digitalRead(but_G);
  St_but_D = digitalRead(but_D);
  // sprintf(Terminal,"GOR: %d DOL: %d, St_but_G  ,St_but_D);
  // Serial.println(Terminal);
  
  while (St_but_G == LOW && SG == false){//preveri se je gumb pritisnjen in ce je senzor ugasnjen
    if (i == 100){//isto kot senzor
      SG = true;//prizge zgornji  senzor
      digitalWrite(LED,LOW);
      Serial.println("*-VRH-*");
      break;
    }
    SD = false;//ugasne spodnji senzor
    i ++;
    digitalWrite(LED,HIGH);
    Serial.println(i);
    delay(50);
    break;
  }
  digitalWrite(LED,LOW);
  while (St_but_D == LOW && SD == false){//preveri se je gumb pritisnjen in ce je senzor ugasnjen
    if (i == 0){//isto kot senzor
      SD = true;//prizge spodnji senzor
      digitalWrite(LED,LOW);
      Serial.println("*-PODN-*");      
      break;
    }
    SG = false; //ugasne zgornji senzor
    i --;
    digitalWrite(LED,HIGH);
    Serial.println(i);
    delay(50);
    break;
  }
  digitalWrite(LED,LOW);
}
