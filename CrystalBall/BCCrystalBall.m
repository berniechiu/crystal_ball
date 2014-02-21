//
//  BCCrystalBall.m
//  CrystalBall
//
//  Created by Bernie Chiu on 2014/2/11.
//  Copyright (c) 2014年 Bernie Chiu. All rights reserved.
//

#import "BCCrystalBall.h"

@implementation BCCrystalBall

- (NSArray *) predictions {
    if (_predictions == nil) {
        _predictions = [[NSArray alloc] initWithObjects:@"這是命中註定",
                                                        @"通常結果就是這樣",
                                                        @"所有的徵兆似乎傾向如此",
                                                        @"眾星群似乎還未連成一線",
                                                        @"結果是否定的",
                                                        @"你最好別知道",
                                                        @"集中注意力再問一次",
                                                        @"現在很難回答", nil];
    }
    
    return _predictions;
}

- (NSString*) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
