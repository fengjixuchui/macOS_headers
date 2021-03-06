//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKConfigurationSource.h"

@class NSString;

@interface CRKNotifyingConfigurationSource : NSObject <CRKConfigurationSource>
{
    id <CRKConfigurationSource> mBaseSource;
    NSString *mNotificationName;
}

- (void).cxx_destruct;
- (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchConfiguration:(CDUnknownBlockType)arg1;
- (id)initWithConfigurationSource:(id)arg1 notificationName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

