//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface iTermMetalIMEInfo : NSObject
{
    CDStruct_ffe6b7c1 _cursorCoord;
    CDStruct_7a47e81c _markedRange;
}

@property(nonatomic) CDStruct_7a47e81c markedRange; // @synthesize markedRange=_markedRange;
@property(nonatomic) CDStruct_1ef3fb1f cursorCoord; // @synthesize cursorCoord=_cursorCoord;
- (void)setRangeEnd:(CDStruct_1ef3fb1f)arg1;
- (void)setRangeStart:(CDStruct_1ef3fb1f)arg1;
- (id)description;

@end

