//
//  ChartData.h
//  EtNetSnapshotChartLibrary
//
//  Created by Wong Chi Hung on 18/8/2020.
//  Copyright © 2020 Wong Chi Hung. All rights reserved.
//

#import "ChartDataSet.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChartData : NSObject

    - (void) setStockChartData: (NSArray * _Nonnull) stockChartData;
    - (void) setStockChartHeader: (NSMutableDictionary * _Nonnull) stockChartHeader;
    - (void) setYesterdayClosePrice: (NSMutableDictionary * _Nonnull) yesterdayClosePrice;
    - (void) setChartDataSetArray: (NSMutableArray<ChartDataSet*> * _Nonnull) chartDataSetArray;

    - (NSArray *) getStockChartData;
    - (NSMutableDictionary *) getStockChartHeader;
    - (NSMutableDictionary *) getYesterdayClosePrice;
    - (NSMutableArray *) getChartDataSetArray;

@end

NS_ASSUME_NONNULL_END
