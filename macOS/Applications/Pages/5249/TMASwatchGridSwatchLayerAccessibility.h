//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TMASwatchGridSwatchLayerAccessibility_super.h"

#import "TMASwatchGridViewAccessibilitySwatchLayer-Protocol.h"

@class CALayer, NSString, TMASwatchGridViewAccessibility;

@interface TMASwatchGridSwatchLayerAccessibility : __TMASwatchGridSwatchLayerAccessibility_super <TMASwatchGridViewAccessibilitySwatchLayer>
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (void)tsaxSetLayerParentGrid:(id)arg1;
@property(readonly, nonatomic) CALayer *tsaxContainerLayer;
@property(readonly, nonatomic) struct CGRect tsaxFrameInViewCoordinates;
@property(readonly, nonatomic) struct CGRect tsaxFrameInScreenCoordinates;
@property(readonly, nonatomic) id tsaxSwatch;
@property(readonly, nonatomic) BOOL tsaxIsImageSwatch;
@property(readonly, nonatomic) BOOL tsaxIsActionSwatch;
@property(readonly, nonatomic) BOOL tsaxIsBlankSwatch;
@property(readonly, nonatomic) NSString *tsaxSwatchDescription;
@property(readonly, nonatomic) BOOL tsaxParentGridHasOneOrZeroSwatches;
@property(readonly, nonatomic) BOOL tsaxSwatchLayerIsEnabled;
@property(nonatomic, setter=tsaxSetParentGrid:) __weak TMASwatchGridViewAccessibility *tsaxParentGrid;
- (id)tsaxTarget;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

