//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPAVItem, MPMusicPlayerQueueDescriptor, NSData, NSDictionary, NSString;

@interface MPPlaybackContext : NSObject <NSSecureCoding, NSCopying>
{
    MPAVItem *_playerCurrentItem;
    BOOL _supportsAccountRectification;
    long long _actionAfterQueueLoad;
    long long _shuffleType;
    long long _repeatType;
    NSString *_playActivityFeatureName;
    NSData *_playActivityRecommendationData;
    MPMusicPlayerQueueDescriptor *_queueDescriptor;
    NSString *_siriAssetInfo;
    NSString *_siriReferenceIdentifier;
    NSDictionary *_siriWHAMetricsInfo;
    NSString *_sessionIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (Class)queueFeederClass;
- (void).cxx_destruct;
@property(nonatomic) BOOL supportsAccountRectification; // @synthesize supportsAccountRectification=_supportsAccountRectification;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(copy, nonatomic) NSDictionary *siriWHAMetricsInfo; // @synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo;
@property(copy, nonatomic) NSString *siriReferenceIdentifier; // @synthesize siriReferenceIdentifier=_siriReferenceIdentifier;
@property(copy, nonatomic) NSString *siriAssetInfo; // @synthesize siriAssetInfo=_siriAssetInfo;
@property(copy, nonatomic) MPMusicPlayerQueueDescriptor *queueDescriptor; // @synthesize queueDescriptor=_queueDescriptor;
@property(copy, nonatomic) NSData *playActivityRecommendationData; // @synthesize playActivityRecommendationData=_playActivityRecommendationData;
@property(copy, nonatomic) NSString *playActivityFeatureName; // @synthesize playActivityFeatureName=_playActivityFeatureName;
@property(nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property(nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(nonatomic) long long actionAfterQueueLoad; // @synthesize actionAfterQueueLoad=_actionAfterQueueLoad;
- (void)clearStartItem;
@property(readonly, nonatomic, getter=isSupported) BOOL supported;
@property(readonly, nonatomic) BOOL containsRestorableContent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL shouldBecomeActive;
- (id)init;

@end

