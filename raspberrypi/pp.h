#include <wiringPi.h>
#include <softPwm.h>
#include <stdio.h>

#define FAN_IA  4

// 미풍
static void Weak() {
  printf("미풍\n"); 
  softPwmWrite(FAN_IA, 666);
 }
// 약풍
static void Medium() {
  printf("약풍\n");
  softPwmWrite(FAN_IA, 333);
}
// 강풍
static void Strong() {
  printf("강풍\n");
  softPwmWrite(FAN_IA, 0);
}
//stop
static void Stop(){
 printf("stop\n");
 softPwmWrite(FAN_IA, 999);
}
