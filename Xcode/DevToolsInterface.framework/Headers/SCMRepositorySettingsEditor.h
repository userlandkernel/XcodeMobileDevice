//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSView, SCMRepository;

@interface SCMRepositorySettingsEditor : NSObject
{
    NSView *_contentView;
    SCMRepository *_repository;
    NSMutableArray *_editors;
}

- (BOOL)commitEditing;
- (id)contentView;
- (void)dealloc;
- (id)initWithRepository:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (id)repository;
- (void)setRepository:(id)arg1;

@end
