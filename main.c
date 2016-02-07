#include <stdio.h>
 
 char* welcome();
 int main (){
    char s;
    printf ("%s",welcome());

    return 0;
  }
 
 char* welcome()
 {
 return "*** Welcome to Simpletron! ***\n"
        "*** Please enter your program one instruction ***\n"
        "*** (or data word) at a time. I will type the ***\n"
        "*** location number and a question mark (?).  ***\n"
        "*** You then type the word for that location. ***\n"
        "*** Type the sentinel -99999 to stop entering ***\n"
        "*** your program. ***\n";
}
