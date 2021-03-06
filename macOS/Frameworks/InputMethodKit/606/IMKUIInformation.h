//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKInputController, IMKUICandidateTouchBarController, IMKUIWindowBasedCandidateController;

@interface IMKUIInformation : NSObject
{
    IMKUICandidateTouchBarController *_touchBarController;
    IMKUIWindowBasedCandidateController *_visibleOnscreenController;
}

+ (double)maxWidthOfHandwritingCandidates;
+ (double)widthOfHandwritingCandidatesForTouchBarWidth:(double)arg1 candidateSurfaceWidth:(double)arg2;
+ (double)touchBarWidth;
+ (double)quickTypeBarWidth;
+ (double)candidateSurfaceWidth;
+ (id)sharedInformation;
+ (BOOL)isUsingSubclassingImplementation;
+ (BOOL)isAppleInternal;
+ (BOOL)isTouchBarAvailable;
@property(retain, nonatomic) IMKUIWindowBasedCandidateController *visibleOnscreenController; // @synthesize visibleOnscreenController=_visibleOnscreenController;
@property(retain, nonatomic) IMKUICandidateTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
- (void)dealloc;
@property(readonly, nonatomic) IMKInputController *inputController;
@property(readonly, nonatomic) id textClient;

@end

