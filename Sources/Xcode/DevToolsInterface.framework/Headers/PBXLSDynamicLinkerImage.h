//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXLSModel.h>

@class NSMutableArray, NSString, PBXLSAddressRange;

@interface PBXLSDynamicLinkerImage : PBXLSModel
{
    NSString *_sharedLibraryPath;
    NSString *_name;
    PBXLSAddressRange *_addressRange;
    int _symbolsStatus;
    int _symbolsLevel;
    int _symbolsLoadTime;
    int _sharedLibraryStatus;
    NSMutableArray *_globalVariables;
}

+ (id)_myBundle;
+ (id)nameFromPath:(id)arg1;
+ (id)stringForSharedLibraryStatus:(int)arg1;
+ (id)stringForSymbolsLevel:(int)arg1;
+ (id)stringForSymbolsLoadTime:(int)arg1;
+ (id)symbolLevelArray;
+ (id)systemSharedLibraryNameRegEx;
- (id)addressRange;
- (long long)compareByAddress:(id)arg1;
- (long long)compareByName:(id)arg1;
- (long long)compareBySymbolsLevel:(id)arg1;
- (long long)compareBySymbolsWhenToLoad:(id)arg1;
- (id)contentDescription;
- (void)dealloc;
- (id)description;
- (void)didUpdateSymbolsToLevel;
- (id)displayName;
- (id)dynamicLinkerImageController;
- (id)globalVariables;
- (id)init;
- (BOOL)isSystemSharedLibrary;
- (id)name;
- (void)requestUpdateSymbolsToLevel:(int)arg1;
- (void)setAddressRange:(id)arg1;
- (void)setEqualTo:(id)arg1;
- (void)setGlobalVariables:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSharedLibraryPath:(id)arg1;
- (void)setSharedLibraryStatus:(int)arg1;
- (void)setSymbolsLevel:(int)arg1;
- (void)setSymbolsLoadTime:(int)arg1;
- (void)setSymbolsStatus:(int)arg1;
- (id)sharedLibraryPath;
- (int)sharedLibraryStatus;
- (int)symbolsLevel;
- (int)symbolsLoadTime;
- (int)symbolsStatus;

@end
