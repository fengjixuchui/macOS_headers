//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OADAutoNumberBulletProperties;

@interface OAETNumberBulletLevelInfo : NSObject
{
    BOOL _emptyParagraph;
    OADAutoNumberBulletProperties *_numberBullet;
    unsigned long long _currentNumber;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL emptyParagraph; // @synthesize emptyParagraph=_emptyParagraph;
@property(nonatomic) unsigned long long currentNumber; // @synthesize currentNumber=_currentNumber;
@property(readonly, retain, nonatomic) OADAutoNumberBulletProperties *numberBullet; // @synthesize numberBullet=_numberBullet;
- (id)initWithNumberBullet:(id)arg1 currentNumber:(unsigned long long)arg2 emptyParagraph:(BOOL)arg3;

@end

