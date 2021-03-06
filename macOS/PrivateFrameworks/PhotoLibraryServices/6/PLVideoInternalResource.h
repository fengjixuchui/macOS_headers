//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLVideoResource.h"

@class NSString;

@interface PLVideoInternalResource : NSObject <PLVideoResource>
{
    id <PLResource> _backingResource;
}

@property(readonly, nonatomic) id <PLResource> backingResource; // @synthesize backingResource=_backingResource;
- (void).cxx_destruct;
- (id)fileURLIfLocal;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)arg1;
- (BOOL)isMediumHighQuality;
- (BOOL)isStreamable;
- (BOOL)isRemotelyAvailable;
- (BOOL)isPlayable;
- (BOOL)isLocallyGeneratable;
- (BOOL)isLocallyAvailable;
- (BOOL)isOriginalVideoComplement;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBackingResource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

