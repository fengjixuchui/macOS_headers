//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSButton, NSImageView;

@interface CNPhotoLikenessBuddyControlsViewController : NSViewController
{
    NSImageView *_iconView;
    NSButton *_keepExistingPhotoButton;
    NSButton *_choosePhotoButton;
    CDUnknownBlockType _keepAction;
}

@property(copy, nonatomic) CDUnknownBlockType keepAction; // @synthesize keepAction=_keepAction;
@property(retain) NSButton *choosePhotoButton; // @synthesize choosePhotoButton=_choosePhotoButton;
@property(retain) NSButton *keepExistingPhotoButton; // @synthesize keepExistingPhotoButton=_keepExistingPhotoButton;
@property(retain) NSImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)setExistingUserImage:(id)arg1 withKeepAction:(CDUnknownBlockType)arg2;
- (void)dontLetGo:(id)arg1;
- (void)setBuddyControlsHidden:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)makeButtonWithTitle:(id)arg1;

@end

