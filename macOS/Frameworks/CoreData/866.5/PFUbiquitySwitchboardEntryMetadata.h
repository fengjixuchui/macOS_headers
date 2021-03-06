//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSPersistentStoreCoordinator, NSSQLCore, NSSet, NSString, PFUbiquityBaselineHeuristics, PFUbiquityLocation, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper, _PFUbiquityRecordsExporter, _PFUbiquityRecordsImporter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboardEntryMetadata : NSObject
{
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    NSString *_activeModelVersionHash;
    NSMutableSet *_stores;
    NSPersistentStoreCoordinator *_privatePSC;
    NSSQLCore *_privateStore;
    _PFUbiquityRecordsImporter *_importer;
    _PFUbiquityRecordsExporter *_exporter;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;
    BOOL _useLocalStorage;
    BOOL _useLocaAccount;
    NSObject<OS_dispatch_queue> *_privateQueue;
    PFUbiquityBaselineHeuristics *_baselineHeuristics;
}

@property(readonly, nonatomic) PFUbiquityBaselineHeuristics *baselineHeuristics; // @synthesize baselineHeuristics=_baselineHeuristics;
@property(nonatomic) BOOL useLocalAccount; // @synthesize useLocalAccount=_useLocaAccount;
@property(nonatomic) BOOL useLocalStorage; // @synthesize useLocalStorage=_useLocalStorage;
@property(readonly, nonatomic) PFUbiquityRecordsImporterSchedulingContext *schedulingContext; // @synthesize schedulingContext=_schedulingContext;
@property(readonly, nonatomic) NSSet *stores; // @synthesize stores=_stores;
@property(readonly, nonatomic) NSSQLCore *privateStore; // @synthesize privateStore=_privateStore;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *privatePSC; // @synthesize privatePSC=_privatePSC;
@property(readonly, nonatomic) NSString *activeModelVersionHash; // @synthesize activeModelVersionHash=_activeModelVersionHash;
@property(retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) _PFUbiquityRecordsExporter *exporter; // @synthesize exporter=_exporter;
@property(readonly, nonatomic) _PFUbiquityRecordsImporter *importer; // @synthesize importer=_importer;
@property(retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper; // @synthesize cacheWrapper=_cacheWrapper;
- (void)removePersistentStore:(id)arg1;
- (void)addPersistentStore:(id)arg1;
- (void)dealloc;
- (void)tearDown;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 localRootLocation:(id)arg3 storeName:(id)arg4 andPrivateQueue:(id)arg5;

@end

