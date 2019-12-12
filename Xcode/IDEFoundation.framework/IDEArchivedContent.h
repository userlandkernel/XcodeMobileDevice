//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDEArchive, IDEArchivePackager, NSString;

@interface IDEArchivedContent : NSObject
{
    IDEArchive *_archive;
}

+ (id)_archivedContentBundleIdentifierForArchive:(id)arg1;
+ (id)_archivedContentBundleVersionForArchive:(id)arg1;
+ (id)_archivedContentPathForArchive:(id)arg1;
+ (id)_archivedContentShortBundleVersionStringForArchive:(id)arg1;
+ (id)archivedContentInfoDictForArchive:(id)arg1;
+ (id)archivedContentPathPlistKey;
+ (id)archivedContentPropertiesPlistKey;
+ (id)archivedContentWithArchive:(id)arg1;
+ (id)contentClasses;
+ (BOOL)fillArchivedContentInfoInArchiveInfoDictionary:(id)arg1 forContentInArchiveProductsDirectory:(id)arg2;
+ (BOOL)fillInfoDictionary:(id)arg1 forContentAtPath:(id)arg2 inArchiveProductsDirectory:(id)arg3;
+ (id)keyPathsForValuesAffectingContentPath;
+ (id)soleArchivedContentRelativePathInDirectory:(id)arg1;
+ (BOOL)validArchivedContentInfoInArchive:(id)arg1;
- (void).cxx_destruct;
@property(readonly) IDEArchive *archive; // @synthesize archive=_archive;
- (long long)autodetectedFormatForPackaging;
@property(readonly) NSString *bundleIdentifier;
@property(readonly) NSString *bundleVersion;
@property(readonly) DVTFilePath *contentPath;
- (id)initWithArchive:(id)arg1;
@property(readonly) IDEArchivePackager *packager;
@property(readonly) NSString *shortBundleVersionString;
- (BOOL)supportsPackagingAsFormat:(long long)arg1;
@property(readonly) NSString *teamIdentifier;

@end

