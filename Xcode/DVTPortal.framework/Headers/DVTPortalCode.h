//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DVTPortalCode : NSObject
{
    NSString *_identifier;
    long long _code;
}

+ (id)_orderedPortalCodeIdentifierToCodeMap;
+ (id)_orderedPortalCodeIdentifierToCodeMap:(id)arg1;
+ (id)portalCodeWithIdentifier:(id)arg1;
+ (id)portalCodes;
+ (id)successCode;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;
- (id)description;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCode:(long long)arg1 identifier:(id)arg2;
- (id)initWithExtension:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

