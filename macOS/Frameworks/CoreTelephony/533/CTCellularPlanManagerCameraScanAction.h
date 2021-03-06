//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CTCellularPlanManagerCameraScanAction : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;
    NSString *_message;
    NSString *_smdpAddress;
    NSString *_matchingId;
    NSString *_OID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *OID; // @synthesize OID=_OID;
@property(retain, nonatomic) NSString *matchingId; // @synthesize matchingId=_matchingId;
@property(retain, nonatomic) NSString *smdpAddress; // @synthesize smdpAddress=_smdpAddress;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;

@end

