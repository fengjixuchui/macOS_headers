//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface WDSessionNotificationManager : NSObject
{
    NSMutableDictionary *_handlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (void)unregisterHandler:(unsigned long long)arg1;
- (unsigned long long)registerForNotification:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dispatchNotification:(id)arg1 payload:(id)arg2;
- (id)init;

@end

