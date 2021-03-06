//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MTTouchInsetsButton, UIColor, UIFont, UILabel;

@interface MTCountInfoButton : UIControl
{
    unsigned long long _index;
    unsigned long long _count;
    MTTouchInsetsButton *_button;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MTTouchInsetsButton *button; // @synthesize button=_button;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void)buttonTapped:(id)arg1;
- (struct CGSize)labelSize;
- (struct CGSize)buttonSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_createLabelTextForCurrentState;
- (void)_updateLabelText;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
- (void)setIndex:(unsigned long long)arg1 forCount:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

