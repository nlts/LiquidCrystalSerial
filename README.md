[README in English](./README-en.md)

# LiquidCrystalSerial
Arduino シリアル接続LCD用ライブラリ（74HC595用）。シフトレジスタ経由の3線接続用です。

1. インスタンス生成: 
   >> LiquidCrystalSerial lcd(SH_CP, DS, ST_CP);//SH_CP->SCK/11, DS->SI/14, ST_CP->SCK/12
   
   or
   
   >> LiquidCrystalSerial lcd(SH_CP, DS, ST_CP, RS, RW, ENABLE, D4, D5, D6, D7);

   D15ピンをD4-D7の何かに割当てる場合は「0」または「15」を指定して下さい。
　 ※オリジナルライブラリを利用して、4bitモード=true(1)、D15=0としてinitメソッドを呼んでもOKです。
   >> lcd.init(1, SH_CP, DS, ST_CP, RS, RW, ENABLE, D4, D5, D6, D7, 0, 0, 0, 0);


2. オブジェクトの初期化:
   >> lcd.begin(16, 2);


3. このプロジェクトについて:
   - original: https://github.com/AntorOfficial/LiquidCrystalSerial
   
   - メソッドの追加 :  LiquidCrystalSerial/10 ※シフトレジスタ(74HC595)ピンアサイン指定用

4. Download Libaray(zip)

   - [v1.0.0a](https://github.com/nlts/LiquidCrystalSerial/releases/tag/v1.0.0a)
 
