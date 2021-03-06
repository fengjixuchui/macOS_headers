//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, PKAppletSubcredentialEntitlement, PKSharedAppletSubcredentialMetadata;

@interface PKSharedAppletSubcredential : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _canBeRevoked;
    NSString *_identifier;
    NSString *_name;
    long long _state;
    PKAppletSubcredentialEntitlement *_entitlement;
    PKSharedAppletSubcredentialMetadata *_metadata;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool canBeRevoked; // @synthesize canBeRevoked=_canBeRevoked;
@property(retain, nonatomic) PKSharedAppletSubcredentialMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement; // @synthesize entitlement=_entitlement;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)updateWithSharedCredentialManifestItem:(id)arg1 credential:(id)arg2;
- (id)initWithIdentifier:(id)arg1 sharingInvitationReceipt:(id)arg2;
- (id)initWithSharedCredentialManifestItem:(id)arg1 credential:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

