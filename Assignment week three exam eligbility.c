#include <stdio.h>

int main(){
    float attendance;
    float marks;

    printf("Enter attendance percentage:");
    scanf("%f", &attendance);

    printf("Enter average marks:");
    scanf("%f", &marks);

    if(attendance >=75 && marks >=40){
        printf("Eligible for exams.\n");
      } else{
         printf("Not eligible for exams.\n");
      }
      return 0;
}