int tonePin = 11;int tones[] = {NOTE_FS3,NOTE_CS4,NOTE_AS3,NOTE_AS3,NOTE_GS3,NOTE_FS3,NOTE_FS3,NOTE_B3,NOTE_AS3,NOTE_AS3,NOTE_GS3,NOTE_GS3,NOTE_FS3,NOTE_FS3,NOTE_CS4,NOTE_AS3,NOTE_AS3,NOTE_GS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_CS3,NOTE_FS3,NOTE_FS3,NOTE_CS4,NOTE_AS3,NOTE_AS3,NOTE_GS3,NOTE_GS3,NOTE_FS3,NOTE_FS3,NOTE_B3,NOTE_AS3,NOTE_AS3,NOTE_GS3,NOTE_GS3,NOTE_FS3,NOTE_FS3,NOTE_CS4,NOTE_AS3,NOTE_AS3,NOTE_GS3,NOTE_FS3,NOTE_FS3,NOTE_GS3,NOTE_DS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_CS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_AS3,NOTE_FS3,NOTE_AS3,NOTE_AS3,NOTE_CS4,NOTE_B3,NOTE_AS3,NOTE_FS3,NOTE_GS3,NOTE_GS3,NOTE_GS3,NOTE_GS3,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_CS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_AS3,NOTE_CS4,NOTE_AS3,NOTE_DS4,NOTE_AS3,NOTE_CS4,NOTE_AS3,NOTE_DS4,NOTE_AS3,NOTE_CS4,NOTE_B3,NOTE_AS3,NOTE_GS3,NOTE_FS3,NOTE_FS3,NOTE_GS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_DS3,NOTE_DS3,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_AS3,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_AS3,NOTE_AS3,NOTE_CS4,NOTE_B3,NOTE_CS4,NOTE_DS4,NOTE_FS4,NOTE_GS4,NOTE_FS4,NOTE_FS3,NOTE_FS3,NOTE_GS3,NOTE_FS3,NOTE_AS3,NOTE_GS3,NOTE_GS3,NOTE_FS3,NOTE_GS3,NOTE_AS3,NOTE_DS3,NOTE_DS3,NOTE_DS3,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_AS3,NOTE_AS3,NOTE_CS4,NOTE_B3,NOTE_AS3,NOTE_FS3,NOTE_GS3,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_GS3,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_GS3,NOTE_DS3,NOTE_DS3,NOTE_DS3,NOTE_CS3,NOTE_CS3,NOTE_AS3,NOTE_CS4,NOTE_DS4,NOTE_CS4,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_AS3,NOTE_AS3,NOTE_CS4,NOTE_CS4,NOTE_B3,NOTE_AS3,NOTE_AS3,NOTE_AS3,NOTE_DS3,NOTE_DS3,NOTE_DS3,NOTE_CS3,NOTE_DS4,NOTE_CS4,NOTE_CS4,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_GS3,NOTE_AS3,NOTE_GS3,NOTE_FS3,NOTE_GS3,NOTE_AS3,NOTE_DS3,NOTE_DS3,NOTE_DS3,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_AS3,NOTE_AS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_DS3,NOTE_FS3,NOTE_FS3,NOTE_FS3,NOTE_AS3,NOTE_AS4,NOTE_CS5,NOTE_B4,NOTE_CS5,NOTE_DS5,NOTE_FS5,NOTE_GS5,NOTE_FS5,NOTE_FS3,NOTE_FS3,NOTE_GS3,NOTE_FS3,NOTE_AS3,NOTE_GS3,NOTE_GS3,NOTE_FS3,NOTE_GS3,NOTE_AS3,NOTE_DS3,NOTE_CS5,NOTE_AS4,NOTE_GS4,NOTE_FS4,NOTE_AS4,NOTE_B4,NOTE_AS4,NOTE_GS4};int delays[] = {474,250,250,500,250,250,250,500,250,250,250,250,500,250,250,250,500,250,250,250,500,1250,250,250,250,250,250,250,250,250,250,500,250,250,250,250,250,250,500,250,250,500,250,250,500,1250,375,125,250,250,125,125,125,125,250,250,125,375,250,125,125,250,125,125,125,125,250,125,375,125,125,250,250,125,125,250,250,375,125,250,250,250,125,125,250,250,500,125,250,125,250,125,250,125,250,125,250,250,250,250,250,125,250,625,125,125,125,250,125,125,250,750,125,125,125,125,250,125,125,250,1000,250,500,125,125,250,500,125,125,250,500,500,750,250,500,125,125,250,500,125,125,250,500,500,750,500,500,250,250,250,500,250,500,250,250,250,250,250,500,500,500,500,250,1250,125,125,250,500,125,125,125,125,250,125,250,125,125,125,250,250,250,125,125,250,125,125,125,125,125,125,125,250,250,125,125,375,125,125,125,125,250,125,125,125,125,250,125,250,125,250,250,375,125,125,125,125,125,375,125,125,125,125,125,250,125,125,125,125,250,375,125,250,250,500,125,250,625,125,125,125,125,125,125,125,125,125,125,250,1000,250,500,125,125,250,500,125,125,250,500,500,750,250,500,125,125,250,500,125,125,250,500,500,750,500,500,250,250,250,500,250,500,250,250,250,250,250,500,500,500,500,250,1500,500,500,250,500,500,250,500,250};void song() {
for(int i = 0; i < sizeof(delays)/sizeof(delays[0]); i++){
tone(tonePin, tones[i], delays[i]);
delay(delays[i] + 25);}}
void setup() {}
void loop() {song(); noTone(tonePin);}