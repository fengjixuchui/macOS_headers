//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDIDSMessageTransport.h>

@class HMDCompanionManager, HMDWatchManager;

@interface HMDIDSProxyMessageTransport : HMDIDSMessageTransport
{
    HMDWatchManager *_watchManager;
    HMDCompanionManager *_companionManager;
}

+ (BOOL)transportSupportsDevice:(id)arg1;
+ (long long)priorityForMessage:(id)arg1;
+ (unsigned long long)restriction;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDCompanionManager *companionManager; // @synthesize companionManager=_companionManager;
@property(readonly, nonatomic) HMDWatchManager *watchManager; // @synthesize watchManager=_watchManager;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)sendMessage:(id)arg1 fromHandle:(id)arg2 destination:(id)arg3 priority:(long long)arg4 timeout:(double)arg5 options:(unsigned long long)arg6 error:(id *)arg7;
- (BOOL)isDeviceConnected:(id)arg1;
- (BOOL)canSendMessage:(id)arg1;
- (int)awdTransportType;
- (id)watchDeviceForDevice:(id)arg1;
- (id)deviceForHandle:(id)arg1;
- (id)deviceForSenderContext:(id)arg1;
- (id)remoteMessageFromMessage:(id)arg1;
- (long long)qualityOfService;
- (BOOL)isSecure;
- (id)initWithAccountRegistry:(id)arg1;

@end

