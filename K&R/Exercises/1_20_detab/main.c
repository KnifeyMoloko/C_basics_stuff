#include <stdio.h>
#include <limits.h>
#define LINE LINE_MAX
#define STOP 8

int main() {
    /* This program is an attempt at Exercise 1_20 in the K&R. 'Detab' aims at formatting its input using a predefined
    /* tab pattern, i.e. the user inserted tabs should be spaced out to the nearest tab column. In other words, the text
    /* if the column alignment is 'every n columns', the program will see how far the tabbed text is from the next tab
    /* stop and replace that space with the required number of spaces.*/

    int lineLimit = LINE; // define maximum line length by using LINE_MAX macro
    int tabStopWidth = STOP; // define tab stop width
    int numOfTabStops = LINE / STOP; // calculate the number of tab stops
    printf("%d\t %d\t %d\n", lineLimit, tabStopWidth, numOfTabStops);

    //TODO: get input
    //TODO: for every encountered, get tab position in line
    //TODO: calculate how far is the tab's position from the next tab stop
    //TODO: if the tab is at the tab stops position
    //TODO: remove the tab
    //TODO: insert number of spaces == STOP
    //TODO: if not
    //TODO: remove the tab
    //TODO: insert the number of spaces required to space out to the next tab stop
    return 0;
}