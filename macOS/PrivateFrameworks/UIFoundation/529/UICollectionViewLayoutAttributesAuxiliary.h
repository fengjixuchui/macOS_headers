//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface UICollectionViewLayoutAttributesAuxiliary : NSObject <NSCopying>
{
    double fractionIntoEndZone;
    double distanceIntoEndZone;
    BOOL floating;
}

@property(getter=isFloating) BOOL floating; // @synthesize floating;
@property double distanceIntoEndZone; // @synthesize distanceIntoEndZone;
@property double fractionIntoEndZone; // @synthesize fractionIntoEndZone;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

