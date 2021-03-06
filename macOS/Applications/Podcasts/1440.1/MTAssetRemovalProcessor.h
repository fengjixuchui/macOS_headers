//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTPodcastAndEpisodeProcessor.h"

@interface MTAssetRemovalProcessor : MTPodcastAndEpisodeProcessor
{
    BOOL _disabled;
}

@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
- (void)_removeDownloadAssetsForEpisodeUuids:(id)arg1 reason:(id)arg2;
- (void)disable;
- (void)enable;
- (void)episodeUuidObserver:(id)arg1 resultsChangedForPodcast:(id)arg2 withDeletedIds:(id)arg3 andInsertIds:(id)arg4;
- (id)episodePredicateForPodcast:(id)arg1;
- (id)podcastPredicate;

@end

