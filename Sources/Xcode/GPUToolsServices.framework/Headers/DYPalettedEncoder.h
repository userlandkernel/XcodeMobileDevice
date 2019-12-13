//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsServices/DYEncoder.h>

@interface DYPalettedEncoder : DYEncoder
{
}

- (id)_convertPaletteRGB565:(id)arg1 numEntries:(unsigned int)arg2;
- (id)_convertPaletteRGB5A1:(id)arg1 numEntries:(unsigned int)arg2;
- (id)_convertPaletteRGB8:(id)arg1 numEntries:(unsigned int)arg2;
- (id)_convertPaletteRGBA4:(id)arg1 numEntries:(unsigned int)arg2;
- (id)_convertPaletteRGBA8:(id)arg1 numEntries:(unsigned int)arg2;
- (id)_convertTexels4Bit:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 palette:(id)arg4;
- (id)_convertTexels8Bit:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 palette:(id)arg4;
- (id)decode:(id)arg1 format:(unsigned int)arg2 level:(unsigned int)arg3 width:(unsigned int)arg4 height:(unsigned int)arg5 options:(id)arg6;
- (id)encode:(id)arg1 level:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 options:(id)arg5 errorCode:(int *)arg6;
- (BOOL)supportsFormat:(unsigned int)arg1;

@end
