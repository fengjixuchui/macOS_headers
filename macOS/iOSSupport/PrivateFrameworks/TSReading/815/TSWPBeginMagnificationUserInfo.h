//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPRep;

@interface TSWPBeginMagnificationUserInfo : NSObject
{
    TSWPRep *_target;
    struct CGPoint _magnificationPoint;
    struct CGPoint _offset;
    BOOL _animated;
}

@property(nonatomic) BOOL animated; // @synthesize animated=_animated;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) struct CGPoint magnificationPoint; // @synthesize magnificationPoint=_magnificationPoint;
@property(nonatomic) TSWPRep *target; // @synthesize target=_target;

@end

