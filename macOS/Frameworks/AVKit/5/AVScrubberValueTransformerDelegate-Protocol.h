//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVScrubberValueTransformer;

@protocol AVScrubberValueTransformerDelegate <NSObject>

@optional
- (double)scrubberValueTransformer:(AVScrubberValueTransformer *)arg1 reverseTransformedTimeInterval:(double)arg2;
- (double)scrubberValueTransformer:(AVScrubberValueTransformer *)arg1 transformedTimeInterval:(double)arg2;
- (BOOL)scrubberValueTransformerRequiresTransformation:(AVScrubberValueTransformer *)arg1;
@end

