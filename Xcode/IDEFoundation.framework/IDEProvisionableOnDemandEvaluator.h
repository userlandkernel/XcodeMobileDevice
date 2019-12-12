//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEProvisioningManagerRepairObserver-Protocol.h>

@class DVTSemaphore, DVTStackBacktrace, IDEProvisionableStatusEvaluation, IDEProvisionableStatusEvaluator, IDEProvisionableStatusEvalutorInputs, IDEProvisioningManager, IDEProvisioningUserAction, NSError, NSString;

@interface IDEProvisionableOnDemandEvaluator : NSObject <IDEProvisioningManagerRepairObserver, DVTInvalidation>
{
    BOOL _shouldRepair;
    IDEProvisionableStatusEvalutorInputs *_evaluationInputs;
    NSString *_configuration;
    IDEProvisioningManager *_provisioningManager;
    CDUnknownBlockType _updateEvaluationInputsBlock;
    IDEProvisionableStatusEvaluator *_statusEvaluator;
    DVTSemaphore *_semaphore;
    IDEProvisionableStatusEvaluation *_evaluation;
    NSError *_repairError;
    IDEProvisioningUserAction *_repairUserAction;
}

+ (id)evaluatorWithEvaluationInputs:(id)arg1 configuration:(id)arg2 shouldRepair:(BOOL)arg3 provisioningManager:(id)arg4 updateEvaluationInputsBlock:(CDUnknownBlockType)arg5;
+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)_actuallyShouldRepair;
- (void)_waitForEvaluation;
@property(retain) NSString *configuration; // @synthesize configuration=_configuration;
- (id)evaluate;
@property(retain) IDEProvisionableStatusEvaluation *evaluation; // @synthesize evaluation=_evaluation;
@property(retain) IDEProvisionableStatusEvalutorInputs *evaluationInputs; // @synthesize evaluationInputs=_evaluationInputs;
- (void)primitiveInvalidate;
@property(retain) IDEProvisioningManager *provisioningManager; // @synthesize provisioningManager=_provisioningManager;
@property(retain) NSError *repairError; // @synthesize repairError=_repairError;
@property(retain) IDEProvisioningUserAction *repairUserAction; // @synthesize repairUserAction=_repairUserAction;
@property(readonly) BOOL requiresImmediateUserActionResolution;
@property(retain) DVTSemaphore *semaphore; // @synthesize semaphore=_semaphore;
@property BOOL shouldRepair; // @synthesize shouldRepair=_shouldRepair;
@property(retain) IDEProvisionableStatusEvaluator *statusEvaluator; // @synthesize statusEvaluator=_statusEvaluator;
@property(copy) CDUnknownBlockType updateEvaluationInputsBlock; // @synthesize updateEvaluationInputsBlock=_updateEvaluationInputsBlock;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

