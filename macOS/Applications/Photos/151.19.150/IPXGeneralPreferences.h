//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPreferencesModule.h>

#import "PXPhotoLibraryUIChangeObserver-Protocol.h"
#import "PXSettingsKeyObserver-Protocol.h"

@class IPXAppController, IPXiCloudConfiguration, NSButton, NSLayoutConstraint, NSObject, NSPathControl, NSPopUpButton, NSString, NSTextField, PHFetchResult, PHPhotoLibrary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IPXGeneralPreferences : NSPreferencesModule <PXPhotoLibraryUIChangeObserver, PXSettingsKeyObserver>
{
    IPXAppController *_appController;
    NSObject<OS_dispatch_queue> *_photoAnalysisDefaultsQueue;
    BOOL _blacklistedMemoriesResetInProgress;
    BOOL _currentLibraryIsSystemLibrary;
    BOOL _enableBlockedMemoriesButton;
    BOOL _showsExtraPreferences;
    int _systemLibraryChangeToken;
    IPXiCloudConfiguration *_cloudConfiguration;
    NSPathControl *_currentLibraryPathControl;
    NSButton *_importByReferenceCheckbox;
    NSButton *_publishPlacesCheckbox;
    NSButton *_autoplayVideos;
    NSTextField *_autoplayVideosLabel;
    NSButton *_showHolidayEvents;
    NSPopUpButton *_printProductsCountryPopupButton;
    NSButton *_showMemoriesNotificationCheckbox;
    NSButton *_resetBlacklistedMemoryFeaturesButton;
    NSLayoutConstraint *_photosSectionBottomConstraint;
    NSLayoutConstraint *_extraPreferencesSectionBottomConstraint;
    NSTextField *_extraPreferencesSectionTitleLabel;
    NSButton *_extraPreferencesCheckbox;
    NSTextField *_extraPreferencesDescriptionTextField;
    PHPhotoLibrary *_currentPhotoLibrary;
    PHFetchResult *_blacklistedMemoriesFetch;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setShowsExtraPreferences:) BOOL showsExtraPreferences; // @synthesize showsExtraPreferences=_showsExtraPreferences;
@property(retain, nonatomic) PHFetchResult *blacklistedMemoriesFetch; // @synthesize blacklistedMemoriesFetch=_blacklistedMemoriesFetch;
@property(retain, nonatomic) PHPhotoLibrary *currentPhotoLibrary; // @synthesize currentPhotoLibrary=_currentPhotoLibrary;
@property(nonatomic) int systemLibraryChangeToken; // @synthesize systemLibraryChangeToken=_systemLibraryChangeToken;
@property BOOL enableBlockedMemoriesButton; // @synthesize enableBlockedMemoriesButton=_enableBlockedMemoriesButton;
@property BOOL currentLibraryIsSystemLibrary; // @synthesize currentLibraryIsSystemLibrary=_currentLibraryIsSystemLibrary;
@property __weak NSTextField *extraPreferencesDescriptionTextField; // @synthesize extraPreferencesDescriptionTextField=_extraPreferencesDescriptionTextField;
@property __weak NSButton *extraPreferencesCheckbox; // @synthesize extraPreferencesCheckbox=_extraPreferencesCheckbox;
@property __weak NSTextField *extraPreferencesSectionTitleLabel; // @synthesize extraPreferencesSectionTitleLabel=_extraPreferencesSectionTitleLabel;
@property __weak NSLayoutConstraint *extraPreferencesSectionBottomConstraint; // @synthesize extraPreferencesSectionBottomConstraint=_extraPreferencesSectionBottomConstraint;
@property __weak NSLayoutConstraint *photosSectionBottomConstraint; // @synthesize photosSectionBottomConstraint=_photosSectionBottomConstraint;
@property __weak NSButton *resetBlacklistedMemoryFeaturesButton; // @synthesize resetBlacklistedMemoryFeaturesButton=_resetBlacklistedMemoryFeaturesButton;
@property __weak NSButton *showMemoriesNotificationCheckbox; // @synthesize showMemoriesNotificationCheckbox=_showMemoriesNotificationCheckbox;
@property __weak NSPopUpButton *printProductsCountryPopupButton; // @synthesize printProductsCountryPopupButton=_printProductsCountryPopupButton;
@property __weak NSButton *showHolidayEvents; // @synthesize showHolidayEvents=_showHolidayEvents;
@property __weak NSTextField *autoplayVideosLabel; // @synthesize autoplayVideosLabel=_autoplayVideosLabel;
@property __weak NSButton *autoplayVideos; // @synthesize autoplayVideos=_autoplayVideos;
@property __weak NSButton *publishPlacesCheckbox; // @synthesize publishPlacesCheckbox=_publishPlacesCheckbox;
@property __weak NSButton *importByReferenceCheckbox; // @synthesize importByReferenceCheckbox=_importByReferenceCheckbox;
@property __weak NSPathControl *currentLibraryPathControl; // @synthesize currentLibraryPathControl=_currentLibraryPathControl;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_screenConfigurationChanged:(id)arg1;
- (void)_updateExtraPreferencesSection;
- (void)_updateMemoriesNotificationCheckBoxState;
- (void)_updateShowHolidayCalendarEventsButton;
- (void)_updateSystemPhotoLibraryButton;
- (void)a_viewFullHDR:(id)arg1;
- (void)_confirmSwitchSystemPhotoLibrary:(CDUnknownBlockType)arg1;
- (void)a_useAsSystemPhotoLibrary:(id)arg1;
- (void)a_resetBlacklistedMemoryFeatures:(id)arg1;
- (void)a_changeMemoriesNotification:(id)arg1;
- (void)a_changeShowHolidayEvents:(id)arg1;
- (void)a_changeImportByReference:(id)arg1;
- (void)a_changePublishPlaces:(id)arg1;
- (void)a_revealLibraryFromPreferences:(id)arg1;
- (void)a_clickedPath:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
@property(readonly) IPXiCloudConfiguration *cloudConfiguration; // @synthesize cloudConfiguration=_cloudConfiguration;
- (void)initializeFromDefaults;
- (BOOL)isResizable;
- (id)imageForPreferenceNamed:(id)arg1;
- (id)titleForIdentifier:(id)arg1;
- (void)_librarySwitched:(id)arg1;
- (void)_updatePathControlWithURL:(id)arg1;
- (void)_resetBlacklistedMemories;
- (void)_finishedResetBlacklistedMemoriesWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_updateResetBlacklistedMemoriesButton;
- (id)_blacklistedMemoriesForLibrary:(id)arg1;
- (void)_updateCurrentPhotoLibrary;
- (void)_stopObservingSystemLibraryChanges;
- (void)_startObservingSystemLibraryChanges;
- (void)willBeDisplayed;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

