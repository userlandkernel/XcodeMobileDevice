//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSDocument, NSString;
@protocol DVTTabbedWindowCreation;

@protocol DVTTabbedWindowTabContentControlling <NSObject>
@property(retain) NSDocument<DVTTabbedWindowCreation> *document;
@property(copy) NSString *userDefinedTabLabel;
@property(readonly) NSString *tabLabel;
@end

