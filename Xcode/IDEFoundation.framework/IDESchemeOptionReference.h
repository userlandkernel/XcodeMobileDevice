//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>

@class NSString;

@interface IDESchemeOptionReference : NSObject <DVTXMLUnarchiving>
{
    NSString *_identifier;
    NSString *resolvedReference;
}

- (void).cxx_destruct;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
@property(copy) NSString *resolvedReference; // @synthesize resolvedReference;
- (id)resolvedReferenceForWorkspace:(id)arg1;
- (void)setIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

