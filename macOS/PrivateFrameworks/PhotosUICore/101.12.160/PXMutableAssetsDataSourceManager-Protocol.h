//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet;

@protocol PXMutableAssetsDataSourceManager <NSObject>
@property(nonatomic) long long backgroundFetchOriginSection;
- (void)startBackgroundFetchIfNeeded;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (BOOL)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2;
@end

