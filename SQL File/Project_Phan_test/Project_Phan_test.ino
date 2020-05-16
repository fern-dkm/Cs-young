#include <Scheduler.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

#define buzzer 40

#define Soli_1 42
#define Soli_2 43
#define Soli_3 44
#define Soli_4 45
const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {2, 3, 4, 5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8,9}; //connect to the column pinouts of the keypad
char exitLoop ="";
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
  int Sen1 ;
  int Sen2 ;
  int Sen3;
  int Sen4 ;
  String tempHum1 ="";
  String tempHum2 ="";
  String tempHum3 ="";
  String tempHum4 ="";
  String tempTime1 ="";
  String tempTime2 ="";
  String tempTime3 ="";
  String tempTime4 ="";
  
void setup()
{
  Scheduler.start(setup1, loop1);
  Scheduler.start(setup2, loop2);
  Scheduler.start(setup3, loop3);
  Scheduler.start(setup4, loop4);
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
  lcd.begin();
  lcd.backlight();   

}

void loop()
{  
  char Setting = keypad.getKey();
  if(Setting){
    if(Setting=='*'){
      int i = 0;
     lcd.clear();
     while(i<1){
      lcd.setCursor(3,0);
      lcd.print("Setting Hum");
     char eKey = keypad.getKey();   
    if(eKey=='A'){
      lcd.clear();
      plan_hum_A();
      i++;  
    }else if (eKey=='B'){
      lcd.clear();
      plan_hum_B();
      i++; 
    }else if(eKey=='C'){
      lcd.clear();
      plan_hum_C();
      i++; 
    }else if(eKey=='D'){
      lcd.clear();
      plan_hum_D();
      i++;
    }
    }
    }else if(Setting=='#'){
     int i = 0;
     lcd.clear();
     while(i<1){
      lcd.setCursor(3,0);
      lcd.print("Setting Time");
      char eKey = keypad.getKey();
     if(eKey=='A'){
      lcd.clear();
      plan_time_A();
      i++;  
    }else if (eKey=='B'){
       lcd.clear();         
      plan_time_B(); 
       i++;   
    }else if(eKey=='C'){
         lcd.clear();      
      plan_time_C();
        i++;     
    }else if(eKey=='D'){
            lcd.clear();
      plan_time_D();
      i++;  
    }
    }
    }
  }
     lcd.setCursor(0,0);
     lcd.print("Please Enter Key");
     lcd.setCursor(0,1);
     lcd.print("                ");
}

void setup1()
{
  pinMode(Soli_1,OUTPUT);
}

void loop1()
{
delay(100);
digitalWrite(Soli_1,HIGH);
delay(100);
digitalWrite(Soli_1,LOW);
}
     

void setup2()
{
  pinMode(Soli_2,OUTPUT);
}

void loop2()
{
delay(100);
digitalWrite(Soli_2,HIGH);
delay(100);
digitalWrite(Soli_2,LOW);
}

void setup3()
{
  pinMode(Soli_3,OUTPUT);
}

void loop3()
{
delay(100);
digitalWrite(Soli_3,HIGH);
delay(100);
digitalWrite(Soli_3,LOW);
}

void setup4()
{
  pinMode(Soli_4,OUTPUT);
}

void loop4(){
delay(100);

}

void BuzzerOn(){
      tone(buzzer, 1500); // Send 1KHz sound signal...
      delay(100);        // ...for 1 sec
      noTone(buzzer);     // Stop sound...  
}
void plan_hum_A(){
  int i = 0;
  while(i==0){
      char keypressed = keypad.getKey();   //Read pressed keys;
      lcd.setCursor(0,1);
      lcd.print("Your Set :");
      int i = 0;
      lcd.setCursor(10,1);
      lcd.print(tempHum1);
      tempHum1 = "";
      while(i<3){
      int sen=0;
      for(int i = 0;i<=10;i++){
        sen += analogRead(A0);
        delay(15);
      }
      int sumSen1 = sen/10;  
      lcd.setCursor(0,0);
      lcd.print("Sensor A ");
      lcd.setCursor(10,0);
      lcd.print(sumSen1);
      char keypressed = keypad.getKey();
      if (keypressed != NO_KEY){
      if (keypressed != 'A'&&keypressed != 'B'&&keypressed != 'C'&&keypressed != 'D' &&keypressed != '*' &&keypressed != '#'){        
        tempHum1 += keypressed;
        i++;  
        lcd.setCursor(9+i,1);
        lcd.print(keypressed);
         }
      }
    }
        lcd.setCursor(10,1);
        lcd.print(tempHum1);
        delay(2000);
        break;
  }
  }


