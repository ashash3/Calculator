//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Ashley Chou on 7/22/13.
//  Copyright (c) 2013 Ashley Chou. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
