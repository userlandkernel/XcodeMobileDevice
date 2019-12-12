//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSSecureCoding-Protocol.h>

@class DVTFilePath, NSString;

@interface IDEPlaygroundAuxiliarySourceFrameworkStructure : NSObject <NSSecureCoding>
{
    DVTFilePath *_buildProductsPath;
    NSString *_sourcesModuleName;
    DVTFilePath *_frameworkBundlePath;
    DVTFilePath *_originalResourcesDirectory;
    DVTFilePath *_resourcesFolderPath;
    DVTFilePath *_modulesFolderPath;
    DVTFilePath *_moduleBundlePath;
    DVTFilePath *_modulePath;
    DVTFilePath *_dylibPath;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) DVTFilePath *buildProductsPath; // @synthesize buildProductsPath=_buildProductsPath;
- (BOOL)createDirectoryIfNecessary:(id *)arg1;
- (BOOL)createDirectoryStructureIfNecessary:(id *)arg1;
@property(readonly, copy) DVTFilePath *dylibPath; // @synthesize dylibPath=_dylibPath;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) DVTFilePath *frameworkBundlePath; // @synthesize frameworkBundlePath=_frameworkBundlePath;
- (unsigned long long)hash;
- (id)initWithBuildProductsPath:(id)arg1 resourcesDirectory:(id)arg2 sourcesModuleName:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) DVTFilePath *moduleBundlePath; // @synthesize moduleBundlePath=_moduleBundlePath;
@property(readonly, copy) DVTFilePath *modulePath; // @synthesize modulePath=_modulePath;
@property(readonly, copy) DVTFilePath *modulesFolderPath; // @synthesize modulesFolderPath=_modulesFolderPath;
@property(readonly, copy) DVTFilePath *originalResourcesDirectory; // @synthesize originalResourcesDirectory=_originalResourcesDirectory;
- (BOOL)removeDirectoryStructure:(id *)arg1;
@property(readonly, copy) DVTFilePath *resourcesFolderPath; // @synthesize resourcesFolderPath=_resourcesFolderPath;
@property(readonly, copy) NSString *sourcesModuleName; // @synthesize sourcesModuleName=_sourcesModuleName;

@end

