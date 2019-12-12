//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTCustomDataSpecifier, DVTPreferenceSetManager, NSArray, NSData, NSImage, NSString, NSURL;
@protocol DVTPreferenceSet;

@protocol DVTPreferenceSet <DVTInvalidation>
+ (NSURL *)builtInPreferenceSetsDirectoryURL;
+ (NSString *)defaultKeyForCurrentPreferenceSet;
+ (NSString *)defaultKeyForExcludedBuiltInPreferenceSets;
+ (NSString *)preferenceSetGroupingName;
+ (NSString *)preferenceSetsFileExtension;
+ (NSString *)preferenceSetsListHeader;
+ (DVTPreferenceSetManager *)preferenceSetsManager;
+ (id <DVTPreferenceSet>)systemPreferenceSet;
+ (NSString *)titleForNewPreferenceSetFromTemplate;
+ (NSArray *)upgradablePreferenceSetsFileExtensions;
@property BOOL contentNeedsSaving;
@property(retain) DVTCustomDataSpecifier *customDataSpecifier;
- (NSData *)dataRepresentationWithError:(id *)arg1;
@property(retain) NSImage *image;
- (id)initWithCustomDataSpecifier:(DVTCustomDataSpecifier *)arg1 basePreferenceSet:(id <DVTPreferenceSet>)arg2;
- (id)initWithName:(NSString *)arg1 dataURL:(NSURL *)arg2;
@property(readonly, getter=isBuiltIn) BOOL builtIn;
@property(readonly, copy) NSString *localizedName;
@property(readonly, copy) NSString *name;

@optional
+ (NSString *)titleForManagePreferenceSets;
@end

