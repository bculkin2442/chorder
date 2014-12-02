//
//  main.c
//  chorder
//
//  Produce letters from short sequences of chords
//  Created by Benjamin Culkin on 12/1/14.
//  Copyright (c) 2014 bculkin. All rights reserved.
//

#include <stdio.h>

#include "commands.h"
// Do command processing for an initial character
//  Return is non-zero until someone wants to exit
int handlecom(char c);

// Main input loop
int main(int argc, const char * argv[]) {
    
    // Introduce ourselves
    printf("Welcome to Chorder Alpha v0\n");
    printf("Please type ? for more help.\n");
    
    // Print the prompt
    printf("> ");
    
    // Run commands based on first character
    while (handlecom(getchar())) {
        // Reprint the prompt for the next command
        printf("> ");
    }
    
    // Thank for the use
    printf("Thank you for using Chorder.\n");
    return 0;
}

// Do command processing for an initial character
//  Return is non-zero until someone wants to exit
int handlecom(char c) {
    // Process the command
    switch (c) {
        case '?':  // The user wants help with something
                   // Start the help thingy
            helpcom();
            break;
        case 'x':   // The user wants to exit
                    // Do so without ceremony. (It may come later)
            return 0;
        case 'e':   // The user wants to enter some text.
                    // Start up the texter
            entercom();
            break;
        case 'v':   // The user wants the version
            printf("Chorder Alpha v0");
            break;
        default:    // We have no clue what the user wants
                    // Ask 'em again, as well as remind them about help
            printf("%c is an unrecognized command. ? will invoke help.\n", c);
            break;
    }
    // In the absence of evidence to the contrary, we're successful
    return 1;
}