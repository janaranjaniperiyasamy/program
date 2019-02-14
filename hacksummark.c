#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int i,a=0;
  if (number_of_students==1)
  {
    a=0;
  }
  else{
      if(gender=='b')
      {
    for (i = 0; i < number_of_students; i+2) {
    //scanf("%d",&marks[i]);
          a=a+(*(marks+i));

    }}
    if(gender=='g'){
        for (i = 1; i < number_of_students; i+2) {
           // scanf("%d",&marks[i]);
    
          a=a+(*(marks+i));

    }
    }}
  return a;
}



int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
