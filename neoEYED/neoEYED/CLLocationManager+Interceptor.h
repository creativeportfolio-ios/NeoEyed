//
//  CLLocationManager+Interceptor.h
//  neoEYED
//
//  Created by TechFlitter on 24/08/17.
//  Copyright © 2017 NeoEyed. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

@interface CLLocationManager (Interceptor) <CLLocationManagerDelegate>

@property (nonatomic, assign) id<CLLocationManagerDelegate> locationDelegate;


@end
