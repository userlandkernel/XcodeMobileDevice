//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEContainerItemCore-Protocol.h>

@class NSArray, NSString;
@protocol IDEContainerCore;

@protocol IDEGroupCore <IDEContainerItemCore>
@property(copy) NSString *name;
@property(retain) id <IDEContainerCore> parentContainer;
@property(copy) NSArray *subitems;
@end
