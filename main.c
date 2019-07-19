/* 
 * File:   main.c
 * Author: karthikkalyan
 *
 * Created on July 9, 2011, 9:18 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/*
 * 
 */
char *AnotherString = "Hello Everyone"; //Declaring a Global Variable which here is nothing but a pointer
int main() {

    printf("Running....\n");
    /*
     *    Call WriteMyString() - defined in another file
     */
    WriteMyString(MY_STRING);
    printf("Finished.\n");
}

