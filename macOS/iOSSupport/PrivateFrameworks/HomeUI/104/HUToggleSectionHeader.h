//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIButton;
@protocol HUToggleSectionHeaderDelegate;

@interface HUToggleSectionHeader : UITableViewHeaderFooterView
{
    unsigned long long _toggleState;
    id <HUToggleSectionHeaderDelegate> _delegate;
    UIButton *_toggleButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(nonatomic) __weak id <HUToggleSectionHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long toggleState; // @synthesize toggleState=_toggleState;
@property(nonatomic) BOOL toggleButtonHidden;
- (void)_toggle:(id)arg1;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

@end