void plan_hum_B(){
   int i = 0;
  while(i==0){
      char keypressed = keypad.getKey();   //Read pressed keys;
      lcd.setCursor(0,1);
      lcd.print("Your Set :");
      int i = 0;
      lcd.setCursor(10,1);
      lcd.print(tempHum2);
      tempHum2 = "";
      while(i<3){
      int sen=0;
      for(int i = 0;i<=10;i++){
        sen += analogRead(A1);
        delay(15);
      }
      int sumSen2 = sen/10;  
      lcd.setCursor(0,0);
      lcd.print("Sensor B ");
      lcd.setCursor(10,0);
      lcd.print(sumSen2);
      char keypressed = keypad.getKey();
      if (keypressed != NO_KEY){
      if (keypressed != 'A'&&keypressed != 'B'&&keypressed != 'C'&&keypressed != 'D' &&keypressed != '*' &&keypressed != '#'){        
        tempHum2 += keypressed;
        i++;  
        lcd.setCursor(9+i,1);
        lcd.print(keypressed);
         }
      }
    }
        lcd.setCursor(10,1);
        lcd.print(tempHum2);
        delay(2000);
        break;
  }
}


void plan_hum_C(){
   int i = 0;
  while(i==0){
      char keypressed = keypad.getKey();   //Read pressed keys;
      lcd.setCursor(0,1);
      lcd.print("Your Set :");
      int i = 0;
      lcd.setCursor(10,1);
      lcd.print(tempHum3);
      tempHum3 = "";
      while(i<3){
      int sen=0;
      for(int i = 0;i<=10;i++){
        sen += analogRead(A2);
        delay(15);
      }
      int sumSen3 = sen/10;  
      lcd.setCursor(0,0);
      lcd.print("Sensor C ");
      lcd.setCursor(10,0);
      lcd.print(sumSen3);
      char keypressed = keypad.getKey();
      if (keypressed != NO_KEY){
      if (keypressed != 'A'&&keypressed != 'B'&&keypressed != 'C'&&keypressed != 'D' &&keypressed != '*' &&keypressed != '#'){        
        tempHum3 += keypressed;
        i++;  
        lcd.setCursor(9+i,1);
        lcd.print(keypressed);
         }
      }
    }
        lcd.setCursor(10,1);
        lcd.print(tempHum3);
        delay(2000);
        break;
  }
}


void plan_hum_D(){
   int i = 0;
  while(i==0){
      char keypressed = keypad.getKey();   //Read pressed keys;
      lcd.setCursor(0,1);
      lcd.print("Your Set :");
      int i = 0;
      lcd.setCursor(10,1);
      lcd.print(tempHum4);
      tempHum4 = "";
      while(i<3){
      int sen=0;
      for(int i = 0;i<=10;i++){
        sen += analogRead(A3);
        delay(15);
      }
      int sumSen4 = sen/10;  
      lcd.setCursor(0,0);
      lcd.print("Sensor D ");
      lcd.setCursor(10,0);
      lcd.print(sumSen4);
      char keypressed = keypad.getKey();
      if (keypressed != NO_KEY){
      if (keypressed != 'A'&&keypressed != 'B'&&keypressed != 'C'&&keypressed != 'D' &&keypressed != '*' &&keypressed != '#'){        
        tempHum4 += keypressed;
        i++;  
        lcd.setCursor(9+i,1);
        lcd.print(keypressed);
         }
      }
    }
        lcd.setCursor(10,1);
        lcd.print(tempHum4);
        delay(2000);
        break;
  }
}

