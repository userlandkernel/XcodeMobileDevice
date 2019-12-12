//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEDistributionContext, NSDictionary;

@interface IDEDistributionDriver : NSObject
{
    IDEDistributionContext *_initialContext;
    NSDictionary *_exportOptionsPlist;
}

+ (id)distributionDriverWithArchive:(id)arg1 optionsPlist:(id)arg2 andError:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *exportOptionsPlist; // @synthesize exportOptionsPlist=_exportOptionsPlist;
@property(retain) IDEDistributionContext *initialContext; // @synthesize initialContext=_initialContext;
- (_Bool)runWithDestinationPath:(id)arg1 error:(id *)arg2;

@end

