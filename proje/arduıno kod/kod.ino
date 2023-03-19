const int role_1 = 5;   // 4. pin 1. röle olarak tanımlandı
const int role_2 = 6;
const int role_3 = 7;
int gelenVeri = 0;   // genel veriyi tutacak değişken
char gelenKarakter;

void setup()
{
  pinMode(role_1, OUTPUT);   // çıkış olarak ayarlandı
  pinMode(role_2, OUTPUT);   // çıkış olarak ayarlandı
  pinMode(role_3, OUTPUT);   // çıkış olarak ayarlandı
    // Seri haberleşmeyi başlatıyoruz (9600 bps hızında)
    Serial.begin(9600);

  // ters tetikleme röle kartları için çıkışlar 1 yap
  digitalWrite(role_1, HIGH);
  digitalWrite(role_2, HIGH);
  digitalWrite(role_3, HIGH);

}

void loop()
{
 if (Serial.available() > 0) {
     gelenVeri = Serial.read();
     gelenKarakter = gelenVeri;
     if(gelenKarakter=='a')
     {
        digitalWrite(role_1, LOW);   // röleyi çektir
     }
          if(gelenKarakter=='b')
     {
        digitalWrite(role_1,  HIGH);   // röleyi çektir
     }
          if(gelenKarakter=='c')
     {
        digitalWrite(role_2, LOW);   // röleyi çektir
     }
          if(gelenKarakter=='d')
     {
        digitalWrite(role_2,  HIGH);   // röleyi çektir
     }
          if(gelenKarakter=='e')
     {
        digitalWrite(role_3, LOW);   // röleyi çektir
     }
          if(gelenKarakter=='f')
     {
        digitalWrite(role_3, HIGH);   // röleyi çektir
     } 
 }


}
