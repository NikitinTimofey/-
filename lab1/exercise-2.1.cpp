#include <iostream> 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> // подключаем математические функции 
#include <locale.h> // подключаем библиотеку локализации (для русского языка в консоли) 
using namespace std; 
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
 
int main(int argc, char** argv) { 
 setlocale(LC_ALL,"Russian"); // устанавливаем русскую локализацию в программе 
 float x, y, z, q, w, e, r, s; // декларируем необходимые переменные 
 //ввод переменных с клавиатуры 
 printf("Введите x:"); 
 scanf("%f",&x); 
 printf("Введите y:"); 
 scanf("%f",&y); 
 printf("Введите z:"); 
 scanf("%f",&z); 
  
 q=2*cos(x-2/3.0); 
 
 w=1/2.0+sin(y)*sin(y); 
 e=pow(z,2); 
 r=3-pow(z,2)/5.0; 
 
 s=(q/w)*(1+(e/r)); 
  
 printf("Результат: %0.4f", s); 
}
