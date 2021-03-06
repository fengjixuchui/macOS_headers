//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXAssetReference, PXAssetsDataSourceManager, PXPhotoKitUIMediaProvider, PXPhotosDataSource;

@interface PXSearchResultsOneUpViewModel : NSObject
{
    PXPhotoKitUIMediaProvider *_mediaProvider;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXPhotosDataSource *_dataSource;
    PXAssetReference *_initialAssetReference;
}

@property(retain, nonatomic) PXAssetReference *initialAssetReference; // @synthesize initialAssetReference=_initialAssetReference;
@property(retain, nonatomic) PXPhotosDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
- (void).cxx_destruct;
- (void)updateDataSourceWithFetchResult:(id)arg1;
- (id)initWithOneUpWithAsset:(id)arg1 atIndex:(unsigned long long)arg2 inAssetCollection:(id)arg3;

@end

