//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDETemplate.h>

#import <IDEKit/NSPasteboardReading-Protocol.h>
#import <IDEKit/NSPasteboardWriting-Protocol.h>

@class NSImage, NSString;

@interface IDETemplate (IDEKitAdditions) <NSPasteboardWriting, NSPasteboardReading>
+ (id)_templateIconCache;
+ (id)cachedBasicPasteboardTypeAsArray;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)fallbackTemplateIcon;
- (id)imageAtTemplateSize:(id)arg1;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
@property(readonly, copy) NSImage *templateIcon;
- (id)writableTypesForPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

