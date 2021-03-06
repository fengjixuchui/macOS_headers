//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXVerticallySectionedCollectionsLayout.h"

@interface IPXPeopleHomeLayout : IPXVerticallySectionedCollectionsLayout
{
    BOOL _wantsProgressFooter;
    double _headerHeight;
    struct CGSize _itemSizeAbsoluteOffset;
}

+ (Class)layoutAccessibilityClass;
@property(nonatomic) BOOL wantsProgressFooter; // @synthesize wantsProgressFooter=_wantsProgressFooter;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) struct CGSize itemSizeAbsoluteOffset; // @synthesize itemSizeAbsoluteOffset=_itemSizeAbsoluteOffset;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1 withIndexPaths:(id)arg2 movedToIndexPath:(id)arg3 atPoint:(struct CGPoint)arg4;
- (id)_layoutAttributesForElementsInRect:(struct CGRect)arg1 includingIndexPaths:(id)arg2;
- (long long)dropPositionForPoint:(struct CGPoint)arg1 withIndexPaths:(id)arg2 movedToIndexPath:(id)arg3;
- (long long)_dropPositionForPoint:(struct CGPoint)arg1 indexPath:(id)arg2 allowedPositions:(long long)arg3;
- (id)proposedDropIndexPathForDraggingPoint:(struct CGPoint)arg1;
- (void)layoutWillPrepareSection:(id)arg1;
- (void)prepareLayout;
- (Class)layoutSectionClassForSectionAtIndex:(long long)arg1;

@end

