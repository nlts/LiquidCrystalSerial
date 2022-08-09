[README in English](./README-en.md)

# LiquidCrystalSerial
A simple arduino Serial LCD Library using 74HC595.

1. Create a instance: 
   >> LiquidCrystalSerial lcd(SH_CP, DS, ST_CP);

    or

   >> LiquidCrystalSerial lcd(SH_CP, DS, ST_CP,RS,RW,ENABLE,D4,D5,D6,D7);

   when D15 pin to any of D4-D7, assign as "0" or "15".

2. initialize the object:
   >> lcd.begin(16, 2);

3. about this project:
   - original: https://github.com/AntorOfficial/LiquidCrystalSerial
   
   - add an instance method :  LiquidCrystalSerial/10 for pin assigns of 74HC595.

 
