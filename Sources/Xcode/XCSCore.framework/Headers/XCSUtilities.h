//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XCSUtilities : NSObject
{
}

+ (id)arrayOfJSONRepresentations:(id)arg1;
+ (id)convertDateToString:(id)arg1 usingFormat:(id)arg2;
+ (id)convertMillisecondsToHumanReadable:(unsigned long long)arg1;
+ (id)convertStringToDate:(id)arg1;
+ (id)convertStringToDate:(id)arg1 usingFormat:(id)arg2;
+ (BOOL)isCodeStandardHTTPStatus:(long long)arg1;
+ (BOOL)isCodeXcodeServerHTTPStatus:(long long)arg1;
+ (id)localizedStringForHTTPStatus:(long long)arg1;
+ (id)object:(id)arg1 JSONParseWithError:(id *)arg2;
+ (id)object:(id)arg1 toJSONDataWithError:(id *)arg2;
+ (id)object:(id)arg1 toJSONDataWithOptions:(unsigned long long)arg2 error:(id *)arg3;
+ (id)object:(id)arg1 toJSONWithError:(id *)arg2;
+ (id)object:(id)arg1 toJSONWithOptions:(unsigned long long)arg2 error:(id *)arg3;
+ (id)stringForCFNetworkErrorCode:(long long)arg1;
+ (id)timestampUSLocale;
+ (BOOL)writeData:(id)arg1 toFileHandle:(id)arg2 domain:(id)arg3 code:(long long)arg4 error:(id *)arg5;

@end

