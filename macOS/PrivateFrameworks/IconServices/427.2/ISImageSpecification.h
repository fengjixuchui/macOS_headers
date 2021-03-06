//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ISImageSpecification : NSObject
{
    double _scale;
    ISImageSpecification *_smallerSpecification;
    ISImageSpecification *_largerSpecification;
    struct CGSize _size;
}

@property(readonly) ISImageSpecification *largerSpecification; // @synthesize largerSpecification=_largerSpecification;
@property(readonly) ISImageSpecification *smallerSpecification; // @synthesize smallerSpecification=_smallerSpecification;
@property(readonly) double scale; // @synthesize scale=_scale;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)setSmallerSpecification:(id)arg1;
- (void)setLargerSpecification:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2;

@end

