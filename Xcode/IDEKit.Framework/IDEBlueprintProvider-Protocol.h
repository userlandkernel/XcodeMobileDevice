//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol IDEBlueprint, IDETestableProvider;

@protocol IDEBlueprintProvider <DVTInvalidation, NSObject>
- (id <IDEBlueprint>)blueprintForIdentifier:(NSString *)arg1;
- (id <IDEBlueprint>)blueprintForName:(NSString *)arg1;
- (NSArray *)blueprints;
- (NSString *)classPrefix;
- (NSString *)name;
- (NSString *)organizationName;
- (id <IDETestableProvider>)testableProvider;
@end

