//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEUtilitySlice.h>

@class DVTExtension;

@interface _IDEUtilitySliceExtension : IDEUtilitySlice
{
    DVTExtension *_extension;
}

- (void).cxx_destruct;
- (id)bundle;
- (id)categoryIdentifier;
- (id)contentType;
- (Class)controllerClass;
- (id)description;
@property(retain, nonatomic) DVTExtension *extension; // @synthesize extension=_extension;
- (id)identifier;
- (id)initWithExtension:(id)arg1;
- (id)inspectorTitle;
- (id)inspectorTitleKeyPath;
- (id)maximumAllowedRuntimeOSVersion;
- (id)minimumRequiredRuntimeOSVersion;
- (id)name;
- (id)positionAnchor;
- (id)positionPriority;
- (id)sliceDictionary;
- (id)sliceFile;
- (BOOL)supportsDocumentInspection;
- (BOOL)supportsDocumentUndo;
- (id)valueForKey:(id)arg1;
- (id)version;
- (BOOL)wantsBottomPadding;
- (BOOL)wantsHeaderBottomBorder;

@end

