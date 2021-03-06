//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAGradientLayer, NSArray, NSViewController;

@interface PadView : NSView
{
    NSViewController *_viewController;
    unsigned long long _textFaderEdge;
    CAGradientLayer *_maskLayer;
    NSArray *_maskLayerMinYColors;
    NSArray *_maskLayerMaxYColors;
}

+ (id)enclosingPadViewForView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *maskLayerMaxYColors; // @synthesize maskLayerMaxYColors=_maskLayerMaxYColors;
@property(retain, nonatomic) NSArray *maskLayerMinYColors; // @synthesize maskLayerMinYColors=_maskLayerMinYColors;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) unsigned long long textFaderEdge; // @synthesize textFaderEdge=_textFaderEdge;
@property(nonatomic) __weak NSViewController *viewController; // @synthesize viewController=_viewController;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)_padViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

