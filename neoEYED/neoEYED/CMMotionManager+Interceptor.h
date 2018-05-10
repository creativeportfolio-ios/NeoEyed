//
//  CMMotionManager+Interceptor.h
//  neoEYED
//
//  Created by TechFlitter on 24/08/17.
//  Copyright © 2017 NeoEyed. All rights reserved.
//

#import <CoreMotion/CoreMotion.h>
#import <UIKit/UIKit.h>

@interface CMMotionManager (Interceptor)

@property (nonatomic, assign) UIDeviceOrientation deviceOrientation;

@end
