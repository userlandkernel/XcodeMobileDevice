//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CAMReturnArray, CAMReturnString, CAMReturnVoid, NSString;

@protocol CAMLocaleUtilities

@optional
- (CAMReturnArray *)availableLocaleIdentifiers;
- (CAMReturnString *)currentLocaleIdentifier;
- (CAMReturnString *)currentLogicalLocale;
- (CAMReturnArray *)preferredLanguages;
- (CAMReturnVoid *)setDeviceLanguage:(NSString *)arg1 withLocale:(NSString *)arg2;
@end
