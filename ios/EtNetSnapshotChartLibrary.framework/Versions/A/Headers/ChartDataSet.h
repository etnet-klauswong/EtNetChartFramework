//
//  ChartDataSet.h
//  EtNetSnapshotChartLibrary
//
//  Created by Wong Chi Hung on 17/8/2020.
//  Copyright © 2020 Wong Chi Hung. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChartDataSet : NSObject

    - (float) getCurrentPrice;
    - (NSString*) getCurrentDate;
    - (CGPoint) getCurrentPriceCGPoint;
    - (void) setCurrentPriceCGPoint: (CGPoint) selfCurrentPriceCGPoint;
    - (id) initWithCurrentDate:(NSString*) currentDate initWithCurrentPrice:(float) currentPrice;

@end

NS_ASSUME_NONNULL_END
