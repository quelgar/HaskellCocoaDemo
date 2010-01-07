//
//  ConverterController.m
//  Haskell Objective-C Demo
//
//  Created by Lachlan O'Dea on 7/01/10.
//  Copyright 2010 CA. All rights reserved.
//

#import "ConverterController.h"


@implementation ConverterController

- (id)init {
    self = [super init];
    if (self != nil) {
        converter = [[Converter alloc] init];
    }
    return self;
}

- (IBAction)convert:(id)sender {
    converter.sourceCurrencyAmount = dollarField.floatValue;
    converter.rate = rateField.floatValue;
    float const amount = [converter convertCurrency];
    amountField.floatValue = amount;
    [rateField selectText:self];
}

@end
