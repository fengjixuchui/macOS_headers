//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTextCell.h"

@interface TMarginedTextCell : TTextCell
{
    double _leftMargin;
    double _rightMargin;
    _Bool _subpixelAntialiasing;
}

@property(nonatomic) _Bool subpixelAntialiasing; // @synthesize subpixelAntialiasing=_subpixelAntialiasing;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)initCommon;

@end

