//
//  ConverterController.h
//  Haskell Objective-C Demo
//
//  Created by Lachlan O'Dea on 7/01/10.
//  Copyright 2010 CA. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Converter.h"


@interface ConverterController : NSObject {

    IBOutlet NSTextField *amountField;
    IBOutlet NSTextField *dollarField;
    IBOutlet NSTextField *rateField;
    
    Converter* converter;
    
}

- (IBAction)convert:(id)sender;

@end
