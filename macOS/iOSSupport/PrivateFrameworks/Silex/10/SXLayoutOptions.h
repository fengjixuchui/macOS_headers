//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SXColumnLayout, UITraitCollection;

@interface SXLayoutOptions : NSObject
{
    SXColumnLayout *_columnLayout;
    struct CGSize _viewportSize;
    UITraitCollection *_traitCollection;
    NSString *_contentSizeCategory;
    long long _bundleSubscriptionStatus;
    long long _channelSubscriptionStatus;
    BOOL _testing;
    unsigned long long _viewingLocation;
    double _contentScaleFactor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor=_contentScaleFactor;
@property(readonly, nonatomic) unsigned long long viewingLocation; // @synthesize viewingLocation=_viewingLocation;
@property(readonly, nonatomic) BOOL testing; // @synthesize testing=_testing;
@property(readonly, nonatomic) long long channelSubscriptionStatus; // @synthesize channelSubscriptionStatus=_channelSubscriptionStatus;
@property(readonly, nonatomic) long long bundleSubscriptionStatus; // @synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus;
@property(readonly, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
@property(readonly, nonatomic) SXColumnLayout *columnLayout; // @synthesize columnLayout=_columnLayout;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)diffWithLayoutOptions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithColumnLayout:(id)arg1 viewportSize:(struct CGSize)arg2 traitCollection:(id)arg3 contentSizeCategory:(id)arg4 bundleSubscriptionStatus:(long long)arg5 channelSubscriptionStatus:(long long)arg6 testing:(BOOL)arg7 viewingLocation:(unsigned long long)arg8 contentScaleFactor:(double)arg9;

@end

