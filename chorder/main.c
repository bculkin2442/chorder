//
//  main.c
//  chorder
//
//  Produce letters from short sequences of chords
//  Created by Benjamin Culkin on 12/1/14.
//  Copyright (c) 2014 bculkin. All rights reserved.
//

#include <stdio.h>

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
    return 0;
}

// Do command processing for an initial character
//  Return is non-zero until someone wants to exit
int handlecom(char c) {
    // If nobody does anything, nothing happens
    return 0;
}