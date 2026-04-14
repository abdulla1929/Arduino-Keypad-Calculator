#include<LiquidCrystal_I2C.h>
#include<Wire.h>
#include<Keypad.h>
LiquidCrystal_I2C lcd(0x27,16,2);
const byte row=4;
const byte col=4;
const char keys[row][col]{
  {'1','2','3','+'},
  {'4','5','6','-'},
  {'7','8','9','x'},
  {'*','0','#','/'}
};
const char rpins[row]={2,3,4,5};
const char cpins[col]={6,7,8,9};
Keypad mykeypad= Keypad(makeKeymap(keys),rpins,cpins,row,col);
long num=0;
char op=0;
float result=0;


void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("calculator");
  lcd.setCursor(0, 1);

}

void loop() {
  

  char key=mykeypad.getKey();
  if(!key)  return;
  
  if(key=='*'){
    num=0;
    op=0;
    result=0;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("calculator");
    lcd.setCursor(0, 1);
    
  }
  else if (key >= '0' && key <= '9') {
    num = num * 10 + (key - '0');
    lcd.print(key);
  }
  else if(key=='+' || key=='-' || key=='x' || key=='/'){
        
    
    operation();
    
    op=key;
    num=0;

    lcd.print(key);
    
  }

 else if(key=='#'){
    
  
  lcd.clear();
  operation();
  lcd.setCursor(0,0);
  lcd.print("Result");
  lcd.setCursor(0, 1);
  lcd.print(result);

  
  }
}
void operation(){
  if(op=='+'){
    result+=num;
  }
  else if(op=='-'){
    result-=num;
  }
  else if(op=='x'){
    result*=num;
  }
  else if(op=='/'){
    if(num==0){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("ERROR");
      num=0;
      op=0;
      result=0;
      
    }
    else{
      result /= num;
    }
  }
  else{
      result=num;
    }
  
}
