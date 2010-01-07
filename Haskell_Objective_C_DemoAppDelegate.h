//
//  Haskell_Objective_C_DemoAppDelegate.h
//  Haskell Objective-C Demo
//
//  Created by Lachlan O'Dea on 7/01/10.
//  Copyright 2010 CA. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Haskell_Objective_C_DemoAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
