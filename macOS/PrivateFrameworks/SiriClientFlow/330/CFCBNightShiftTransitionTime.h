//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AceObject.h"

#import "SAAceSerializable.h"

@class NSString;

@interface CFCBNightShiftTransitionTime : AceObject <SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nightShiftTransitionTimeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nightShiftTransitionTime;
@property(nonatomic) long long minute;
@property(nonatomic) long long hour;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

