//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class NSData;

@interface SISchemaPersonalization : PBCodable
{
    BOOL _personalDomainsSetup;
    BOOL _appleMusicSubscriber;
}

@property(nonatomic) BOOL appleMusicSubscriber; // @synthesize appleMusicSubscriber=_appleMusicSubscriber;
@property(nonatomic) BOOL personalDomainsSetup; // @synthesize personalDomainsSetup=_personalDomainsSetup;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end

