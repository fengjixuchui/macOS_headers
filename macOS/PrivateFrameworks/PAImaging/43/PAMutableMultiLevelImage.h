//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PAImaging/PAMultiLevelImage.h>

@interface PAMutableMultiLevelImage : PAMultiLevelImage
{
}

- (void)removeAllLevels;
- (void)removeImageAtLevel:(unsigned long long)arg1;
- (void)removeImage:(id)arg1;
- (void)addImage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setDisplayOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setSize:(struct CGSize)arg1;

@end

