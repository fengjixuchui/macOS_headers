//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface _MFTableViewModelDiff : NSObject
{
    NSIndexSet *_changedRows;
    NSIndexSet *_deletedRows;
    NSIndexSet *_insertedRows;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexSet *insertedRows; // @synthesize insertedRows=_insertedRows;
@property(retain, nonatomic) NSIndexSet *deletedRows; // @synthesize deletedRows=_deletedRows;
@property(retain, nonatomic) NSIndexSet *changedRows; // @synthesize changedRows=_changedRows;

@end

