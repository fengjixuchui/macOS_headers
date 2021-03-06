//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

@class NSImage, NSTimer;

@interface PSMOverflowPopUpButton : NSPopUpButton
{
    NSImage *_PSMTabBarOverflowPopUpImage;
    NSImage *_PSMTabBarOverflowDownPopUpImage;
    BOOL _down;
    BOOL _animatingAlternateImage;
    NSTimer *_animationTimer;
    float _animationValue;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)animateStep:(id)arg1;
- (BOOL)animatingAlternateImage;
- (void)setAnimatingAlternateImage:(BOOL)arg1;
- (void)notificationReceived:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 pullsDown:(BOOL)arg2;

@end

