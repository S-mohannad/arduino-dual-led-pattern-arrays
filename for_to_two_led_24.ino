int LED1=2;
int LED2=3;
int D=300;
int b1[]={2,3,2,3};
int b2[]={2,3,3,2};
void setup() 
{pinMode(LED1,OUTPUT); 
 pinMode(LED2,OUTPUT);
 for(int i=0;i<4;i++){
  blink(LED1,b1[i]);
  blink(LED2,b2[i]);
 }
}
void loop() {
}
void blink(int p, int t){
for(; t>0; t--){
digitalWrite(p,1);
delay(D);
digitalWrite(p,0);
delay(D);
}
} 