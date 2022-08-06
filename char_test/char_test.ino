// 1. git add . 
// 2. git commit -m "some messahge "
// 3. git push

const int Size = 100;
char ReadData[Size];
char name;
void setup() {
Serial.begin(9600);

Serial.setTimeout(5);
}

void loop() {
while (Serial.available()){
  
  int Parse = Serial.readBytes(ReadData, Size);
  
  char* comma = strchr(ReadData, ',');  // pointer to ',' in ReadData array
  char* second = strchr(comma+1, ',');
  char New[10] = "";
  char New1[10] = "";
  strncpy(New, ReadData, comma - ReadData); //new char with simbols before ','
  strncpy(New1, comma, second - comma);
  Serial.println(New); //
  Serial.println(New1+1);

  Serial.println(second+1);
  
 


  }
}
