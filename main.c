// Author: Justin Maines
// Collaborator: Corey Freas cxf5302@psu.edu
// Collaborator: Abel Ismael agi5031@psu.edu
// Collaborator: Kunmao Yu kzy5155@psu.edu
// Section: O12R
// Breakout: 4
#include <stdio.h>
#include <readline/readline.h>
#include<stdlib.h>

int main(void) {
  char *gradestr = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(gradestr);
  char* letterGrade;
  if(grade >= 93.0) {
    letterGrade = "A";
  } else if(grade>=90.0) {
    letterGrade = "A-";
  } else if(grade>=87.0) {
    letterGrade = "B+";
  } else if(grade>=83.0) {
    letterGrade = "B";
  } else if(grade>=80.0) {
    letterGrade = "B-";
  } else if(grade>=77.0) {
    letterGrade = "C+";
  } else if(grade>=70.0) {
    letterGrade = "C";
  } else if(grade>=60.0) {
    letterGrade = "D";
  } else {
    letterGrade = "F";
  }
  printf("Your letter grade for CMPSC 131 is %s.\n", letterGrade);
}