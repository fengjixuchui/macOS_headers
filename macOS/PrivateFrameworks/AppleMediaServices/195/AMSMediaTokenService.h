//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMSBagConsumer.h"
#import "AMSBagConsumer_Project.h"
#import "AMSMediaTokenServiceProtocol.h"

@class ACAccount, AMSMediaToken, AMSMediaTokenServiceStore, AMSMediaTokenServiceThrottler, AMSProcessInfo, AMSURLSession, NSObject<OS_dispatch_queue>, NSString;

@interface AMSMediaTokenService : NSObject <AMSBagConsumer_Project, AMSBagConsumer, AMSMediaTokenServiceProtocol>
{
    _Bool _enabled;
    BOOL _URLKnownToBeTrusted;
    AMSURLSession *_session;
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSString *_clientIdentifier;
    AMSProcessInfo *_clientInfo;
    NSString *_clientVersion;
    AMSMediaTokenServiceThrottler *_throttler;
    NSObject<OS_dispatch_queue> *_tokenFetchQueue;
    AMSMediaTokenServiceStore *_tokenStore;
    double _refreshPercentage;
    double _refreshTime;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property BOOL URLKnownToBeTrusted; // @synthesize URLKnownToBeTrusted=_URLKnownToBeTrusted;
@property double refreshTime; // @synthesize refreshTime=_refreshTime;
@property double refreshPercentage; // @synthesize refreshPercentage=_refreshPercentage;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly) AMSMediaTokenServiceStore *tokenStore; // @synthesize tokenStore=_tokenStore;
@property(readonly) NSObject<OS_dispatch_queue> *tokenFetchQueue; // @synthesize tokenFetchQueue=_tokenFetchQueue;
@property(readonly) AMSMediaTokenServiceThrottler *throttler; // @synthesize throttler=_throttler;
@property(readonly) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3;
- (id)_tokenRequestWithError:(id *)arg1;
- (BOOL)_shouldReturnMediaToken:(id)arg1;
- (BOOL)_shouldRefreshMediaToken:(id)arg1;
- (void)_refreshMediaTokenIfNeeded:(id)arg1;
- (id)_fetchToken;
- (id)_fetchBagProperties;
- (void)invalidateMediaToken;
- (id)fetchMediaToken;
@property __weak AMSURLSession *session; // @synthesize session=_session;
@property(retain) NSString *keychainAccessGroup;
@property(retain) AMSMediaToken *cachedMediaToken;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 bag:(id)arg3;
- (id)initWithClientIdentifier:(id)arg1 bag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

