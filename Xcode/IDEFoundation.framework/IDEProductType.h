//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatform, NSString;

@interface IDEProductType : NSObject
{
}

+ (id)_expandedPlatformForBuildableProduct:(id)arg1;
+ (BOOL)buildableProductIsAppExtension:(id)arg1;
+ (BOOL)buildableProductIsWatchApp:(id)arg1;
+ (BOOL)buildableProductIsWatchAppExtension:(id)arg1;
+ (id)platformProductTypeOfBuildable:(id)arg1;
+ (id)productTypeForIdentifier:(id)arg1 platform:(id)arg2;
- (id)debugDescription;
@property(readonly) NSString *identifier;
- (BOOL)installsOnProxy;
- (BOOL)isAppExtension;
- (BOOL)isApplication;
- (BOOL)isKindOfProductType:(id)arg1;
- (BOOL)isWatch1AppExtension;
- (BOOL)isWatch1Application;
- (BOOL)isWatch2AppExtension;
- (BOOL)isWatch2Application;
- (BOOL)isWatchAppExtension;
- (BOOL)isWatchApplication;
@property(readonly) NSString *localizedDescription;
@property(readonly) NSString *name;
@property(readonly) DVTPlatform *platform;
- (long long)provisioningProfileSupport;
- (BOOL)runsDirectlyOnProxy;
- (BOOL)runsOnProxy;
- (BOOL)shouldAutocreateSchemes;
@property(readonly) IDEProductType *superType;

@end

