#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
int main(){
while(1)
if (getch() == '\033') { // if the first value is esc
    getch(); // skip the [
    switch(getch()) { // the real value
        case 'A':
            // code for arrow up
            break;
        case 'B':
            // code for arrow down
            break;
        case 'C':
            // code for arrow right
            break;
        case 'D':
            // code for arrow left
            break;
    }
}
}