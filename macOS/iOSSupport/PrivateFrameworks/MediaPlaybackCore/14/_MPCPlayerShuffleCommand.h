//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerCommand.h>

#import <MediaPlaybackCore/MPCPlayerShuffleCommand-Protocol.h>

@class NSArray, NSString;

@interface _MPCPlayerShuffleCommand : _MPCPlayerCommand <MPCPlayerShuffleCommand>
{
    BOOL _supportsChangeShuffle;
    BOOL _supportsAdvanceShuffle;
    long long _currentShuffleType;
    NSArray *_supportedShuffleTypes;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL supportsAdvanceShuffle; // @synthesize supportsAdvanceShuffle=_supportsAdvanceShuffle;
@property(nonatomic) BOOL supportsChangeShuffle; // @synthesize supportsChangeShuffle=_supportsChangeShuffle;
@property(retain, nonatomic) NSArray *supportedShuffleTypes; // @synthesize supportedShuffleTypes=_supportedShuffleTypes;
@property(nonatomic) long long currentShuffleType; // @synthesize currentShuffleType=_currentShuffleType;
- (id)advance;
- (id)setShuffleType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

