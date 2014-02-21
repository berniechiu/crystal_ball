//
//  BCCrystalBall.h
//  CrystalBall
//
//  Created by Bernie Chiu on 2014/2/11.
//  Copyright (c) 2014年 Bernie Chiu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCCrystalBall : NSObject {
    NSArray *_predictions;
}

- (NSArray *) predictions;
- (NSString *) randomPrediction;

@end
