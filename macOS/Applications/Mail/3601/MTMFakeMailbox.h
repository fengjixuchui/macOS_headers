//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTMMailbox.h"

@class NSIndexSet, NSMutableArray, NSMutableIndexSet;

@interface MTMFakeMailbox : MTMMailbox
{
    NSMutableArray *_fakeMessages;
    NSMutableIndexSet *_fakeSelectionIndexes;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSIndexSet *selectedMessageIndexes;
- (id)messages;
- (id)initWithDictionary:(id)arg1 controller:(id)arg2;
- (id)init;
- (id)initWithMessageDescriptions:(id)arg1;

@end

