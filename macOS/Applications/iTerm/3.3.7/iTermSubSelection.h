//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface iTermSubSelection : NSObject <NSCopying>
{
    BOOL _connected;
    long long _selectionMode;
    CDStruct_c7660f97 _range;
}

+ (void)enumerateRangesInWindowedRange:(CDStruct_c7660f97)arg1 block:(CDUnknownBlockType)arg2;
+ (id)subSelectionWithDictionary:(id)arg1 width:(int)arg2;
+ (id)subSelectionWithRange:(CDStruct_c7660f97)arg1 mode:(long long)arg2 width:(int)arg3;
@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
@property(nonatomic) long long selectionMode; // @synthesize selectionMode=_selectionMode;
@property(nonatomic) CDStruct_c7660f97 range; // @synthesize range=_range;
- (BOOL)isEqual:(id)arg1;
- (id)nonwindowedComponentsWithWidth:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)containsCoord:(CDStruct_1ef3fb1f)arg1;
- (id)description;
- (id)dictionaryValueWithYOffset:(int)arg1;

@end

