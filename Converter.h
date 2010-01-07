//
//  Converter.h
//  Haskell Objective-C Demo
//
//  Created by Lachlan O'Dea on 7/01/10.
//  Copyright 2010 CA. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface Converter : NSObject {

    float sourceCurrencyAmount;
    float rate;
    
}

@property(readwrite) float sourceCurrencyAmount;
@property(readwrite) float rate;

- (float)convertCurrency;

@end
