//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEMigrationTarget.h>

@class NSString;

@interface IDEARCConversionTarget : IDEMigrationTarget
{
    BOOL _fileOveridesARCSetting;
    NSString *_displayName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *blueprintProviderName;
@property(readonly) BOOL buildsWithARC;
@property(readonly) BOOL canConvertToUseARC;
@property BOOL convertsToARC;
- (void)disableOverridingBuildSettings;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
- (void)enableOverridingBuildSettings;
@property(readonly) BOOL fileOveridesARCSetting; // @synthesize fileOveridesARCSetting=_fileOveridesARCSetting;
- (id)initWithBlueprint:(id)arg1 migrationContext:(id)arg2;
- (BOOL)shouldMigrate;
- (void)updateBuildSettings;
- (id)warningMessage;

@end

