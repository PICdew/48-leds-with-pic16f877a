#include <16f877a.h>
#fuses xt,nowdt
#use delay(clock=1000000)

//Declaracion de variables globales
#define Led pin_a0//Nombra a pin_b0 como Led
#define Led1 pin_a1//Nombra a pin_b0 como Led
#define Led2 pin_a2//Nombra a pin_b0 como Led
#define Led3 pin_a3//Nombra a pin_b0 como Led
#define Led4 pin_a4//Nombra a pin_b0 como Ledv
#define Led5 pin_a5//Nombra a pin_b0 como Led

#define Led6 pin_b0//Nombra a pin_b0 como Led
#define Led7 pin_b1//Nombra a pin_b0 como Led
#define Led8 pin_b2//Nombra a pin_b0 como Led
#define Led9 pin_b3//Nombra a pin_b0 como Led
#define Led10 pin_b4//Nombra a pin_b0 como Led
#define Led11 pin_b5//Nombra a pin_b0 como Led
#define Led12 pin_b6//Nombra a pin_b0 como Led
#define Led13 pin_b7//Nombra a pin_b0 como Led

#define Led14 pin_c0//Nombra a pin_b0 como Led
#define Led15 pin_c1//Nombra a pin_b0 como Led
#define Led16 pin_c2//Nombra a pin_b0 como Led
#define Led17 pin_c3//Nombra a pin_b0 como Led
#define Led18 pin_c4//Nombra a pin_b0 como Led
#define Led19 pin_c5//Nombra a pin_b0 como Led
#define Led20 pin_c6//Nombra a pin_b0 como Led
#define Led21 pin_c7//Nombra a pin_b0 como Led

#define Led22 pin_d0//Nombra a pin_b0 como Led
#define Led23 pin_d1//Nombra a pin_b0 como Led
#define Led24 pin_d2//Nombra a pin_b0 como Led
#define Led25 pin_d3//Nombra a pin_b0 como Led
#define Led26 pin_d4//Nombra a pin_b0 como Led
#define Led27 pin_d5//Nombra a pin_b0 como Led
#define Led28 pin_d6//Nombra a pin_b0 como Led
#define Led29 pin_d7//Nombra a pin_b0 como Led

#define Led30 pin_e0//Nombra a pin_b0 como Led
#define Led31 pin_e1//Nombra a pin_b0 como Led
#define Led32 pin_e2//Nombra a pin_b0 como Led
#define Led33 pin_b0//Nombra a pin_b0 como Led
#define Led34 pin_b0//Nombra a pin_b0 como Led
#define Led35 pin_b0//Nombra a pin_b0 como Led
#define Led36 pin_b2//Nombra a pin_b0 como Led
#define Led37 pin_b1//Nombra a pin_b0 como Led
#define Led38 pin_b2//Nombra a pin_b0 como Led
#define Led39 pin_b1//Nombra a pin_b0 como Led
#define Led40 pin_b2//Nombra a pin_b0 como Led
#define Led41 pin_a0//Nombra a pin_b0 como Led
#define Led42 pin_a1//Nombra a pin_b0 como Led
#define Led43 pin_e2//Nombra a pin_b0 como Led
#define Led44 pin_e0//Nombra a pin_b0 como Led
#define Led45 pin_e2//Nombra a pin_b0 como Led
#define Led46 pin_c4//Nombra a pin_b0 como Led
#define Led47 pin_c5//Nombra a pin_b0 como Led
#define Led48 pin_c3//Nombra a pin_b0 como Led

#define Retardo delay_ms(500)//Nombra a delay_ms() como Retardo

