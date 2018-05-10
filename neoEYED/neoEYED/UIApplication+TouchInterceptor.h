//
//  UIApplication+TouchInterceptor.h
//  neoEYED
//
//  Created by TechFlitter on 24/08/17.
//  Copyright © 2017 NeoEyed. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIApplication (TouchInterceptor)

@property (nonatomic, assign) NSDictionary *startPoint;
@property (nonatomic, assign) NSNumber *zoomGesture;

@end
