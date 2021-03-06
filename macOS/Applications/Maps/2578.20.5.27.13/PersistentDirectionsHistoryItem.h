//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString, SearchResult;

__attribute__((visibility("hidden")))
@interface PersistentDirectionsHistoryItem : PBCodable <NSCopying>
{
    double _position;
    double _timestamp;
    NSData *_directionsResponseID;
    SearchResult *_endSearchResult;
    NSString *_reportAProblemAttachment;
    SearchResult *_startSearchResult;
    NSString *_syncIdentifier;
    int _transportType;
    struct {
        unsigned int position:1;
        unsigned int timestamp:1;
        unsigned int transportType:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;
@property(retain, nonatomic) NSString *reportAProblemAttachment; // @synthesize reportAProblemAttachment=_reportAProblemAttachment;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) SearchResult *endSearchResult; // @synthesize endSearchResult=_endSearchResult;
@property(retain, nonatomic) SearchResult *startSearchResult; // @synthesize startSearchResult=_startSearchResult;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) BOOL hasPosition;
@property(readonly, nonatomic) BOOL hasSyncIdentifier;
@property(readonly, nonatomic) BOOL hasReportAProblemAttachment;
@property(readonly, nonatomic) BOOL hasDirectionsResponseID;
@property(readonly, nonatomic) BOOL hasEndSearchResult;
@property(readonly, nonatomic) BOOL hasStartSearchResult;

@end

