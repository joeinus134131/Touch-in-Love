//project sensor sentuh arduino

//pin analog 0 untuk sensor
#define pinsensor A0 //jika menggunakan define tidak perlu memakai = 
//int pinsensor = A0; //menggunakan int perlu memakai =

float datasensor = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  //definisi baudrate komunikasi serial
  pinMode(pinsensor, INPUT); //memberikan fungsi pada pin sensor ke arduino
  Serial.println("Hello, Selamat datang kamu :0 "); //menuliskan sebuah kalimat di serial monitor
  delay(100); // delay ke program selanjutnya
}

void loop() {
  // put your main code here, to run repeatedly:
  datasensor = analogRead(pinsensor);  //membaca data dari pin sensor
  Serial.print("Data = "); // memunculkan kalimat/kata
  Serial.println(datasensor); //memunculkan data pada serial monitor
  delay(100);

//pemberian kondisi pada sistem
  if(datasensor >= 900) //ngasih nilai ambarng buat arduino itu ngasih kondisi
  {
    Serial.println("Kamu menyentuh"); //pada saat menyentuh sensor
    delay(100);
  }
  else //kondisi selain kita menyentuh sensor
  {
    Serial.println("kamu tidak menyentuh"); //pada saat tidak menyentuh sensor
    delay(100);
  }
}
