//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface NetworkConfigurationController : NSObject
{
    struct __SCDynamicStore *_store;
    NSTimer *_notificationTimer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_postNetworkChangeNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end

