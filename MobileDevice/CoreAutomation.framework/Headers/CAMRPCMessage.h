//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface CAMRPCMessage : NSObject
{
    NSString *target;
    NSString *method;
    NSArray *arguments;
    BOOL expectsReturn;
}

- (void).cxx_destruct;
@property(retain) NSArray *arguments; // @synthesize arguments;
@property BOOL expectsReturn; // @synthesize expectsReturn;
@property(copy) NSString *method; // @synthesize method;
@property(readonly) NSData *serializedData;
@property(copy) NSString *target; // @synthesize target;

@end
