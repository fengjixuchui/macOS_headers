//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ISSupport/ISS_DAVLock.h>

@interface ISS_DMDAVLock : ISS_DAVLock
{
    double _lockDuration;
}

+ (id)relockRequestWithSession:(id)arg1 URI:(id)arg2 lockToken:(id)arg3 duration:(double)arg4;
+ (id)lockRequestWithSession:(id)arg1 URI:(id)arg2 duration:(double)arg3 owner:(id)arg4;
- (double)lockDuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initRelockWithSession:(id)arg1 URI:(id)arg2 lockToken:(id)arg3 duration:(double)arg4;
- (id)initLockWithSession:(id)arg1 URI:(id)arg2 duration:(double)arg3 owner:(id)arg4;

@end

