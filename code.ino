#define pot A0 // potansiyometrenin ANALOG 0 pinine bağlı oldupunu söyledik

#define esc 9 // motorumuza bağladığımız esc'nin data pininin bağlı olduğu pini söyledik

int val; // val adında bir değişken tanımladık

void setup(){ 
  pinMode(pot, INPUT); // potansiyometreyi input (giriş) olarak tanımladık 
  pinMode(esc, OUTPUT); // motora bağlı esc'yi utput (çıkış) olarak tanımladık
} 

void loop(){ 
  val = analogRead(pot); // val değişkenini pot pininden okunan analog değer olarak tanımladık
  val = map(val, 0, 1023, 0, 179); // pot pininden okunan 0 ve 1023 arasındaki değeri 0 ve 179 arasına adapte ettik ve 0 ile 179 arasındaki değeri val değişkeni olarak atadık
  analogWrite(esc,val); // val değerini motorumuzun hareket edeceği değer olarak belirledik
  delay(15); // 15 milisaniye bekleme koyduk
} 
