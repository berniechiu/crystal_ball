//
//  BCViewController.h
//  CrystalBall
//
//  Created by Bernie Chiu on 2014/2/10.
//  Copyright (c) 2014年 Bernie Chiu. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BCCrystalBall;

@interface BCViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) BCCrystalBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (void)makePrediction;

@end
