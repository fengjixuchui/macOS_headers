//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICScannerFeatureRangeProps : NSObject
{
    double _currentValue;
    double _defaultValue;
    double _minValue;
    double _maxValue;
    double _stepSize;
}

@property double maxValue; // @synthesize maxValue=_maxValue;
@property double minValue; // @synthesize minValue=_minValue;
@property double stepSize; // @synthesize stepSize=_stepSize;
@property double defaultValue; // @synthesize defaultValue=_defaultValue;
@property double currentValue; // @synthesize currentValue=_currentValue;
- (double)getValidatedValue:(double)arg1;

@end

