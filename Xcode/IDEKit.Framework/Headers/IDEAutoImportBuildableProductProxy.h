//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, NSHashTable, NSSet, NSString;
@protocol IDEBlueprint, IDEBuildableProduct;

@interface IDEAutoImportBuildableProductProxy : NSObject
{
    BOOL _cached;
    id <IDEBuildableProduct> _buildableProduct;
    id <IDEBlueprint> _blueprint;
    DVTFilePath *_filePath;
    NSSet *_namesOfLinkedBinaries;
    NSString *_productName;
    NSHashTable *_supportedPlatforms;
    NSHashTable *_SDKs;
    NSSet *_sourceCodeFilePaths;
    NSSet *_publicHeaders;
    NSSet *_privateHeaders;
    NSSet *_projectHeaders;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *SDKs; // @synthesize SDKs=_SDKs;
@property(nonatomic) __weak id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(nonatomic) __weak id <IDEBuildableProduct> buildableProduct; // @synthesize buildableProduct=_buildableProduct;
- (void)cacheBuildableProductData;
- (void)cacheBuildableProductDataIfNecessary;
- (BOOL)containsFilePath:(id)arg1;
@property(retain, nonatomic) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (id)initWithBuildableProduct:(id)arg1;
@property(nonatomic, getter=isCached) BOOL cached; // @synthesize cached=_cached;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(retain, nonatomic) NSSet *namesOfLinkedBinaries; // @synthesize namesOfLinkedBinaries=_namesOfLinkedBinaries;
@property(copy, nonatomic) NSSet *privateHeaders; // @synthesize privateHeaders=_privateHeaders;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSSet *projectHeaders; // @synthesize projectHeaders=_projectHeaders;
@property(copy, nonatomic) NSSet *publicHeaders; // @synthesize publicHeaders=_publicHeaders;
@property(copy, nonatomic) NSSet *sourceCodeFilePaths; // @synthesize sourceCodeFilePaths=_sourceCodeFilePaths;
@property(retain, nonatomic) NSHashTable *supportedPlatforms; // @synthesize supportedPlatforms=_supportedPlatforms;
- (unsigned long long)visibilityOfHeaderAtFilePath:(id)arg1;

@end