//Programa principal
void main(){

//Configuracion de puertos E/S 
SET_TRIS_B(0x00);//Configura el puerto B: 0=Salida; 1=Entrada
output_b(0x00); //Limpia el registro del puerto

//Estructura Programa principal
inicio://Etiqueta de retorno
output_high(led);//Pone en alto a led
retardo;//Demora
output_high(led1);//Pone en alto a led
retardo;//Demora
output_high(led2);//Pone en alto a led
retardo;//Demora
output_high(led3);//Pone en alto a led
retardo;//Demora
output_high(led4);//Pone en alto a led
retardo;//Demora
output_high(led5);//Pone en alto a led
retardo;//Demora
output_high(led6);//Pone en alto a led
retardo;//Demora
output_high(led7);//Pone en alto a led
retardo;//Demora
output_high(led8);//Pone en alto a led
retardo;//Demora
output_high(led9);//Pone en alto a led
retardo;//Demora
output_high(led10);//Pone en alto a led
retardo;//Demora
output_high(led11);//Pone en alto a led
retardo;//Demora
output_high(led12);//Pone en alto a led
retardo;//Demora
output_high(led13);//Pone en alto a led
retardo;//Demora
output_high(led14);//Pone en alto a led
retardo;//Demora
output_high(led15);//Pone en alto a led
retardo;//Demora
output_high(led16);//Pone en alto a led
retardo;//Demora
output_high(led17);//Pone en alto a led
retardo;//Demora
output_high(led18);//Pone en alto a led
retardo;//Demora
output_high(led19);//Pone en alto a led
retardo;//Demora
output_high(led20);//Pone en alto a led
retardo;//Demora
output_high(led21);//Pone en alto a led
retardo;//Demora
output_high(led22);//Pone en alto a led
retardo;//Demora
output_high(led23);//Pone en alto a led
retardo;//Demora
output_high(led24);//Pone en alto a led
retardo;//Demora
output_high(led25);//Pone en alto a led
retardo;//Demora
output_high(led26);//Pone en alto a led
retardo;//Demora
output_high(led27);//Pone en alto a led
retardo;//Demora
output_high(led28);//Pone en alto a led
retardo;//Demora
output_high(led29);//Pone en alto a led
retardo;//Demora
output_high(led30);//Pone en alto a led
retardo;//Demora
output_high(led31);//Pone en alto a led
retardo;//Demora
output_high(led32);//Pone en alto a led
retardo;//Demora
output_high(led33);//Pone en alto a led
retardo;
output_high(led34);//Pone en alto a led
retardo;
output_high(led35);//Pone en alto a led
retardo; 
output_high(led36);//Pone en alto a led
retardo; 
output_high(led37);//Pone en alto a led
retardo; 
output_high(led39);//Pone en alto a led
retardo; 
output_high(led40);//Pone en alto a led
retardo; 
output_high(led41);//Pone en alto a led
retardo;
output_high(led42);//Pone en alto a led
retardo;
output_high(led43);//Pone en alto a led
retardo;
output_high(led44);//Pone en alto a led
retardo;
output_high(led45);//Pone en alto a led
retardo;
output_high(led46);//Pone en alto a led
retardo;
output_high(led47);//Pone en alto a led
retardo;
output_high(led48);//Pone en alto a led
retardo;

output_low(led);//Pone en bajo a led
retardo;//Demora
output_low(led1);//Pone en bajo a led
retardo;//Demora
output_low(led2);//Pone en bajo a led
retardo;//Demora
output_low(led3);//Pone en bajo a led
retardo;//Demora
output_low(led4);//Pone en bajo a led
retardo;//Demora
output_low(led5);//Pone en bajo a led
retardo;//Demora
output_low(led6);//Pone en bajo a led
retardo;//Demora
output_low(led7);//Pone en bajo a led
retardo;//Demora
output_low(led8);//Pone en bajo a led
retardo;//Demora
output_low(led9);//Pone en bajo a led
retardo;//Demora
output_low(led10);//Pone en bajo a led
retardo;//Demora
output_low(led11);//Pone en bajo a led
retardo;//Demora
output_low(led12);//Pone en bajo a led
retardo;//Demora
output_low(led13);//Pone en bajo a led
retardo;//Demora
output_low(led14);//Pone en bajo a led
retardo;//Demora
output_low(led15);//Pone en bajo a led
retardo;//Demora
output_low(led16);//Pone en bajo a led
retardo;//Demora
output_low(led17);//Pone en bajo a led
retardo;//Demora
output_low(led18);//Pone en bajo a led
retardo;//Demora
output_low(led19);//Pone en bajo a led
retardo;//Demora
output_low(led20);//Pone en bajo a led
retardo;//Demora
output_low(led21);//Pone en bajo a led
retardo;//Demora
output_low(led22);//Pone en bajo a led
retardo;//Demora
output_low(led23);//Pone en bajo a led
retardo;//Demora
output_low(led24);//Pone en bajo a led
retardo;//Demora
output_low(led25);//Pone en bajo a led
retardo;//Demora
output_low(led26);//Pone en bajo a led
retardo;//Demora
output_low(led27);//Pone en bajo a led
retardo;//Demora
output_low(led28);//Pone en bajo a led
retardo;//Demora
output_low(led29);//Pone en bajo a led
retardo;//Demora
output_low(led30);//Pone en bajo a led
retardo;//Demora
output_low(led31);//Pone en bajo a led
retardo;//Demora
output_low(led32);//Pone en bajo a led
retardo;//Demora
output_low(led33);//Pone en bajo a led
retardo;
output_low(led34);//Pone en bajo a led
retardo;
output_low(led35);//Pone en bajo a led
retardo;
output_low(led36);//Pone en bajo a led
retardo;
output_low(led37);//Pone en bajo a led
retardo;
output_low(led38);//Pone en bajo a led
retardo;
output_low(led39);//Pone en bajo a led
retardo;
output_low(led40);//Pone en bajo a led
retardo;
output_low(led41);//Pone en bajo a led
retardo;
output_low(led42);//Pone en bajo a led
retardo;
output_low(led43);//Pone en bajo a led
retardo;
output_low(led44);//Pone en bajo a led
retardo;
output_low(led45);//Pone en bajo a led
retardo;
output_low(led46);//Pone en bajo a led
retardo;
output_low(led47);//Pone en bajo a led
retardo;
output_low(led48);//Pone en bajo a led
retardo;
goto inicio;//Regresa a la etiqueta inicio
}
