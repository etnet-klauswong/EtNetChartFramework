//
//  SnapshotChartView.h
//  EtNetSnapshotChartLibrary
//
//  Created by Wong Chi Hung on 17/8/2020.
//  Copyright © 2020 Wong Chi Hung. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "SnapshotChartUIView.h"

// Init the framework first
//
NS_ASSUME_NONNULL_BEGIN

@interface SnapshotChartView : NSObject
    - (void) pvCGPoint: (CGPoint) referOrigin pvCGSize: (CGSize) referCGSize;
    - (SnapshotChartUIView*) getSnapshotChartUIView;
    - (void) updateChartView: (SnapshotChartUIView*) referChartView;
    - (void) loadChartDataStockCode: (NSString *) stockCode loadChartDateType: (NSString *) dataType;
@end

NS_ASSUME_NONNULL_END
