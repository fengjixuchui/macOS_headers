//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<CRKClassKitRosterRequirements>;

@interface CRKASMRosterUpdater : NSObject
{
    NSObject<CRKClassKitRosterRequirements> *_requirements;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements; // @synthesize requirements=_requirements;
- (id)courseWithIdentifier:(id)arg1 inRoster:(id)arg2;
- (id)objectIDForCourseWithIdentifier:(id)arg1 inRoster:(id)arg2 error:(id *)arg3;
- (void)removeOperationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCourseWithIdentifier:(id)arg1 roster:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateClassOperationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 roster:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createClassOperationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createClassWithProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithRequirements:(id)arg1;

@end

