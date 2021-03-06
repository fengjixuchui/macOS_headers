//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AOSUI/MMService.h>

#import <AOSUI/MMServicePreflightProtocol-Protocol.h>

@class NSError, NSImage, NSOperationQueue, NSString;

@interface MMFindMyMacService : MMService <MMServicePreflightProtocol>
{
    NSError *_fmmError;
    NSImage *_warningIcon;
    NSOperationQueue *_requesterQueue;
}

+ (id)_errorWithFMMErroCode:(unsigned long long)arg1;
@property(retain) NSImage *warningIcon; // @synthesize warningIcon=_warningIcon;
@property(retain) NSError *fmmError; // @synthesize fmmError=_fmmError;
- (BOOL)preflightForSignout:(id *)arg1 withWindow:(id)arg2 andDataclassActions:(id)arg3;
- (BOOL)hasPreflightAction;
- (id)acquireAuthRights:(unsigned long long)arg1;
- (void)showiCloudPasswordSheet:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)showSheetForWindow:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 defaultKeyEquivalent:(id)arg5 alternateButtonTitle:(id)arg6 alternateKeyEquivalent:(id)arg7 otherButtonTitle:(id)arg8 otherKeyEquivalent:(id)arg9 andHelpHandler:(CDUnknownBlockType)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (id)_accountDisplayName;
- (void)_servicePropertiesChanged:(id)arg1;
- (void)_serviceEnableChanged:(id)arg1;
- (void)openSecurity:(id)arg1;
- (BOOL)_isLocationServicesCapable;
- (BOOL)_areLocationServicesEnabled;
- (void)openEnergySaverPreferences:(id)arg1;
- (BOOL)_shouldShowWakeOnLAN;
- (BOOL)_alreadyActive;
- (id)_alreadyActiveDisplayName;
- (id)_alreadyActiveAccountID;
- (BOOL)_recoveryPartitionNeedsUpdate;
- (BOOL)_internalContainsRecoveryPartitionAndHasTRB;
- (BOOL)_containsRecoveryPartition;
- (unsigned long long)_recoveryPatitionCheckTimeout;
- (void)_updateStatus;
- (void)showFMMMissingWiFiSheet:(id)arg1;
- (void)showFMMAlreadyActiveSheet:(id)arg1;
- (void)showFMMNetworkOffSheet:(id)arg1;
- (void)showFMMMissingRecoveryPartitionSheet:(id)arg1;
- (void)showFMMLocationServicesOffSheet:(id)arg1;
- (void)showFMMEnableConfirmationSheet:(id)arg1 isAlreadyActive:(BOOL)arg2 creating:(BOOL)arg3;
- (void)willGainFocus;
- (void)didSelect;
- (void)_setEnabled:(BOOL)arg1 withRightsMask:(unsigned long long)arg2;
- (void)_showClientFailureSheet:(id)arg1 enabling:(BOOL)arg2 withError:(id)arg3;
- (void)_serviceFailed:(id)arg1;
- (void)showMoreInfo:(id)arg1;
- (void)setEnabled:(BOOL)arg1 creating:(BOOL)arg2 withWindow:(id)arg3;
- (BOOL)canEnable:(id *)arg1;
- (id)icon;
- (id)_iconForError:(id)arg1;
- (id)_fmmWarningIcon;
- (id)_fmmIcon;
- (void)finalize;
- (void)dealloc;
- (id)initWithServiceID:(id)arg1 forAccount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

