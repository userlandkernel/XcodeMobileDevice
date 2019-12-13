//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, NSImage;

@interface DVTImageLiteralQuickEditPreview : NSObject
{
    struct CGImageSource *imageSource;
    DVTFilePath *_imageFilePath;
    NSImage *_previewImage;
}

+ (id)previewLoadingOperationQueue;
- (void).cxx_destruct;
- (void)complete:(CDUnknownBlockType)arg1;
- (BOOL)createImageSource;
- (void)dealloc;
@property(retain, nonatomic) DVTFilePath *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
- (id)initWithImageFilePath:(id)arg1;
@property(retain, nonatomic) NSImage *previewImage; // @synthesize previewImage=_previewImage;
- (void)requestPreviewImageWithCompletion:(CDUnknownBlockType)arg1;

@end
