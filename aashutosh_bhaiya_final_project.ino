
/*********************Pin Setup***********************/
int ir1=8;
int ir2=9;
int ir3=10;
int ldr =A0;
int lamp1 =7;
int lamp2=6;
int lamp3=5;

/****************Void Setup*******************************/
void setup() {
 Serial.begin(9600);
 pinMode(ldr,INPUT);
 pinMode(ir1,INPUT);
 pinMode(ir2,INPUT);
 pinMode(ir3,INPUT);
 pinMode(lamp1,OUTPUT);
 pinMode(lamp2,OUTPUT);
 pinMode(lamp3,OUTPUT);
}
/******************Void Loop*****************************/
void loop() {
 int cloud=analogRead(ldr);
 Serial.println(cloud); /// moniter status in serial moniter
 
 int slamp1=digitalRead(ir1);
 Serial.print("Ir1:");
 Serial.println(slamp1);
 
 
 int slamp2=digitalRead(ir2);
 Serial.print("Ir2:");
 Serial.println(slamp2);
 

 int slamp3=digitalRead(ir3);
  Serial.print("Ir3:");
 Serial.println(slamp3);
 delay(1000);



 /************************* Logic iS HERE******************************/
 if(slamp1==1 && cloud<=450) {      //////////// here things will work if both the conditions are getting satisfied.
  digitalWrite(lamp1,HIGH);        //////////// Change it to ||(OR operator) if you need to work on any one condition.
 }
 
 else{
  digitalWrite(lamp1,LOW);
  }

  
  if(slamp2==1 && cloud<=450) {
  digitalWrite(lamp2,HIGH);
 }
  else{
  digitalWrite(lamp2,LOW);
  }

   
if(slamp3==1 && cloud<=450) {
  digitalWrite(lamp3,HIGH);
 }
 else{
  digitalWrite(lamp3,LOW);
  }
 
}
