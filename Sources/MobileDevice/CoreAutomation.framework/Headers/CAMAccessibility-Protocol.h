//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CAMReturnBool, CAMReturnDouble, CAMReturnVoid, NSNumber;

@protocol CAMAccessibility

@optional
- (CAMReturnBool *)disableAssistiveTouch;
- (CAMReturnBool *)disableAssistiveTouchHardware;
- (CAMReturnBool *)disableAssistiveTouchScanner;
- (CAMReturnBool *)disableReportingValidationErrors;
- (CAMReturnBool *)disableVoiceOver;
- (CAMReturnBool *)disableZoom;
- (CAMReturnBool *)enableAssistiveTouch;
- (CAMReturnBool *)enableAssistiveTouchHardware;
- (CAMReturnBool *)enableAssistiveTouchScanner;
- (CAMReturnBool *)enableReportingValidationErrors;
- (CAMReturnBool *)enableVoiceOver;
- (CAMReturnBool *)enableZoom;
- (CAMReturnBool *)isAssistiveTouchEnabled;
- (CAMReturnBool *)isAssistiveTouchHardwareEnabled;
- (CAMReturnBool *)isAssistiveTouchScannerEnabled;
- (CAMReturnBool *)isReportingValidationErrors;
- (CAMReturnBool *)isVoiceOverEnabled;
- (CAMReturnBool *)isZoomEnabled;
- (CAMReturnVoid *)setVoiceOverSpeakingRate:(NSNumber *)arg1;
- (CAMReturnVoid *)setVoiceOverSpeakingVolume:(NSNumber *)arg1;
- (CAMReturnDouble *)voiceOverSpeakingRate;
- (CAMReturnDouble *)voiceOverSpeakingVolume;
@end
