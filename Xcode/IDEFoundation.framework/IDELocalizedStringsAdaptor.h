//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizedResourceAdaptor.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface IDELocalizedStringsAdaptor : IDELocalizedResourceAdaptor
{
    NSString *_tableName;
    NSDictionary *_baseStrings;
    NSDictionary *_baseComments;
    NSMutableDictionary *_stringsCache;
}

+ (id)readWorkForContext:(id)arg1;
+ (id)writeWorkForContext:(id)arg1 langauge:(id)arg2;
- (void).cxx_destruct;
- (id)comments;
- (id)expectedDirectoryPath;
- (id)expectedFileName;
- (id)expectedSuperitem;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 tableName:(id)arg3 baseStrings:(id)arg4 baseComments:(id)arg5;
- (void)setStrings:(id)arg1 forLanguage:(id)arg2;
- (id)stringsForLanguage:(id)arg1;
- (id)tableName;
- (id)target;
- (void)updateBaseStrings:(id)arg1 updateBaseComments:(id)arg2;

@end

