# arduino-smart-lock
เหตุการณ์นี้มักจะเกิดขึ้นในตอนที่คุณกำลังจะออกจากบ้านที่หากุญแจรถไม่เจอ หรือก่อนเข้าบ้านแล้วพบว่าหากุญแจบ้านไม่ได้อยู่ในกระเป๋าของคุณ เหุการณ์เหล่านี้ไม่ใช่เรื่องผิดปกติ
จึงทำให้เราอยาก จัดทำโปรเจค Arduino smart lock ขึ้นมาเพื่อจำลองระบบรักษาความปลอดภัยของบ้าน โดยการใส่รหัสผ่านโทรศัพท์ เพิ้มความสะดวกสบาย และยังรักษาความปลออดภัยได้มากกว่า เนื่องจากประตูแบบเดิมที่เป็นกลอนหรือกุญแจล็อค จะสามารถถูกงัดแงะได้ ซึ่งง่ายต่อการถูกโจรกรรมในขณะที่เจ้าของไม่อยู่ที่บ้าน

<img src="https://github.com/Angwaraa/arduino-smart-lock/blob/master/poster-compro1.jpg" hight = "1000" width = "800">

Aduino UNO R3        |  USB Cable  | กลอนประตู
:-------------------------:|:-------------------------:|:-------------------------:
![](https://github.com/Angwaraa/arduino-smart-look/blob/master/Images/196045.jpg)  |  ![](https://github.com/Angwaraa/arduino-smart-lock/blob/master/Images/196046.jpg)   | ![](https://github.com/Angwaraa/arduino-smart-lock/blob/master/Images/196052.jpg)


สาย Jumper Male to Female            |  Bluetooth Serial Module(HC-05 Slave mode)  |  Tower Pro SG90 Mini Micro Servo
:-------------------------:|:-------------------------:|:-------------------------:
![](https://github.com/Angwaraa/arduino-smart-lock/blob/master/Images/196047.jpg)  |  ![](https://github.com/Angwaraa/arduino-smart-lock/blob/master/Images/196050.jpg)  |  ![](https://github.com/Angwaraa/arduino-smart-lock/blob/master/Images/196051.jpg)

# Diagram in Arduino Smart lock

<img src="https://github.com/Angwaraa/arduino-smart-lock/blob/master/Images/Lock%20System.jpg" hight = "500" width = "500">

# How to use arduino smart lock
<img src="https://github.com/Angwaraa/arduino-smart-lock/blob/master/Images/1.jpg" hight = "500" width = "500">

* "UNLOCK" = กดปุ่มunlock บนApplication บนมือถือ เพื่อสั่งให้ส่งค่าData คือ 1(รหัสผ่านปลดล๊อคที่ต้ั้งไว้) เพื่อนำไปอ่านค่า บน Arduino IDE เพื่อสั่งให้โมเดลทำการปลดล๊อค
* "LOCK" = กดปุ่มlock บนApplication บนมือถือ เพื่อสั่งให้ส่งค่าData คือ 0(รหัสผ่านล๊อคที่ต้ั้งไว้) เพื่อนำไปอ่านค่า บน Arduino IDE เพื่อสั่งให้โมเดลทำการล๊อค

---

# ![](img/Person.png) Team Members
|  |ชื่อ|นามสกุล|GitHub Username|รหัสนักศึกษา|
|:-:|--|------|---------------|---------|
|<img src="https://github.com/Angwaraa/arduino-smart-lock/blob/master/Images/51200822_1486256878178021_5890411946972282880_n.jpg" hight = "100" width = "100">|Angwara|Paolaklaem|[@Angwaraa](https://github.com/Angwaraa)|61070351|
|<img src="https://github.com/Angwaraa/arduino-smart-lock/blob/master/Images/Pakjira.jpg" hight = "100" width = "100">|Phatjira|Suknaboon|[@Phatjira Suknaboon](https://github.com/Phatjira)|61070344|
|<img src="https://github.com/Angwaraa/arduino-smart-lock/blob/master/Images/65756.jpg" hight = "100" width = "100">|Saranchana|Yiwpapan|[@bamss1503](https://github.com/bamss1503)|61070236|
|<img src="https://github.com/Angwaraa/arduino-smart-lock/blob/master/Images/21430239_1380369728678225_8475190223276262180_n.jpg" hight = "100" width = "100">|Kittamate|Saenprang|[@snowneymotex](https://github.com/snowneymotex)|61070336|

