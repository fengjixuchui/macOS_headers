//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TMLAspectsRegistration : NSObject
{
    NSMapTable *_registeredAspects;
}

+ (id)keysForObject:(id)arg1 withMetaObjects:(id)arg2 signalName:(id)arg3 advice:(int)arg4;
+ (id)keyForClassNamed:(id)arg1 signalName:(id)arg2 advice:(int)arg3;
+ (id)keyForProtocolNamed:(id)arg1 signalName:(id)arg2 advice:(int)arg3;
+ (id)shared;
- (void).cxx_destruct;
- (id)aspectsForObject:(id)arg1 signalName:(id)arg2 advice:(int)arg3;
- (id)aspectsWithKeys:(id)arg1;
- (id)aspectsWithKey:(id)arg1;
- (id)strongAspectsFromArray:(id)arg1;
- (void)unregisterAspect:(id)arg1 withKey:(id)arg2;
- (void)registerAspect:(id)arg1 withKey:(id)arg2;
- (id)storageForKey:(id)arg1 createIfMissing:(BOOL)arg2;
- (id)init;

@end

