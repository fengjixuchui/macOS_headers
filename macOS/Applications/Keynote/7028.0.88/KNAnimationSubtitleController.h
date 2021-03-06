//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVPlayerItemLegibleOutputPushDelegate-Protocol.h"

@class KNAnimationSubtitleRenderer, KNPlaybackSession, NSArray, NSString;
@protocol MTLTexture, OS_dispatch_queue;

@interface KNAnimationSubtitleController : NSObject <AVPlayerItemLegibleOutputPushDelegate>
{
    KNAnimationSubtitleRenderer *_subtitleRenderer;
    NSObject<OS_dispatch_queue> *_subtitleQueue;
    struct os_unfair_lock_s _subtitleLock;
    struct CGSize _frameSize;
    id <MTLTexture> _subtitleTexture;
    NSArray *_subtitleStrings;
    KNPlaybackSession *_session;
}

- (void).cxx_destruct;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_1b6d18a9)arg4;
- (void)p_rasterizeSubtitleTextureIfNecessary;
@property(nonatomic) struct CGSize frameSize;
- (void)p_clearSubtitles;
- (void)p_setSubtitleTexture:(id)arg1;
- (id)subtitleTexture;
- (void)tearDownOnLegibleOutputProvider:(id)arg1;
- (void)setUpOnLegibleOutputProvider:(id)arg1;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

