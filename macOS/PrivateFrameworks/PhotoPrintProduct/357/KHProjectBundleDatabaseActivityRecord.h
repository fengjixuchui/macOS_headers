//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface KHProjectBundleDatabaseActivityRecord : NSObject
{
    NSString *_reason;
    NSString *_identifier;
    NSArray *_callStackSymbols;
    NSDate *_startDate;
    double _elapsedTimeInterval;
}

@property(readonly) double elapsedTimeInterval; // @synthesize elapsedTimeInterval=_elapsedTimeInterval;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) NSArray *callStackSymbols; // @synthesize callStackSymbols=_callStackSymbols;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)initWithReason:(id)arg1;

@end

