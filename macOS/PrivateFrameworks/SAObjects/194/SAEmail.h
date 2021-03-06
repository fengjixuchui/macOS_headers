//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceComparable.h"

@class NSNumber, NSString;

@interface SAEmail : AceObject <SAAceComparable>
{
}

+ (id)emailWithDictionary:(id)arg1 context:(id)arg2;
+ (id)email;
@property(copy, nonatomic) NSNumber *pseudo;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSNumber *favoriteFacetimeAudio;
@property(copy, nonatomic) NSNumber *favoriteFacetime;
@property(copy, nonatomic) NSString *emailAddress;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

