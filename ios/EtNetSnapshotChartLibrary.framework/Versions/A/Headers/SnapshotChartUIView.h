//
//  SnapshotChartUIView.h
//  EtNetSnapshotChartLibrary
//
//  Created by Wong Chi Hung on 17/8/2020.
//  Copyright © 2020 Wong Chi Hung. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ChartDataSet.h"

// TODO: ChartDrawing

NS_ASSUME_NONNULL_BEGIN

typedef void (^onDrawCompletionBlock)(BOOL onTouch);

@interface SnapshotChartUIView : UIView

    - (id) initWithFrame:(CGRect)frame;
    - (void)setChartDataSetArray:(NSMutableArray<ChartDataSet *> * _Nonnull)chartDataSetArray;
    - (void) setYesterdayClosePrice:(NSMutableDictionary * _Nonnull) yesterdayClosePrice;
    - (void)setOnTouchCompletionHandler:(onDrawCompletionBlock)in_blk;

@end

NS_ASSUME_NONNULL_END
