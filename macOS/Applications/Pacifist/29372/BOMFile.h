//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ArchiveFile.h"

@class NSDictionary;

@interface BOMFile : ArchiveFile
{
    NSDictionary *_bomFileInfoDictionary;
}

@property(copy, nonatomic) NSDictionary *bomFileInfoDictionary; // @synthesize bomFileInfoDictionary=_bomFileInfoDictionary;
- (void).cxx_destruct;
- (void)loadPropertiesFromArchive:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)loadPropertiesFromCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)supportsChecksums;
- (BOOL)doUnpackItems:(id)arg1 toDirectoryAtURL:(id)arg2 privilegedOpsHandler:(id)arg3 threadingHandler:(id)arg4 error:(id *)arg5;
- (BOOL)loadArchiveResourcesAndReturnIncorrectChecksum:(char *)arg1 error:(id *)arg2;
- (BOOL)loadArchiveContentsAndReturnIncorrectChecksum:(char *)arg1 error:(id *)arg2;
- (id)infoDictionary;

@end

