//
//  main.m
//  Haskell Objective-C Demo
//
//  Created by Lachlan O'Dea on 7/01/10.
//  Copyright 2010 CA. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include "HsFFI.h"

int main(int argc, char *argv[])
{
    hs_init(&argc, &argv);
    int const result = NSApplicationMain(argc,  (const char **) argv);
    hs_exit();
    return result;
}
