//
//  Converter.m
//  Haskell Objective-C Demo
//
//  Created by Lachlan O'Dea on 7/01/10.
//  Copyright 2010 CA. All rights reserved.
//

#import "Converter.h"
#import "HaskellConvert_stub.h"

@implementation Converter

@synthesize sourceCurrencyAmount, rate;

- (float)convertCurrency {
    return convert_hs(sourceCurrencyAmount, rate);
}

@end
