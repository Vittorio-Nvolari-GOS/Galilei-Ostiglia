#include <M5StickCPlus.h>
#include <IRremote.h>
#include <LittleFS.h>

const int RECV_PIN = 36; // Pin di ricezione IR per M5StickC Plus
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  M5.begin();
    Serial.begin(115200);

      if (!LittleFS.begin()) {
          Serial.println("An error has occurred while mounting LittleFS");
              return;
                }

                  irrecv.enableIRIn(); // Inizializza il ricevitore IR
                    M5.Lcd.setRotation(3); // Imposta l'orientamento dello schermo
                      M5.Lcd.fillScreen(BLACK);
                        M5.Lcd.setTextColor(WHITE);
                          M5.Lcd.setTextSize(2);
                          }

                          void loop() {
                            if (irrecv.decode(&results)) {
                                Serial.println(results.value, HEX); // Stampa il valore IR ricevuto su seriale
                                    M5.Lcd.fillScreen(BLACK);
                                        M5.Lcd.setCursor(0, 0);
                                            M5.Lcd.print("IR Value: ");
                                                M5.Lcd.println(results.value, HEX); // Mostra il valore IR sul display

                                                    // Salva il valore IR su LittleFS
                                                        File file = LittleFS.open("/ir_signal.txt", FILE_WRITE);
                                                            if (!file) {
                                                                  Serial.println("Failed to open file for writing");
                                                                        return;
                                                                            }
                                                                                file.println(results.value, HEX);
                                                                                    file.close();

                                                                                        irrecv.resume(); // Riceve il prossimo valore
                                                                                          }
                                                                                            delay(100);
                                                                                            }

                                                                                            void emulateIR() {
                                                                                              File file = LittleFS.open("/ir_signal.txt", FILE_READ);
                                                                                                if (!file) {
                                                                                                    Serial.println("Failed to open file for reading");
                                                                                                        return;
                                                                                                          }

                                                                                                            String value = file.readStringUntil('\n');
                                                                                                              unsigned long ir_value = strtoul(value.c_str(), NULL, 16);
                                                                                                                file.close();

                                                                                                                  IRsend irsend;
                                                                                                                    irsend.sendNEC(ir_value, 32); // Invia il segnale IR salvato
                                                                                                                    }

                                                                                                                    void loop() {
                                                                                                                      if (M5.BtnA.wasPressed()) {
                                                                                                                          emulateIR();
                                                                                                                            }
                                                                                                                              M5.update();
                                                                                                                                // Altri codici...
                                                                                                                                }