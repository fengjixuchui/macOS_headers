//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol BackgroundShadowDrawerProtocol
- (struct CGSize)calculateOuterShadowInset;
- (struct CGPoint)calculateOuterShadowOffset;
- (void)drawOuterShadowsOutsideBounds:(struct CGRect)arg1 isViewFlipped:(BOOL)arg2;
- (void)drawInnerShadowsInsideBounds:(struct CGRect)arg1 isViewFlipped:(BOOL)arg2;
@end

