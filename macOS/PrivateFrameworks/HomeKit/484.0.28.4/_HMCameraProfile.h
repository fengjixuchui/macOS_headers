//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/_HMAccessoryProfile.h>

@class NSArray, _HMCameraAudioControl, _HMCameraSettingsControl, _HMCameraSnapshotControl, _HMCameraStreamControl;

@interface _HMCameraProfile : _HMAccessoryProfile
{
    _HMCameraStreamControl *_streamControlInternal;
    _HMCameraSnapshotControl *_snapshotControlInternal;
    _HMCameraSettingsControl *_settingsControl;
    _HMCameraAudioControl *_speakerControl;
    _HMCameraAudioControl *_microphoneControl;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) _HMCameraAudioControl *microphoneControl; // @synthesize microphoneControl=_microphoneControl;
@property(readonly, nonatomic) _HMCameraAudioControl *speakerControl; // @synthesize speakerControl=_speakerControl;
@property(readonly, nonatomic) _HMCameraSettingsControl *settingsControl; // @synthesize settingsControl=_settingsControl;
@property(readonly, nonatomic) _HMCameraSnapshotControl *snapshotControlInternal; // @synthesize snapshotControlInternal=_snapshotControlInternal;
@property(readonly, nonatomic) _HMCameraStreamControl *streamControlInternal; // @synthesize streamControlInternal=_streamControlInternal;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)configureWithAccessory:(id)arg1 home:(id)arg2 context:(id)arg3;
- (void)_createControls:(id)arg1;
@property(readonly, nonatomic) NSArray *controls;
- (id)init;

@end

