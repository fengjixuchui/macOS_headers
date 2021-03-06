//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ProviderConfiguration : NSObject
{
    NSDictionary *_configuration;
    BOOL _providerOff;
    BOOL _socialEngineeringThreatTypeOff;
    BOOL _malwareThreatTypeOff;
    BOOL _unwantedSoftwareThreatTypeOff;
}

@property(readonly, nonatomic) BOOL unwantedSoftwareThreatTypeOff; // @synthesize unwantedSoftwareThreatTypeOff=_unwantedSoftwareThreatTypeOff;
@property(readonly, nonatomic) BOOL malwareThreatTypeOff; // @synthesize malwareThreatTypeOff=_malwareThreatTypeOff;
@property(readonly, nonatomic) BOOL socialEngineeringThreatTypeOff; // @synthesize socialEngineeringThreatTypeOff=_socialEngineeringThreatTypeOff;
@property(nonatomic) BOOL providerOff; // @synthesize providerOff=_providerOff;
- (void).cxx_destruct;
- (BOOL)isEqualToConfiguration:(id)arg1;
- (void)_parseConfiguration:(id)arg1;
- (id)_currentRegionCode;
- (void)_configureToBeOff;
- (void)_configureToUseDefaultValues;
- (id)initWithConfiguration:(id)arg1;

@end

