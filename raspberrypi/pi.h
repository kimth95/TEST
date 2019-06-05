#include <stdio.h>

// wPi. 4(BCM. 23, Physical. 16)
#define FAN_IA  4

// 미풍
static void Weak() {
  softPwmWrite(FAN_IA, 666);
  printf("미풍\n");
  delay(5000);
}
// 약풍
static void Medium() {
  softPwmWrite(FAN_IA, 333);
  printf("약풍\n");
  delay(5000);
}
// 강풍
static void Strong() {
  softPwmWrite(FAN_IA, 0);
  printf("강풍\n");
  delay(5000);
}