void plan_time_A(){
  int i = 0;
  while(i==0){
      char keypressed = keypad.getKey();   //Read pressed keys;
      lcd.setCursor(0,1);
      lcd.print("Your Set :");
      int i = 0;
      lcd.setCursor(10,0);
      lcd.print(tempTime1);
       tempTime1 = "";
      while(i<3){
      lcd.setCursor(0,0);
      lcd.print("Time A ");
      lcd.setCursor(10,0);
      tempTime1 = "";
      char keypressed = keypad.getKey();
      if (keypressed != NO_KEY){
      if (keypressed != 'A'&&keypressed != 'B'&&keypressed != 'C'&&keypressed != 'D' &&keypressed != '*' &&keypressed != '#'){        
        tempTime1 += keypressed;
        i++;  
        lcd.setCursor(9+i,1);
        lcd.print(keypressed);
         }
      }
    }
        lcd.setCursor(10,1);
        lcd.print(tempTime1);
        delay(2000);
        break;
  }
  }


void plan_time_B(){
   int i = 0;
  while(i==0){
      char keypressed = keypad.getKey();   //Read pressed keys;
      lcd.setCursor(0,1);
      lcd.print("Your Set :");
      int i = 0;
      lcd.setCursor(10,0);
      lcd.print(tempTime2);
      tempTime2 = "";
      while(i<3){  
      lcd.setCursor(0,0);
      lcd.print("Time B ");
      lcd.setCursor(10,0);
      char keypressed = keypad.getKey();
      if (keypressed != NO_KEY){
      if (keypressed != 'A'&&keypressed != 'B'&&keypressed != 'C'&&keypressed != 'D' &&keypressed != '*' &&keypressed != '#'){        
        tempTime2 += keypressed;
        i++;  
        lcd.setCursor(9+i,1);
        lcd.print(keypressed);
         }
      }
    }
        lcd.setCursor(10,1);
        lcd.print(tempTime2);
        delay(2000);
        break;
  }
}


void plan_time_C(){
   int i = 0;
  while(i==0){
      char keypressed = keypad.getKey();   //Read pressed keys;
      lcd.setCursor(0,1);
      lcd.print("Your Set :");
      int i = 0;
      lcd.setCursor(10,0);
      lcd.print(tempTime3);
      tempTime3 = "";
      while(i<3){  
      lcd.setCursor(0,0);
      lcd.print("Time C ");
      lcd.setCursor(10,0);
      char keypressed = keypad.getKey();
      if (keypressed != NO_KEY){
      if (keypressed != 'A'&&keypressed != 'B'&&keypressed != 'C'&&keypressed != 'D' &&keypressed != '*' &&keypressed != '#'){        
        tempTime3 += keypressed;
        i++;  
        lcd.setCursor(9+i,1);
        lcd.print(keypressed);
         }
      }
    }
        lcd.setCursor(10,1);
        lcd.print(tempTime3);
        delay(2000);
        break;
  }
}


void plan_time_D(){
   int i = 0;
  while(i==0){
      char keypressed = keypad.getKey();   //Read pressed keys;
      lcd.setCursor(0,1);
      lcd.print("Your Set :");
      int i = 0;
      lcd.setCursor(10,01);
      lcd.print(tempTime4);
      tempTime4 = "";
      while(i<3){  
      lcd.setCursor(0,0);
      lcd.print("Time D ");
      lcd.setCursor(10,0);
      char keypressed = keypad.getKey();
      if (keypressed != NO_KEY){
      if (keypressed != 'A'&&keypressed != 'B'&&keypressed != 'C'&&keypressed != 'D' &&keypressed != '*' &&keypressed != '#'){        
        tempTime4 += keypressed;
        i++;  
        lcd.setCursor(9+i,1);
        lcd.print(keypressed);
         }
      }
    }
        lcd.setCursor(10,1);
        lcd.print(tempTime4);
        delay(2000);
        break;
  }
}
