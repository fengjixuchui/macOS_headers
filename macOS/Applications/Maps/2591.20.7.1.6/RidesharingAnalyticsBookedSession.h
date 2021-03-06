//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface RidesharingAnalyticsBookedSession : NSObject
{
    long long _statusIssue;
    NSMutableArray *_intentResponseFailures;
    BOOL _sessionEnded;
    BOOL _bookedUsingMaps;
    BOOL _cancelled;
    BOOL _contactedDriver;
    BOOL _viewedInProactiveTray;
    BOOL _tappedProactiveTrayItem;
    BOOL _viewedDetails;
    BOOL _invalidVehicleLocation;
    BOOL _missingVehicleLocation;
    unsigned long long _numberOfInstalledExtensions;
    unsigned long long _numberOfEnabledExtensions;
    NSString *_sessionId;
    NSString *_appVersion;
    NSString *_appIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(nonatomic) BOOL missingVehicleLocation; // @synthesize missingVehicleLocation=_missingVehicleLocation;
@property(nonatomic) BOOL invalidVehicleLocation; // @synthesize invalidVehicleLocation=_invalidVehicleLocation;
@property(nonatomic) BOOL viewedDetails; // @synthesize viewedDetails=_viewedDetails;
@property(nonatomic) BOOL tappedProactiveTrayItem; // @synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem;
@property(nonatomic) BOOL viewedInProactiveTray; // @synthesize viewedInProactiveTray=_viewedInProactiveTray;
@property(nonatomic) BOOL contactedDriver; // @synthesize contactedDriver=_contactedDriver;
@property(nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) BOOL bookedUsingMaps; // @synthesize bookedUsingMaps=_bookedUsingMaps;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) BOOL sessionEnded; // @synthesize sessionEnded=_sessionEnded;
- (void)mapsForegrounded;
- (void)mapsBackgrounded;
- (void)endSession;
- (void)captureIntent:(int)arg1 withFailure:(int)arg2;
- (void)captureStatusIssue:(long long)arg1;
@property(nonatomic) unsigned long long numberOfEnabledExtensions; // @synthesize numberOfEnabledExtensions=_numberOfEnabledExtensions;
@property(nonatomic) unsigned long long numberOfInstalledExtensions; // @synthesize numberOfInstalledExtensions=_numberOfInstalledExtensions;
- (id)init;

@end

