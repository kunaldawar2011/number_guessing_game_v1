#include <stdio.h>
int main(){
  char name;
  int Number_choosed = 85;
  int number_entered_by_user;
  int i = 1;
  
  printf("*********Number Guessing Game v1.0.0 (C)******\n");
  printf("We have choosed a number between 1 to 100\n");
  while (1) {
    printf("Enter Your number:- ");
    scanf("%d", &number_entered_by_user);
    if (number_entered_by_user == Number_choosed) {
      printf("You won the number is %d in attempts %d\n", Number_choosed, i);
      break;
    }
    else if (number_entered_by_user > Number_choosed) {
        printf("Too High please Choose Lower Number\n"); 
    }
    else if (number_entered_by_user < Number_choosed) {
        printf("Too Low please Choose Higher Number\n");
    }
    i++;
  }
  printf("We will also play next time\nBye, Bye\n");
  return 0;
}