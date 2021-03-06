//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _NSFlowLayoutSection;

@interface _NSFlowLayoutRow : NSObject
{
    NSMutableArray *_items;
    _NSFlowLayoutSection *_section;
    struct CGSize _rowSize;
    struct CGRect _rowFrame;
    long long _index;
    BOOL _isValid;
    BOOL _complete;
    int _verticalAlignement;
    int _horizontalAlignement;
    double _availableSpace;
    struct CGPoint _rowOffsetForDropTargetInsertionGap;
    BOOL _fixedItemSize;
}

@property(nonatomic) double availableSpace; // @synthesize availableSpace=_availableSpace;
@property(nonatomic) BOOL fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) BOOL complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) struct CGPoint rowOffsetForDropTargetInsertionGap; // @synthesize rowOffsetForDropTargetInsertionGap=_rowOffsetForDropTargetInsertionGap;
@property(nonatomic) struct CGRect rowFrame; // @synthesize rowFrame=_rowFrame;
@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) __weak _NSFlowLayoutSection *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (long long)indexOfNearestItemAtPoint:(struct CGPoint)arg1;
- (id)copyFromSection:(id)arg1;
- (id)snapshot;
- (void)removeItemAtIndex:(long long)arg1;
- (void)insertItem:(id)arg1 atIndex:(long long)arg2;
- (void)addItem:(id)arg1 atEnd:(BOOL)arg2;
- (void)layoutRow;
- (void)invalidate;
- (id)init;

@end

